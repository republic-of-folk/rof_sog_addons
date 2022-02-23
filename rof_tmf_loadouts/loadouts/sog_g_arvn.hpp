class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    faces[] = {"faceset:asian"};
    // All randomized.
    uniform[] =
    {
        "vn_b_uniform_macv_01_07",
		"vn_b_uniform_macv_02_07",
		"vn_b_uniform_macv_03_07",
		"vn_b_uniform_macv_04_07",
		"vn_b_uniform_macv_05_07",
		"vn_b_uniform_macv_06_07"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] = {
        "vn_b_helmet_m1_01_01","vn_b_helmet_m1_01_01",
		"vn_b_helmet_m1_02_01",
		"vn_b_helmet_m1_03_01",
		"vn_b_helmet_m1_06_01",
		"vn_b_bandana_01",
		"vn_b_bandana_02",
		"vn_b_bandana_03","vn_b_bandana_03","vn_b_bandana_03"
    };
    goggles[] = {
		"vn_b_scarf_01_01"
    };
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] =
    {
        LIST_10("ACE_fieldDressing"),
		LIST_2("ACE_splint"),
		"ACE_tourniquet",
        LIST_3("ACE_morphine"),
		LIST_1("ACE_epinephrine"),
        LIST_1("ACE_salineIV_500"),
		LIST_2("ACE_CableTie"),
		"ACE_EarPlugs",
		"ACE_Canteen",
		"ACE_Flashlight_MX991"
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "vn_b_item_map",
        "vn_b_item_compass",
        "vn_b_item_watch",
		"vn_b_item_radio_urc10"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_lighter'};";

    // Traits https://community.bistudio.com/wiki/setUnitTrait
    traits[] = {};
};
class r : baseMan
{
    displayName = "Rifleman (M16)";
	headgear[] += {"vn_b_helmet_m1_05_01"};
	vest[] = {"vn_b_vest_usarmy_02"};
	backPack[] = {"vn_b_pack_trp_02_02_m16_pl"};
    primaryWeapon[] = {"vn_m16"};
    magazines[] =
    {
		LIST_14("vn_m16_20_t_mag"),
		LIST_4("vn_m61_grenade_mag"),
		LIST_3("vn_m18_yellow_mag"),
		LIST_2("vn_m18_purple_mag"),
		LIST_1("vn_m18_red_mag")
	};
	items[] += {
		"vn_b_m16"
	};
};
class r_light : baseMan
{
	displayName = "Rifleman (M16, no backpack)"
	headgear[] += {"vn_b_helmet_m1_05_01"};
	vest[] = {"vn_b_vest_usarmy_02"};
	backPack[] = {};
    primaryWeapon[] = {"vn_m16"};
	magazines[] = {
		LIST_8("vn_m16_20_t_mag"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_1("vn_m18_yellow_mag"),
		LIST_1("vn_m18_purple_mag")
	};
};
class r_special : baseMan
{
    displayName = "Quan Canh Policeman (M16)";
	headgear[] = {"vn_i_helmet_m1_01_02"};
	vest[] = {"vn_b_vest_usarmy_14"};
	backPack[] = {};
	primaryWeapon[] = {"vn_m16"};
    magazines[] =
    {
		LIST_5("vn_m16_20_t_mag"),
		LIST_2("vn_m61_grenade_mag")
    };
    items[] =
    {
        LIST_8("ACE_fieldDressing"),
		LIST_1("ACE_splint"),
		"ACE_tourniquet",
		LIST_2("ACE_CableTie"),
		"ACE_EarPlugs",
		"ACE_Canteen",
		"ZSN_Whistle"
    };
};
class g : baseMan
{
    displayName = "Grenadier (M79)";
	headgear[] = {"vn_b_helmet_m1_04_01"};
	primaryWeapon[] = {"vn_m79"};
	sidearmWeapon[] = {"vn_m1911"};
	vest[] = {"vn_b_vest_usarmy_05"};
	backPack[] = {"vn_b_pack_trp_02_02_m79_pl"};
	magazines[] = {
		LIST_16("vn_40mm_m381_he_mag"),
		LIST_6("vn_40mm_m406_he_mag"),
		LIST_2("vn_40mm_m583_flare_w_mag"),
		LIST_5("vn_40mm_m397_ab_mag"),
		LIST_5("vn_40mm_m433_hedp_mag"),
		LIST_10("vn_40mm_m661_flare_g_mag"),
		LIST_2("vn_40mm_m651_cs_mag"),
		LIST_2("vn_40mm_m682_smoke_r_mag"),
		LIST_4("vn_40mm_m576_buck_mag"),
		LIST_4("vn_m1911_mag"),
		LIST_4("vn_m61_grenade_mag"),
	};
};
class car : baseMan
{
    displayName = "Scout (M1897)";
	vest[] = {"vn_b_vest_usarmy_04"};
	backPack[] = {"vn_b_pack_trp_02_02_m1897_pl"};
	primaryWeapon[] = {"vn_m1897"};
	sidearmWeapon[] = {"vn_mx991_m1911"};
    magazines[] =
    {
		LIST_12("vn_m1897_buck_mag"),
		LIST_8("vn_m1897_fl_mag"),
		LIST_4("vn_m1911_mag"),
		LIST_6("vn_m61_grenade_mag"),
		LIST_2("vn_m34_grenade_mag"),
		LIST_2("vn_m18_yellow_mag")
    };
    items[] += {"vn_b_m1897"};
};
class smg : baseMan
{
    displayName = "Submachinegunner (M3A1)";
	vest[] = {"vn_b_vest_usarmy_02"};
	backPack[] = {"vn_b_pack_trp_02_02_m16_pl"};
    primaryWeapon[] = {"vn_m3a1"};
    magazines[] =
    {
        LIST_10("vn_m3a1_mag"),
		LIST_4("vn_m61_grenade_mag"),
		LIST_3("vn_m18_yellow_mag"),
		LIST_2("vn_m18_purple_mag"),
		LIST_1("vn_m18_red_mag")
    };
};
class m : r
{
    displayName = "Medic (M16)";
	headgear[] += {"vn_b_helmet_m1_07_01","vn_b_helmet_m1_07_01","vn_b_helmet_m1_07_01"};
    traits[] += {"medic"};
	vest[] = {"vn_b_vest_usarmy_07"};
	backPack[] = {"vn_b_pack_m5_01_medic_m16_pl"};
    magazines[] =
    {
		LIST_9("vn_m16_20_t_mag"),
		LIST_2("vn_m61_grenade_mag"),
		LIST_1("vn_m18_yellow_mag"),
		LIST_1("vn_m18_purple_mag"),
		LIST_4("vn_m18_white_mag")
	};
    backpackItems[] = {
        LIST_1("ACE_surgicalKit"),
        LIST_1("ACE_personalAidKit"),
		LIST_2("ACE_adenosine"),
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
		LIST_10("ACE_epinephrine"),
		LIST_5("ACE_tourniquet"),
		LIST_6("ACE_splint"),
        LIST_6("ACE_plasmaIV")
    };
};
class ftl : r
{
    displayName = "Senior Rifleman (M16)";
    magazines[] =
    {
		LIST_14("vn_m16_40_t_mag"),
		LIST_4("vn_m61_grenade_mag"),
		LIST_3("vn_m18_yellow_mag"),
		LIST_2("vn_m18_purple_mag"),
		LIST_1("vn_m18_red_mag")
	};
};
class sl : ftl
{
    displayName = "Squad Leader (M16, Radiopack)";
	backPack[] = {"vn_b_pack_trp_04_02_m16_pl"};
	sidearmWeapon[] = {"vn_p38s"};
    magazines[] =
    {
		LIST_10("vn_m16_40_t_mag"),
		LIST_2("vn_m10_mag"),
		LIST_3("vn_m61_grenade_mag"),
		LIST_2("vn_m18_yellow_mag"),
		LIST_2("vn_m18_purple_mag")
	};
    items[] +=
    {
		"ZSN_Whistle","ACE_MapTools"
    };
	linkedItems[] += {"vn_m19_binocs_grey"};
};
class co : ftl
{
    displayName = "Officer (M16)";
	vest[] = {"vn_b_vest_usarmy_09"};
	goggles[] = {"vn_b_scarf_01_03"};
	sidearmWeapon[] = {"vn_m1911"};
	linkedItems[] += {"vn_m19_binocs_grn"};
	magazines[] =
    {
		LIST_10("vn_m16_20_t_mag"),
		LIST_2("vn_m1911_mag"),
		LIST_4("vn_m61_grenade_mag"),
		LIST_2("vn_m18_yellow_mag"),
		LIST_2("vn_m18_purple_mag")
	};
	items[] += {
		"ZSN_Whistle","ACE_MapTools"
	};
};
class rto : r
{
	displayName = "Radio Operator (M16, Radiopack, VHF30108)";
	vest[] = {"vn_b_vest_usarmy_03"};
	backpack[] = {"vn_b_pack_trp_04_02_m16_pl"};
    magazines[] =
    {
		LIST_7("vn_m16_20_t_mag"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_1("vn_m18_yellow_mag"),
		LIST_1("vn_m18_purple_mag"),
		LIST_1("vn_m18_red_mag")
	};
	items[] += {
		"ACRE_VHF30108"
	};
};
class fac : r
{
    displayName = "Forward Air Controller (M16, Radiopack, Laser Designator)";
	vest[] = {"vn_b_vest_usarmy_03"};
	backpack[] = {"vn_b_pack_trp_04_02_m16_pl"};
    magazines[] =
    {
		LIST_14("vn_m16_20_t_mag"),
		LIST_4("vn_m61_grenade_mag"),
		LIST_2("vn_m18_yellow_mag"),
		LIST_4("vn_m18_purple_mag"),
		LIST_2("vn_m18_red_mag")
	};
	linkedItems[] += {"Laserdesignator_03"};
};
class ar : baseMan
{
    displayName = "Machinegunner (M60, M1911, 2x M16 Mines)";
	headgear[] += {"vn_b_helmet_m1_08_01"};
	vest[] = {"vn_b_vest_usarmy_06"};
	backPack[] = {"vn_b_pack_trp_01_02_m60_pl"};
	primaryWeapon[] = {"vn_m60"};
	sidearmWeapon[] = {"vn_m1911"};
	magazines[] = {
		LIST_8("vn_m60_100_mag"),
		LIST_2("vn_m1911_mag"),
		LIST_6("vn_m61_grenade_mag"),
		LIST_1("vn_m18_yellow_mag"),
		LIST_1("vn_m18_red_mag"),
		LIST_2("vn_mine_m16_mag")
	};
};
class aar : r
{
    displayName = "Assistant Machinegunner (M16, serves M60)";
	headgear[] += {"vn_b_helmet_m1_08_01"};
	backPack[] = {"vn_b_pack_trp_01_02"};
	backpackItems[] += {
		LIST_7("vn_m60_100_mag")
	};
	linkedItems[] += {"vn_m19_binocs_grey"};
};
class rat : r
{
    displayName = "Rifleman (M72, 2x M18 Claymores)";
	backPack[] = {"vn_b_pack_trp_03_02_m16_pl"};
    secondaryWeapon[] = {"vn_m72"};
	magazines[] += {LIST_2("vn_mine_m18_mag")};
	items[] += {"ACE_Clacker"};
};
class dm : r
{
    displayName = "Designated Marksman (M16)";
	scope[] = {"vn_o_4x_m16"};
	items[] += {"ACE_RangeCard"};
};
class mmgg : r_light
{
    displayName = "MMG Gunner (M1919 Low)";
	backPack[] = {"vn_b_pack_static_m1919a4_low_01"};
};
class mmgag : r_light
{
    displayName = "MMG Assistant";
	backPack[] = {"vn_b_pack_static_base_01"};
	linkedItems[] += {"vn_m19_binocs_grn"};
};
class mmgac : r_light
{
    displayName = "MMG Gunner (M1919 High)";
	backPack[] = {"vn_b_pack_static_m1919a4_high_01"};
};
class hmgg : r_light
{
    displayName = "HMG Gunner (M2 Low, Legacy)";
    backPack[] = {"vn_b_pack_static_m2_low_01"};
};
class hmgag : r_light
{
    displayName = "HMG Assistant (M2, Legacy)";
    backPack[] = {"vn_b_pack_static_base_01"};
	linkedItems[] += {"vn_m19_binocs_grey"};
};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier (M2 High, Legacy)";
	backpack[] = {"vn_b_pack_static_m2_high_01"};
};
class hmgg_csw : r_light
{
    displayName = "HMG Gunner (M2, CSW)";
	primaryWeapon[] = {};
	backpack[] = {};
	sidearmWeapon[] = {"vn_m1911"};
    secondaryWeapon[] = {"ace_compat_rhs_usf3_m2_carry"};
	magazines[] = {
		LIST_4("vn_m1911_mag")
	};
};
class hmgag_csw : r_light
{
    displayName = "HMG Assistant Gunner (M2, CSW)";
    secondaryWeapon[] = {"ace_csw_m3CarryTripodLow"};
    linkedItems[] += {"vn_m19_binocs_grn"};
};
class hmgac_csw : r_light
{
    displayName = "HMG Ammo Carrier (M2, CSW)";
    backpack[] = {"vn_b_pack_lw_05"};
    backpackItems[] = {
        LIST_3("ace_csw_100Rnd_127x99_mag"),
    };
};
class matg : rat
{
    displayName = "LAT (M72, Claymores)";
};
class matag : matg
{
    displayName = "LAT (M72, Claymores)";
};
class matac : matg
{
    displayName = "LAT (M72, Claymores)";
};
class hatg : r_light
{
    displayName = "HAT Gunner (BGM-71, Legacy)";
    backPack[] = {"vn_b_pack_static_tow"};
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner (BGM-71, Legacy)";
    backPack[] = {"vn_b_pack_static_base_01"};
    linkedItems[] += {"vn_m19_binocs_grey"};
};
class hatac : r_light
{
    displayName = "HAT Sentry (M16)";
};
class hatg_csw : hmgg_csw
{
    displayName = "HAT Gunner (BGM-71, CSW)";
    secondaryWeapon[] = {"ace_compat_rhs_usf3_tow_carry"};
};
class hatag_csw : r_light
{
    displayName = "HAT Assistant Gunner (BGM-71, CSW)";
    secondaryWeapon[] = {"ace_csw_m220CarryTripod"};
    linkedItems[] += {"vn_m19_binocs_grn"};
};
class hatac_csw : r_light
{
    displayName = "HAT Ammo Carrier (CSW)";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = {
        LIST_2("ace_compat_rhs_usf3_mag_TOW")
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner (M2, Legacy)";
    backPack[] = {"vn_b_pack_static_m2_01"};
	items[] +=
    {
		"ACE_RangeTable_82mm","ACE_MapTools"
    };
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner (M2, Legacy)";
    backPack[] = {"vn_b_pack_static_base_01"};
	items[] +=
    {
		"ACE_RangeTable_82mm","ACE_MapTools"
    };
	linkedItems[] += {"vn_m19_binocs_grey"};
};
class mtrac : r
{
    displayName = "Mortar Sentry (M16)";
};
class mtrg_csw : r_light
{
    displayName = "Mortar Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_staticMortarCarry"};
};
class mtrag_csw : r_light
{
    displayName = "Mortar Assistant Gunner (CSW)";
    secondaryWeapon[] = {"ace_csw_carryMortarBaseplate"};
    linkedItems[] += {"vn_m19_binocs_grn"};
};
class mtrac_csw : r_light
{
    displayName = "Mortar Ammo Carrier (CSW)";
    backpack[] = {"rhsgref_hidf_alicepack"};
    backpackItems[] = {
        LIST_8("ACE_1Rnd_82mm_Mo_HE"),
        LIST_2("ACE_1Rnd_82mm_Mo_Smoke"),
    };
};
class samg : ar
{
    displayName = "AA Machinegunner (M60)";
};
class samag : aar
{
    displayName = "AA Assistant Machinegunner (M16, Serves M60)";
	backpackItems[] += {"ACE_Tripod"};
};
class sn : r
{
    displayName = "Sniper (M14)";
	vest[] = {"vn_b_vest_usarmy_08"};
	backPack[] = {"vn_b_pack_trp_02_02_m21_pl"};
    traits[] += {"camouflageCoef"};
    primaryWeapon[] = {"vn_m14"};
    scope[] = {"vn_o_9x_m14"};
	sidearmWeapon[] = {"vn_m1911"};
    magazines[] =
    {
        LIST_16("vn_m14_t_mag"),
		LIST_6("vn_m1911_mag"),
        LIST_6("vn_m67_grenade_mag"),
        LIST_2("vn_m18_purple_mag")
    };
};
class sn_nv : sn
{
	displayName = "Sniper (M14, AN-PVS2 Starlight)";
	scope[] = {"vn_o_anpvs2_m14"};
};
class sp : r
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
	linkedItems[] += {"vn_m19_binocs_grey"};
};
class dd : baseMan
{
	displayName = "Designated Driver (M3A1, Armoured, drives soft vehicles)"
	headgear[] = {"vn_b_helmet_m1_09_01"};
	vest[] = {"vn_b_vest_usarmy_11"};
	primaryWeapon[] = {"vn_m3a1"};
	sidearmWeapon[] = {"vn_m10"};
	linkedItems[] += {"vn_m19_binocs_grey"};
	magazines[] = {
		LIST_4("vn_m3a1_mag"),
		LIST_2("vn_m10_mag"),
		LIST_2("vn_m61_grenade_mag")
	};
};
class vc : dd
{
    displayName = "Crewman Commander (M3A1, Radio)";
    headgear[] = {"vn_b_helmet_t56_01_03"};
	goggles[] = {"vn_b_acc_goggles_01"};
	backpack[] = {"vn_b_pack_prc77_01"};
	vest[] = {"vn_b_vest_usarmy_10"};
	sidearmWeapon[] = {"vn_p38s"};
};
class vg : dd
{
    displayName = "Crewman Gunner (M3A1, Armoured)";
    headgear[] = {"vn_b_helmet_t56_02_02"};
	vest[] = {"vn_b_vest_usarmy_12"};
	sidearmWeapon[] = {};
	magazines[] = {
		LIST_4("vn_m3a1_mag"),
		LIST_2("vn_m61_grenade_mag")
	};
};
class vd : dd
{
    displayName = "Crewman Driver (M3A1, Armoured)";
    traits[] += {"engineer"};
	backPack[] = {"vn_b_pack_trp_02_02"};
    headgear[] = {"vn_b_helmet_t56_02_01"};
    items[] += {"vn_b_item_toolkit"};
};
class pp : baseMan
{
    displayName = "Helicopter Pilot";
	primaryWeapon[] = {};
	sidearmWeapon[] = {"vn_m1911"};
    headgear[] = {"vn_b_helmet_svh4_02_02"};
	uniform[] = {"vn_b_uniform_k2b_02_01"};
	vest[] = {"vn_b_vest_aircrew_05"};
	goggles[] = {"vn_b_aviator"};
	magazines[] = {
		LIST_4("vn_m1911_mag"),
		LIST_1("vn_m61_grenade_mag"),
		LIST_1("vn_m18_purple_mag"),
		LIST_1("vn_m18_red_mag"),
		LIST_1("vn_m18_yellow_mag")
	};
};
class pcp : pp
{
	displayName = "Helicopter Co-pilot";
	headgear[] = {"vn_b_helmet_svh4_01_05"};
};
class pcc : dd
{
    displayName = "Helicopter Crew Chief (XM177, Toolkit)";
	primaryWeapon[] = {"vn_xm177_short"};
	sidearmWeapon[] = {};
    traits[] += {"engineer"};
    headgear[] = {"vn_b_helmet_svh4_02_05"};
	vest[] = {"vn_b_vest_aircrew_01"};
	backPack[] = {"vn_b_pack_trp_02_02"};
    backpackItems[] = {"vn_b_item_toolkit"};
	magazines[] = {
		LIST_4("vn_m16_20_mag"),
		LIST_2("vn_m61_grenade_mag"),
		LIST_2("vn_m18_red_mag"),
		LIST_2("vn_m18_yellow_mag"),
		LIST_2("vn_m18_purple_mag")
	};
};
class pc : dd
{
    displayName = "Helicopter Crew";
    headgear[] = {"vn_b_helmet_svh4_01_05"};
	vest[] = {"vn_b_vest_aircrew_01"};
};
class jp : baseMan
{
    displayName = "Jet Pilot";
    headgear[] = {"gm_ge_headgear_headset_crew_oli"};
	vest[] = {"usm_vest_lbe_p"};
    sidearmWeapon[] = {"rhsusf_weap_m1911a1"};
	sidearmMagazine[] = {"rhsusf_mag_7x45acp_MHP"};
    magazines[] = {"rhsusf_mag_7x45acp_MHP"};
    linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
};
class eng : r
{
    displayName = "Combat Engineer (Demolitions and APERS Mines)";
	magazines[] = {
		LIST_5("rhsgref_8Rnd_762x63_M2B_M1rifle"),
		LIST_1("rhs_grenade_mkii_mag")
	};
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_DefusalKit",
		LIST_2("rhs_mine_m2a3b_trip_mag"),
		LIST_4("rhs_mine_m3_pressure_mag"),
		LIST_1("rhs_mine_m7a2_mag"),
		LIST_4("rhs_charge_M2tet_x2_mag")
    };
};
class engm : r
{
    displayName = "Combat Engineer (AT Mines)";
	magazines[] = {
		LIST_5("rhsgref_8Rnd_762x63_M2B_M1rifle"),
		LIST_1("rhs_grenade_mkii_mag")
	};
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"rhssaf_alice_smb"};
    backpackItems[] = {
        "MineDetector",
        "ACE_wirecutter",
        "ACE_DefusalKit",
		LIST_4("rhs_mine_TM43_mag")
    };
};
class UAV_light : r_light
{
    displayName = "UAV Operator (no drone)";
    traits[] += {"UAVHacker"};
    linkedItems[] += {"I_UavTerminal"};
};
class UAV : UAV_light
{
    displayName = "UAV Operator (no drone)";
};