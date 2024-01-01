#ifndef GD_OLV_H
#define GD_OLV_H

#include "core/io/resource.h"
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
    //Connect to a domain
    Error connect_to_discovery(String domain);
    Error connect_to_api(String domain);

    Array<OliveCommunityData> get_communities();
    PackedByteArray get_communities_raw();
    OliveCommunityData get_community(int community_id);
    PackedByteArray get_community_raw(int community_id);


    Array<OlivePostData> get_posts(int community_id);
    OlivePostData get_post(int community_id, int post_id);

}


#endif