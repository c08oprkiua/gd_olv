#ifndef OLV_POST_RES
#define OLV_POST_RES

#include "core/io/resource.h"
#include "core/variant/typed_array.h"


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
    String app_data; //Special field apps can use.
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

}
#endif