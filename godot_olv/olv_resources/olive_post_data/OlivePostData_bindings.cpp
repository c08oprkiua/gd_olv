#include "OlivePostData.hpp"

void OlivePostData::_bind_methods(){
    ClassDB::bind_method(D_METHOD("set_app_data", "app_data"), OlivePostData::set_app_data);
    ClassDB::bind_method(D_METHOD("get_app_data"), OlivePostData::get_app_data);
    ClassDB::bind_method(D_METHOD("set_body", "body"), OlivePostData::set_body);
    ClassDB::bind_method(D_METHOD("get_body"), OlivePostData::get_body);
    ClassDB::bind_method(D_METHOD("set_community_id", "community_id"), OlivePostData::set_community_id);
    ClassDB::bind_method(D_METHOD("get_community_id"), OlivePostData::get_community_id);
    ClassDB::bind_method(D_METHOD("set_country_id", "country_id"), OlivePostData::set_country_id);
    ClassDB::bind_method(D_METHOD("get_country_id"), OlivePostData::get_country_id);
    ClassDB::bind_method(D_METHOD("set_created_at", "created_at"), OlivePostData::set_created_at);
    ClassDB::bind_method(D_METHOD("get_created_at"), OlivePostData::get_created_at);
    ClassDB::bind_method(D_METHOD("set_feeling_id", "feeling_id"), OlivePostData::set_feeling_id);
    ClassDB::bind_method(D_METHOD("get_feeling_id"), OlivePostData::get_feeling_id);
    ClassDB::bind_method(D_METHOD("set_id", "id"), OlivePostData::set_id);
    ClassDB::bind_method(D_METHOD("get_id"), OlivePostData::get_id);
    ClassDB::bind_method(D_METHOD("set_is_autopost", "is_autopost"), OlivePostData::set_is_autopost);
    ClassDB::bind_method(D_METHOD("get_is_autopost"), OlivePostData::get_is_autopost);
    ClassDB::bind_method(D_METHOD("set_is_community_private_autopost", "is_community_private_autopost"), OlivePostData::set_is_community_private_autopost);
    ClassDB::bind_method(D_METHOD("get_is_community_private_autopost"), OlivePostData::get_is_community_private_autopost);
    ClassDB::bind_method(D_METHOD("set_is_spoiler", "is_spoiler"), OlivePostData::set_is_spoiler);
    ClassDB::bind_method(D_METHOD("get_is_spoiler"), OlivePostData::get_is_spoiler);
    ClassDB::bind_method(D_METHOD("set_is_app_jumpable", "is_app_jumpable"), OlivePostData::set_is_app_jumpable);
    ClassDB::bind_method(D_METHOD("get_is_app_jumpable"), OlivePostData::get_is_app_jumpable);
    ClassDB::bind_method(D_METHOD("set_empathy_count", "empathy_count"), OlivePostData::set_empathy_count);
    ClassDB::bind_method(D_METHOD("get_empathy_count"), OlivePostData::get_empathy_count);
    ClassDB::bind_method(D_METHOD("set_language_id", "language_id"), OlivePostData::set_language_id);
    ClassDB::bind_method(D_METHOD("get_language_id"), OlivePostData::get_language_id);
    ClassDB::bind_method(D_METHOD("set_number", "number"), OlivePostData::set_number);
    ClassDB::bind_method(D_METHOD("get_number"), OlivePostData::get_number);
    ClassDB::bind_method(D_METHOD("set_pid", "pid"), OlivePostData::set_pid);
    ClassDB::bind_method(D_METHOD("get_pid"), OlivePostData::get_pid);
    ClassDB::bind_method(D_METHOD("set_platform_id", "platform_id"), OlivePostData::set_platform_id);
    ClassDB::bind_method(D_METHOD("get_platform_id"), OlivePostData::get_platform_id);
    ClassDB::bind_method(D_METHOD("set_region_id", "region_id"), OlivePostData::set_region_id);
    ClassDB::bind_method(D_METHOD("get_region_id"), OlivePostData::get_region_id);
    ClassDB::bind_method(D_METHOD("set_reply_count", "reply_count"), OlivePostData::set_reply_count);
    ClassDB::bind_method(D_METHOD("get_reply_count"), OlivePostData::get_reply_count);
    ClassDB::bind_method(D_METHOD("set_screen_name", "screen_name"), OlivePostData::set_screen_name);
    ClassDB::bind_method(D_METHOD("get_screen_name"), OlivePostData::get_screen_name);
    ClassDB::bind_method(D_METHOD("set_title_id", "title_id"), OlivePostData::set_title_id);
    ClassDB::bind_method(D_METHOD("get_title_id"), OlivePostData::get_title_id);
}