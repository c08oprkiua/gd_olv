# v1/communities

## GET

Used to fetch a community or communities.

### Queries

| Name  | Type   | Options                      | Description                                                   |
| ----- | ------ | ---------------------------- | ------------------------------------------------------------- |
| limit | int    | (range: 1-20?)               | Defines how many communities are returned in the API reponse. |
| type  | string | favorite:<br/>official:<br/> | Defines the type of community returned by the API.            |
|       |        |                              |                                                               |
|       |        |                              |                                                               |

# v1/communities/`id`

## GET

Returns a community, where `id` is the community ID of a community

- If `id` is 0, the server will infer the community based on the titleid in the param-pack

# v1/communities/`id`/posts

## GET

Returns the posts in a community, where `is` is the community ID of a community.

### Queries

| Name               | Type   | Options         | Description                                                          |
| ------------------ | ------ | --------------- | -------------------------------------------------------------------- |
| limit              | int    | Range: 1-100(?) | Defines how many posts are returned in the API reponse.              |
| language_id        | int    |                 | The ID of the language the API will filter for to return values for. |
| search_key         | string | step: <br/>     |                                                                      |
| distinct_pid       | bool   |                 |                                                                      |
| with_mii           | bool   |                 |                                                                      |
| with_empathy_added | bool   |                 |                                                                      |
| allow_spoiler      | bool   |                 |                                                                      |
| by                 | string | friends:<br/>   |                                                                      |

# v1/communities/favorite
