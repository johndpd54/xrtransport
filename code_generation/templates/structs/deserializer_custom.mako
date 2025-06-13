static void deserialize(XrInstanceCreateInfo* s, std::istream& in) {
    deserialize(&s->type, in);
    XrStructureType next_type{};
    deserialize(&next_type, in);
    if (next_type != XR_TYPE_UNKNOWN) {
        XrBaseOutStructure* next{};
        allocator_lookup(next_type)(&next, 1);
        deserializer_lookup(next_type)(next, in);
        s->next = next;
    }
    else {
        s->next = nullptr;
    }

    deserialize(&s->createFlags, in);
    deserialize(&s->applicationInfo, in);
    deserialize(&s->enabledApiLayerCount, in);

    char** enabledApiLayerNames = new char*[s->enabledApiLayerCount]();
    for (int i = 0; i < s->enabledApiLayerCount; i++) {
        std::size_t string_length{};
        deserialize(reinterpret_cast<std::uint32_t*>(&string_length), in);
        char* str = new char[string_length]();
        for (int j = 0; j < string_length; j++) {
            deserialize(&str[j], in);
        }
        enabledApiLayerNames[i] = str;
    }
    s->enabledApiLayerNames = enabledApiLayerNames;

    deserialize(&s->enabledExtensionCount, in);
    
    char** enabledExtensionNames = new char*[s->enabledExtensionCount]();
    for (int i = 0; i < s->enabledExtensionCount; i++) {
        std::size_t string_length{};
        deserialize(reinterpret_cast<std::uint32_t*>(&string_length), in);
        char* str = new char[s->enabledExtensionCount]();
        for (int j = 0; j < string_length; j++) {
            deserialize(&str[j], in);
        }
        enabledExtensionNames[i] = str;
    }
    s->enabledExtensionNames;
}

static void cleanup(const XrInstanceCreateInfo* s) {
    if (s->next != nullptr) {
        const XrBaseOutStructure* next = reinterpret_cast<const XrBaseOutStructure*>(s->next);
        cleaner_lookup(next->type)(next);
        delete[] next;
    }
    for (int i = 0; i < s->enabledApiLayerCount; i++) {
        delete[] s->enabledApiLayerNames[i];
    }
    delete[] s->enabledApiLayerNames;
    for (int i = 0; i < s->enabledExtensionCount; i++) {
        delete[] s->enabledExtensionNames[i];
    }
    delete[] s->enabledExtensionNames;
}

static void deserialize(XrFrameEndInfo* s, std::istream& in) {
    deserialize(&s->type, in);
    XrStructureType next_type{};
    deserialize(&next_type, in);
    if (next_type != XR_TYPE_UNKNOWN) {
        XrBaseOutStructure* next{};
        allocator_lookup(next_type)(&next, 1);
        deserializer_lookup(next_type)(next, in);
        s->next = next;
    }
    else {
        s->next = nullptr;
    }

    deserialize(&s->displayTime, in);
    deserialize(&s->environmentBlendMode, in);
    deserialize(&s->layerCount, in);

    XrCompositionLayerBaseHeader** layers = new XrCompositionLayerBaseHeader*[s->layerCount]();
    for (int i = 0; i < s->layerCount; i++) {
        XrStructureType layer_type{};
        deserialize(&layer_type, in);
        if (layer_type != XR_TYPE_UNKNOWN) {
            XrCompositionLayerBaseHeader* layer{};
            allocator_lookup(layer_type)(reinterpret_cast<XrBaseOutStructure**>(&layer), 1);
            deserializer_lookup(layer_type)(reinterpret_cast<XrBaseOutStructure*>(layer), in);
            layers[i] = layer;
        }
        else {
            layers[i] = nullptr;
        }
    }
    s->layers = layers;
}

static void cleanup(const XrFrameEndInfo* s) {
    if (s->next != nullptr) {
        const XrBaseOutStructure* next = reinterpret_cast<const XrBaseOutStructure*>(s->next);
        cleaner_lookup(next->type)(next);
        delete[] next;
    }

    for (int i = 0; i < s->layerCount; i++) {
        const XrBaseOutStructure* layer = reinterpret_cast<const XrBaseOutStructure*>(s->layers[i]);
        cleaner_lookup(layer->type)(layer);
        delete[] layer;
    }
    delete[] s->layers;
}