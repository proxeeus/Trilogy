D(OP_SendLoginInfo)
E(OP_ApproveWorld)
E(OP_EnterWorld)
E(OP_ExpansionInfo)
E(OP_SendCharInfo)
E(OP_ZoneEntry)
E(OP_PlayerProfile)
E(OP_ZoneServerInfo)
E(OP_NewZone)
E(OP_NewSpawn)
E(OP_ZoneSpawns)
//E(OP_GuildsList)
D(OP_EnterWorld)
D(OP_ChannelMessage)
E(OP_ChannelMessage)
E(OP_SpecialMesg)
E(OP_ClientUpdate)
D(OP_ClientUpdate)
E(OP_MobUpdate)
D(OP_TargetCommand)
D(OP_TargetMouse)
D(OP_CharacterCreate)
E(OP_Consider)
D(OP_Consider)
D(OP_ConsiderCorpse)
D(OP_SetServerFilter)
D(OP_ZoneChange)
E(OP_ZoneChange)
E(OP_CancelTrade)
E(OP_MemorizeSpell)
D(OP_MemorizeSpell)
E(OP_Buff)
D(OP_Buff)
E(OP_BeginCast)
E(OP_CastSpell)
D(OP_CastSpell)
E(OP_Damage)
D(OP_Damage)
E(OP_Action)
E(OP_Action2)
D(OP_EnvDamage)
//D(OP_EnvDamage2)
D(OP_ClickDoor)
E(OP_InterruptCast)
//D(OP_GMTraining)
//E(OP_GMTraining)
D(OP_GMEndTraining)
E(OP_ItemPacket)
E(OP_TradeItemPacket)
E(OP_ItemLinkResponse)
E(OP_CharInventory)
D(OP_MoveItem)
E(OP_MoveItem)
E(OP_DeleteCharge)
D(OP_DeleteCharge)
E(OP_Stamina)
E(OP_HPUpdate)
E(OP_MobHealth)
D(OP_Consume)
E(OP_ReadBook)
D(OP_ReadBook)
E(OP_Illusion)
D(OP_Illusion)
E(OP_ShopRequest)
D(OP_ShopRequest)
E(OP_ShopInventoryPacket)
//E(OP_FormattedMessage)
D(OP_ShopPlayerBuy)
E(OP_ShopPlayerBuy)
E(OP_ShopDelItem)
D(OP_ShopPlayerSell)
E(OP_ShopPlayerSell)
E(OP_Animation)
D(OP_Animation)
E(OP_LootItem)
D(OP_LootItem)
E(OP_AAExpUpdate)
//E(OP_RespondAA)
E(OP_AAAction)
E(OP_GroundSpawn)
D(OP_GroundSpawn)
E(OP_ClickObjectAction)
D(OP_ClickObjectAction)
D(OP_TradeSkillCombine)
D(OP_TradeRequest)
E(OP_TradeRequest)
E(OP_TradeRequestAck)
D(OP_TradeRequestAck)
D(OP_CancelTrade)
E(OP_ManaChange)
E(OP_DeleteSpawn)
E(OP_TimeOfDay)
D(OP_WhoAllRequest)
E(OP_GroupInvite)
D(OP_GroupInvite)
E(OP_GroupInvite2)
D(OP_GroupInvite2)
E(OP_TradeCoins)
D(OP_ItemLinkResponse)
E(OP_LogServer)
E(OP_RequestClientZoneChange)
D(OP_SetGuildMOTD)
E(OP_GuildMOTD)
//E(OP_GetGuildMOTDReply)
D(OP_GuildInviteAccept)
E(OP_Trader)
D(OP_Trader)
//E(OP_BazaarSearch)
D(OP_BazaarSearch)
E(OP_BecomeTrader)
E(OP_TraderBuy)
D(OP_TraderBuy)
E(OP_WearChange);
D(OP_WearChange);
E(OP_ExpUpdate);
E(OP_Death);
D(OP_Bug);
D(OP_Taunt);
D(OP_CombatAbility);
E(OP_Projectile);
E(OP_Charm);
E(OP_Sound);
E(OP_FaceChange);
D(OP_FaceChange);
D(OP_Assist);
E(OP_Assist);

//Below are invalid opcodes ONLY
E(OP_Unknown);
E(OP_BecomeCorpse);
E(OP_BuffCreate);
E(OP_BuffFadeMsg);
E(OP_CameraEffect);
E(OP_ChangeSize);
E(OP_ClearNPCMarks);
E(OP_ClearSurname);
E(OP_ClientReady);
E(OP_CloseContainer);
E(OP_Command);
E(OP_ConfirmDelete);
E(OP_ConsentDeny);
E(OP_CorpseDrop);
E(OP_CrashDump);
E(OP_CustomTitles);
E(OP_DelegateAbility);
E(OP_DeleteItem);
E(OP_DenyResponse);
E(OP_DisciplineUpdate);
E(OP_DiscordMerchantInventory);
E(OP_DumpName);
E(OP_Dye);
E(OP_DynamicWall);
E(OP_EnduranceUpdate);
E(OP_EnvDamage);
E(OP_EnvDamage2);
E(OP_Feedback);
E(OP_FindPersonReply);
E(OP_FindPersonRequest);
E(OP_FinishWindow);
E(OP_FinishWindow2);
E(OP_FloatListThing);
E(OP_ForceFindPerson);
E(OP_FriendsWho);
E(OP_GetGuildMOTD);
E(OP_GetGuildMOTDReply);
E(OP_GiveMoney);
E(OP_GMApproval);
E(OP_GMTrainSkillConfirm);
E(OP_GroupAcknowledge);
E(OP_GroupDelete);
E(OP_GroupDisbandOther);
E(OP_GroupDisbandYou);
E(OP_GroupFollow2);
E(OP_GroupLeaderChange);
E(OP_GroupMakeLeader);
E(OP_GroupRoles);
E(OP_GroupUpdateB);
E(OP_GuildBank);
E(OP_GuildCreate);
E(OP_GuildDemote);
E(OP_GuildManageAdd);
E(OP_GuildManageBanker);
E(OP_GuildManageRemove);
E(OP_GuildManageStatus);
E(OP_GuildMemberLevelUpdate);
E(OP_GuildMemberList);
E(OP_GuildMemberUpdate);
E(OP_GuildPublicNote);
E(OP_GuildStatus);
E(OP_GuildUpdateURLAndChannel);
E(OP_Heartbeat);
E(OP_HideCorpse);
E(OP_IncreaseStats);
E(OP_InitialHPUpdate);
E(OP_InitialMobHealth);
E(OP_InspectMessageUpdate);
E(OP_ItemLinkClick);
E(OP_ItemLinkText);
E(OP_ItemName);
E(OP_ItemVerifyReply);
E(OP_ItemVerifyRequest);
E(OP_ItemViewUnknown);
E(OP_KeyRing);
E(OP_LevelAppearance);
E(OP_LFGAppearance);
E(OP_LFGGetMatchesRequest);
E(OP_LFGGetMatchesResponse);
E(OP_LFGResponse);
E(OP_LFGuild);
E(OP_LFPCommand);
E(OP_LFPGetMatchesRequest);
E(OP_LFPGetMatchesResponse);
E(OP_LoadSpellSet);
E(OP_LockoutTimerInfo);
E(OP_LoginComplete);
E(OP_LoginUnknown1);
E(OP_LoginUnknown2);
E(OP_MarkNPC);
E(OP_MendHPUpdate);
E(OP_MobEnduranceUpdate);
E(OP_MobManaUpdate);
E(OP_MobRename);
E(OP_MoveLogDisregard);
E(OP_MoveLogRequest);
E(OP_NewTitlesAvailable);
E(OP_OnLevelMessage);
E(OP_OpenContainer);
E(OP_OpenDiscordMerchant);
E(OP_OpenInventory);
E(OP_PDeletePetition);
E(OP_PetBuffWindow);
E(OP_PetitionBug);
E(OP_PetitionCheckout2);
E(OP_PetitionQue);
E(OP_PetitionResolve);
E(OP_PetitionSearch);
E(OP_PetitionSearchResults);
E(OP_PetitionSearchText);
E(OP_PetitionUnCheckout);
E(OP_PetitionUpdate);
E(OP_PlayMP3);
E(OP_PopupResponse);
E(OP_PostEnterWorld);
E(OP_PotionBelt);
E(OP_PreLogoutReply);
E(OP_PVPLeaderBoardDetailsReply);
E(OP_PVPLeaderBoardDetailsRequest);
E(OP_PVPLeaderBoardReply);
E(OP_PVPLeaderBoardRequest);
E(OP_PVPStats);
E(OP_QueryResponseThing);
E(OP_RaidJoin);
E(OP_RandomReply);
E(OP_RecipeAutoCombine);
E(OP_RecipeDetails);
E(OP_RecipeReply);
E(OP_RecipesFavorite);
E(OP_RecipesSearch);
E(OP_ReloadUI);
E(OP_RemoveAllDoors);
E(OP_RequestTitles);
E(OP_RespawnWindow);
E(OP_RestState);
E(OP_Rewind);
E(OP_SendAAStats);
E(OP_SendAATable);
E(OP_SendFindableNPCs);
E(OP_SendSystemStats);
E(OP_SendTitleList);
E(OP_ServerName);
E(OP_SessionLogin);
E(OP_SetChatServer2);
E(OP_SetGroupTarget);
E(OP_SetStartCity);
E(OP_SetTitleReply);
E(OP_Shielding);
E(OP_ShopItem);
E(OP_Some3ByteHPUpdate);
E(OP_Some6ByteHPUpdate);
E(OP_SpawnPositionUpdate);
E(OP_SpellEffect);
E(OP_TargetBuffs);
E(OP_TargetHoTT);
E(OP_TargetReject);
E(OP_TestBuff);
E(OP_TrackTarget);
E(OP_TrackUnknown);
E(OP_TradeBusy);
E(OP_TraderDelItem);
E(OP_TraderItemUpdate);
E(OP_Untargetable);
E(OP_UpdateAA);
E(OP_WeaponEquip1);
E(OP_WeaponEquip2);
E(OP_WeaponUnequip2);
E(OP_Weblink);
E(OP_World_Client_CRC1);
E(OP_World_Client_CRC2);
E(OP_WorldClientReady);
E(OP_WorldComplete);
E(OP_WorldLogout);
E(OP_WorldObjectsSent);
E(OP_WorldUnknown001);
E(OP_ZoneComplete);
E(OP_ZonePlayerToBind);
E(OP_ZoneServerReady);
#undef E
#undef D
