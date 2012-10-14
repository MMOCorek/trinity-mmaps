#include "ScriptPCH.h"
#define CUSTOM_BLUE          "|cff00479E"
#define CUSTOM_RED            "|cffFF0000"
#define CUSTOM_LIGHTRED    "|cffD63931"
#define CUSTOM_WHITE        "|cffffffff"

class announce_login : public PlayerScript
{
    public:
                announce_login() : PlayerScript("announce_login") { }
        
                void OnLogin(Player * player, Creature * creature)
        {
                        char msg[500];
                        if(player->GetTeam() == ALLIANCE)
                        {
                                sprintf(msg, "[%sATT|r]: %s%s|r 已经登录游戏，速度M他  [%sA|r]", CUSTOM_LIGHTRED, CUSTOM_WHITE, player->GetName(), CUSTOM_BLUE);
                                sWorld->SendWorldText(LANG_SYSTEMMESSAGE, msg);
                        }else{
                                sprintf(msg, "[%sATT|r]: %s%s|r 已经登录游戏，速度M他 [%sH|r]", CUSTOM_LIGHTRED, CUSTOM_WHITE, player->GetName(), CUSTOM_RED);
                                sWorld->SendWorldText(LANG_SYSTEMMESSAGE, msg);
                        }
                }
};
 
void AddSC_announce_login()
{
        new announce_login;
}