#ifndef OLV_POST_RES
#define OLV_POST_RES

#include "core/io/resource.h"
#include "core/variant/typed_array.h"

#ifdef MIIDATA_H
#include "modules/mii/miidata.hpp"
#endif

class OlivePostData: public Resource {
    GDCLASS(OlivePostData, Resource);

    //IDs
    String id;
    String title_id;
    int pid;
    int platform_id;
    int region_id;
    int language_id;
    String community_id;
    int country_id;

    //Post Data
    PackedByteArray app_data; //Special field apps can use.
    String screen_name;
    String body;
    String created_at;
    int feeling_id;
    bool is_spoiler;
    int empathy_count;
    int yeahs;
    int reply_count;
    int is_autopost;
    int is_community_private_autopost;

    //Metadata
    bool is_app_jumpable;
    bool verified;
    String message_to_pid;
    String parent;
    String search_key;
    int number; //Idk what this does

    //Topic Tag Data
    Dictionary topic_tag;
    //Values in the dict, placeholder ish
    String topic_tag_name;
    String topic_tag_title_id;

    //Painting data
    Dictionary painting; //May get deleted
    //Values of the painting
    String painting_format;
    String painting_content; //B64 TGA
    int painting_size;
    String painting_url;

    //Screenshot data
    String screenshot;
    int screenshot_length;
    //May be juxt specific?
    int screenshot_size;
    String screenshot_url;

    //Mii data
    #ifdef MIIDATA_H //If the MiiDataResource is present
    MiiDataResource mii;
    #else 
    String mii; //Base64 PackedByteArray
    #endif
    String mii_face_url;

    //Moderation stats
    bool removed;
    String removed_reason;
    int removed_by; //Idk I guess it's an ID???
    String removed_at; //This is a date


    //Painting stuff
    //Image get_painting();
    void set_painting(); //The validity checks in this will be brutal fr

    //Screenshot stuff
    //Image get_screenshot();
    void set_screenshot();

    int get_yeahs(); //No reason to have a set for this

    //Post Data
    PackedByteArray get_app_data();
    void set_app_data(PackedByteArray data);

    void set_body(String new_body); 
    String get_body();

    void set_community_id(String new_community_id); 
    String get_community_id();

    void set_country_id(String new_country_id); 
    String get_country_id();

    void set_created_at(String new_created_at); 
    String get_created_at();

    void set_feeling_id(String new_feeling_id); 
    String get_feeling_id();

    void set_id(String new_id); 
    String get_id();

    void set_is_autopost(String new_is_autopost); 
    String get_is_autopost();

    void set_is_community_private_autopost(String new_is_community_private_autopost); 
    String get_is_community_private_autopost();

    void set_is_spoiler(String new_is_spoiler); 
    String get_is_spoiler();

    void set_is_app_jumpable(String new_is_app_jumpable); 
    String get_is_app_jumpable();

    void set_empathy_count(String new_empathy_count); 
    String get_empathy_count();

    void set_language_id(String new_language_id); 
    String get_language_id();

    void set_number(String new_number); 
    String get_number();

    void set_pid(String new_pid); 
    String get_pid();

    void set_platform_id(String new_platform_id); 
    String get_platform_id();

    void set_region_id(String new_region_id); 
    String get_region_id();

    void set_reply_count(String new_reply_count); 
    String get_reply_count();

    void set_screen_name(String new_screen_name); 
    String get_screen_name();
    
    void set_title_id(String new_title_id); 
    String get_title_id();





}
#endif