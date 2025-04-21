//file to connecte with database

#include <stdio.h>

//create enumeration for conenction stape

typedef enum {
        CONNECTED,
        NOT_CONNECTED
}Connectionstate;

Connectionstate connecteTomysql(char *hostname,int por ,char *username , char *password){
    return CONNECTED ;

}

Connectionstate connecteToSqlLite(char *path){
    return CONNECTED ;
}
