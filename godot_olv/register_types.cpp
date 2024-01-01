#include "register_types.h"

void initialize_godot_olv_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
	ClassDB::register_class<OliveClient>();
	ClassDB::register_class<OliveCommunityData>();
	ClassDB::register_class<OlivePostData>();
	ClassDB::register_class<OliveTopicData>();
}

void uninitialize_godot_olv_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
}