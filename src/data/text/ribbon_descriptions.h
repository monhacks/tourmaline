const u8 gRibbonDescriptionPart1_Champion[] = _("Champion-beating, Hall");
const u8 gRibbonDescriptionPart2_Champion[] = _("Of Fame Member Ribbon");
const u8 gRibbonDescriptionPart1_CoolContest[] = _("Cool Contest");
const u8 gRibbonDescriptionPart1_BeautyContest[] = _("Beauty Contest");
const u8 gRibbonDescriptionPart1_CuteContest[] = _("Cute Contest");
const u8 gRibbonDescriptionPart1_SmartContest[] = _("Smart Contest");
const u8 gRibbonDescriptionPart1_ToughContest[] = _("Tough Contest");
const u8 gRibbonDescriptionPart2_NormalRank[] = _("Normal Rank winner!");
const u8 gRibbonDescriptionPart2_SuperRank[] = _("Super Rank winner!");
const u8 gRibbonDescriptionPart2_HyperRank[] = _("Hyper Rank winner!");
const u8 gRibbonDescriptionPart2_MasterRank[] = _("Master Rank winner!");
const u8 gRibbonDescriptionPart1_Winning[] = _("For clearing Lv50");
const u8 gRibbonDescriptionPart2_Winning[] = _("at the Battle Tower.");
const u8 gRibbonDescriptionPart1_Victory[] = _("For clearing Open Level");
const u8 gRibbonDescriptionPart2_Victory[] = _("at the Battle Tower.");
const u8 gRibbonDescriptionPart1_Artist[] = _("Ribbon for being chosen");
const u8 gRibbonDescriptionPart2_Artist[] = _("as a super sketch model.");
const u8 gRibbonDescriptionPart1_Effort[] = _("Ribbon awarded for");
const u8 gRibbonDescriptionPart2_Effort[] = _("being a hard worker.");

const u8 *const gRibbonDescriptionPointers[][2] = 
{
    [CHAMPION_RIBBON]      = {gRibbonDescriptionPart1_Champion,      gRibbonDescriptionPart2_Champion},
    [COOL_RIBBON_NORMAL]   = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_NormalRank},
    [COOL_RIBBON_SUPER]    = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_SuperRank},
    [COOL_RIBBON_HYPER]    = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_HyperRank},
    [COOL_RIBBON_MASTER]   = {gRibbonDescriptionPart1_CoolContest,   gRibbonDescriptionPart2_MasterRank},
    [BEAUTY_RIBBON_NORMAL] = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_NormalRank},
    [BEAUTY_RIBBON_SUPER]  = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_SuperRank},
    [BEAUTY_RIBBON_HYPER]  = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_HyperRank},
    [BEAUTY_RIBBON_MASTER] = {gRibbonDescriptionPart1_BeautyContest, gRibbonDescriptionPart2_MasterRank},
    [CUTE_RIBBON_NORMAL]   = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_NormalRank},
    [CUTE_RIBBON_SUPER]    = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_SuperRank},
    [CUTE_RIBBON_HYPER]    = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_HyperRank},
    [CUTE_RIBBON_MASTER]   = {gRibbonDescriptionPart1_CuteContest,   gRibbonDescriptionPart2_MasterRank},
    [SMART_RIBBON_NORMAL]  = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_NormalRank},
    [SMART_RIBBON_SUPER]   = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_SuperRank},
    [SMART_RIBBON_HYPER]   = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_HyperRank},
    [SMART_RIBBON_MASTER]  = {gRibbonDescriptionPart1_SmartContest,  gRibbonDescriptionPart2_MasterRank},
    [TOUGH_RIBBON_NORMAL]  = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_NormalRank},
    [TOUGH_RIBBON_SUPER]   = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_SuperRank},
    [TOUGH_RIBBON_HYPER]   = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_HyperRank},
    [TOUGH_RIBBON_MASTER]  = {gRibbonDescriptionPart1_ToughContest,  gRibbonDescriptionPart2_MasterRank},
    [WINNING_RIBBON]       = {gRibbonDescriptionPart1_Winning,       gRibbonDescriptionPart2_Winning},
    [VICTORY_RIBBON]       = {gRibbonDescriptionPart1_Victory,       gRibbonDescriptionPart2_Victory},
    [ARTIST_RIBBON]        = {gRibbonDescriptionPart1_Artist,        gRibbonDescriptionPart2_Artist},
    [EFFORT_RIBBON]        = {gRibbonDescriptionPart1_Effort,        gRibbonDescriptionPart2_Effort},
};
