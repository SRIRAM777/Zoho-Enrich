struct contact_customer
{
    char* contact_id;
    char* first_name;
    char* last_name;
    char* email;
};

struct contacts
{
    char* contact_id;
    char* contact_name;
    char* street;
    char* area;
    char* city;
    struct contact_customer cc[2];
}obj_details[2];
