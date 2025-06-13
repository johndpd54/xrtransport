static void serialize(const XrInstanceCreateInfo* s, std::ostream& out) {
    serialize(&s->type, out);
    const XrBaseInStructure* next = reinterpret_cast<const XrBaseInStructure*>(s->next);
    if (next != nullptr) {
        serialize(&next->type, out);
        serializer_lookup(next->type)(next, out);
    }
    else {
        // special marker to indicate no next struct
        XrStructureType marker = XR_TYPE_UNKNOWN;
        serialize(&marker, out);
    }
    
    serialize(&s->createFlags, out);
    serialize(&s->applicationInfo, out);
    serialize(&s->enabledApiLayerCount, out);

    for (int i = 0; i < s->enabledApiLayerCount; i++) {
        const char* str = s->enabledApiLayerNames[i];
        std::size_t string_length = count_null_terminated(str);
        serialize(reinterpret_cast<const uint32_t*>(&string_length), out);
        for (int j = 0; j < string_length; j++) {
            serialize(&str[j], out);
        }
    }

    serialize(&s->enabledExtensionCount, out);

    for (int i = 0; i < s->enabledExtensionCount; i++) {
        const char* str = s->enabledExtensionNames[i];
        std::size_t string_length = count_null_terminated(str);
        serialize(reinterpret_cast<const uint32_t*>(&string_length), out);
        for (int j = 0; j < string_length; j++) {
            serialize(&str[j], out);
        }
    }
}

static void serialize(const XrFrameEndInfo* s, std::ostream& out) {
    serialize(&s->type, out);
    const XrBaseInStructure* next = reinterpret_cast<const XrBaseInStructure*>(s->next);
    if (next != nullptr) {
        serialize(&next->type, out);
        serializer_lookup(next->type)(next, out);
    }
    else {
        // special marker to indicate no next struct
        XrStructureType marker = XR_TYPE_UNKNOWN;
        serialize(&marker, out);
    }
    
    serialize(&s->displayTime, out);
    serialize(&s->environmentBlendMode, out);
    serialize(&s->layerCount, out);

    for (int i = 0; i < s->layerCount; i++) {
        const XrCompositionLayerBaseHeader* header = s->layers[i];
        if (header != nullptr) {
            serialize(&header->type, out);
            serializer_lookup(header->type)(reinterpret_cast<const XrBaseInStructure*>(header), out);
        }
        else {
            XrStructureType marker = XR_TYPE_UNKNOWN;
            serialize(&marker, out);
        }
    }
}