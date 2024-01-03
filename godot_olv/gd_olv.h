#ifndef GD_OLV_H
#define GD_OLV_H

#include "core/io/resource.h"
#include "core/io/http_client.h"
#include "core/variant/typed_array.h"

#include "olv_resources/comm_res.h"
#include "olv_resources/post_res.h"
#include "olv_resources/topic_res.h"

class OliveClient: public RefCounted {
    GDCLASS(OliveClient, RefCounted);
private:

    //This struct might be publicized
    struct ParamPack {
        String titleid;
        String access_key;
        String platform_id; //Enum containing 3DS or Wii U?
        String region_id; //Enum?
        String language_id; //Enum?
        String country_id; //Enum?
        String area_id;
        String network_restrictions;
        String friend_restrictions;
        String rating_restrictions;
        String transferable_id;
        String tz_name;
        String utc_offset;
    };

    String domain; //domain of Miiverse


protected:
	static void _bind_methods();

public:
    //Pre-requisite stuff to for most connections
    Error set_console_information(); //Will add params later
    Error set_service_token(String token); //Maybe not a String, idk I'm tired

    //Connect to a domain
    HTTPClient::ResponseCode connect_with_discovery(String domain);
    HTTPClient::ResponseCode connect_with_api(String domain);
    

    Array<OliveCommunityData> get_communities();
    PackedByteArray get_communities_raw();
    OliveCommunityData get_community(int community_id);
    PackedByteArray get_community_raw(int community_id);


    Array<OlivePostData> get_posts(int community_id);
    OlivePostData get_post(int community_id, int post_id);




}
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

class OliveTopicData: public Resource {
    
}




#endif