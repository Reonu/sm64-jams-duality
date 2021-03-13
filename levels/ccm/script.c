#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/ccm/header.h"

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ccm_geo_00042C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ccm_geo_00045C), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ccm_geo_000494), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ccm_geo_0004BC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ccm_geo_0004E4), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_CABIN_DOOR, cabin_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_ROPEWAY_LIFT, ccm_geo_0003D0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_BASE, ccm_geo_0003F0), 
	LOAD_MODEL_FROM_GEO(MODEL_CCM_SNOWMAN_HEAD, ccm_geo_00040C), 

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x02, 0, 0, 0),
		OBJECT(MODEL_NONE, 0, 200, -10000, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		MARIO_POS(0x01, 0, 0, 200, -10000),
		OBJECT(MODEL_NONE, 8, -135, -10074, 0, 180, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_GOOMBA, 128, -135, -9025, 0, 0, 0, 0x00000000, bhvGoomba),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	AREA(2, ccm_area_2),
		INSTANT_WARP(0x00, 0x03, 0, 0, 0),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BREAKABLE_BOX, -338, 349, -7642, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BULLY, -21, 1698, -6725, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 795, 1698, -5009, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 14, 1698, -6381, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 461, 1698, -4377, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 815, 1698, -4261, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -419, 1698, -4985, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -776, 1698, -4575, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -449, 1698, -4233, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, 39, 1698, -7102, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BREAKABLE_BOX, 69, 0, -7642, 0, 0, 0, 0x00050000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 285, 614, -7642, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, -105, 1263, -7642, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 625, 967, -7642, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 504, 0, -8518, 0, 0, 0, 0x00000000, bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_GOOMBA, -471, 0, -8032, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, 138, 0, -9941, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	AREA(3, ccm_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x04, 0, 0, 0),
		WARP_NODE(0xF1, LEVEL_CCM, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_FLYGUY, -310, 1620, -2879, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_MR_BLIZZARD, 995, -171, -10507, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 995, -171, -9760, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_GOOMBA, -1, -171, -6915, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 283, -183, -8232, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_MR_BLIZZARD, 995, -171, -7517, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -667, -171, -9760, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -684, -171, -8665, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 995, -171, -8665, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -667, -171, -10507, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -667, -171, -7517, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 995, -171, -6217, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -667, -171, -6217, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 166, -171, -6217, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_NONE, 180, -171, -11881, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_YELLOW_SPRING, -61, 1620, -2822, 0, 90, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_YELLOW_SPRING, 626, 1234, -3044, 0, 90, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_YELLOW_SPRING, 213, 698, -3166, 0, 90, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_YELLOW_SPRING, 43, -167, -4064, 0, 90, 0, 0x00000000, bhvGreenSpring),
		TERRAIN(ccm_area_3_collision),
		MACRO_OBJECTS(ccm_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	AREA(4, ccm_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x05, 0, 0, 0),
		OBJECT(MODEL_BOWSER_BOMB, -21, 94, 10871, 0, 0, 0, 50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 279, 394, 10871, 0, 0, 0, 50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 279, 94, 10871, 0, 0, 0, 50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -21, 584, 10871, 0, 0, 0, 50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -321, 94, 10871, 0, 0, 0, 50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -321, 394, 10871, 0, 0, 0, 50, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 279, 94, 10871, 0, 0, 0, 100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -321, 94, 10871, 0, 0, 0, 100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 279, 394, 10871, 0, 0, 0, 100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -321, 394, 10871, 0, 0, 0, 100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -21, 394, 10871, 0, 0, 0, 100, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 279, 94, 10871, 0, 0, 0, 150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 129, 94, 10871, 0, 0, 0, 160, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -71, 94, 10871, 0, 0, 0, 170, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 279, 394, 10871, 0, 0, 0, 150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 129, 394, 10871, 0, 0, 0, 160, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -71, 394, 10871, 0, 0, 0, 170, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 279, 694, 10871, 0, 0, 0, 150, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 129, 694, 10871, 0, 0, 0, 160, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -71, 694, 10871, 0, 0, 0, 170, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -14, 94, 10871, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 329, 94, 10871, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -389, 94, 10890, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -14, 394, 10871, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 329, 394, 10871, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -385, 394, 10890, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 329, 694, 10871, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -375, 694, 10890, 0, 0, 0, 220, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 329, 94, 10871, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -389, 94, 10890, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -14, 394, 10871, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 329, 394, 10871, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -385, 394, 10890, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 329, 694, 10871, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -375, 694, 10890, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -14, 694, 10871, 0, 0, 0, 260, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 270, 94, 10871, 0, 0, 0, 310, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -330, 94, 10878, 0, 0, 0, 310, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -30, 94, 10871, 0, 0, 0, 310, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 270, 94, 10871, 0, 0, 0, 330, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -30, 94, 10871, 0, 0, 0, 330, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, -330, 94, 10878, 0, 0, 0, 330, bhvBowserBomb),
		OBJECT(MODEL_HEART, -30, 94, 10871, 0, 0, 0, 400, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, 270, 94, 10871, 0, 0, 0, 400, bhvRecoveryHeart),
		OBJECT(MODEL_HEART, -330, 94, 10871, 0, 0, 0, 400, bhvRecoveryHeart),
		OBJECT(MODEL_NONE, 89, 0, -6074, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		TERRAIN(ccm_area_4_collision),
		MACRO_OBJECTS(ccm_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	AREA(5, ccm_area_5),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x05, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x06, 0, 0, 0),
		OBJECT(0xF3, 167, 2943, 9240, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(0xF3, 47, 4612, 13684, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_RED_SPRING, 0, 4612, 14184, 0, 0, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_MR_BLIZZARD, -734, 0, 12330, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -764, 1056, 7768, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -734, 0, 10015, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -694, 1740, 7765, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -563, 3161, 10546, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -712, 3255, 11776, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -631, 4367, 12814, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -480, 4612, 13506, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_NONE, -178, 0, 12823, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		TERRAIN(ccm_area_5_collision),
		MACRO_OBJECTS(ccm_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	AREA(6, ccm_area_6),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x06, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x07, 0, 0, 0),
		OBJECT(MODEL_BOWSER_BOMB, 0, 854, 7607, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 854, 7212, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 1334, 7212, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BOWSER_BOMB, 0, 854, 6808, 0, 0, 0, 0x00000000, bhvBowserBomb),
		OBJECT(MODEL_BULLY, 21, 1690, -865, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_BULLY, -63, 4146, 1530, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_WOODEN_SIGNPOST, -114, 724, 2352, 0, 90, 0, 0x00030000, bhvMessagePanel),
		OBJECT(MODEL_GOOMBA, -38, 724, 4090, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -35, 4162, 3379, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -32, 4162, 3977, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -30, 4162, 4579, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_NONE, -53, -70, 10979, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_YELLOW_SPRING, 0, -70, 8407, 0, 0, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_BULLY, 0, -70, 8828, 0, 0, 0, 0x00000000, bhvSmallBully),
		OBJECT(MODEL_YELLOW_SPRING, 0, 754, 5854, 0, 0, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_FLYGUY, 0, 1184, 4994, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_YELLOW_SPRING, 0, 754, 4997, 0, 0, 0, 0x00000000, bhvGreenSpring),
		TERRAIN(ccm_area_6_collision),
		MACRO_OBJECTS(ccm_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	AREA(7, ccm_area_7),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CCM, 0x07, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x08, 0, 0, 0),
		WARP_NODE(0xF0, LEVEL_BOB, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -21, 3961, -2220, 0, 0, 0, 0x00000000, bhvBigBoulderGenerator),
		OBJECT(MODEL_NONE, -53, -329, -11680, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		OBJECT(MODEL_STAR, -21, 4392, -1622, 0, 0, 0, 0x00000000, bhvStar),
		TERRAIN(ccm_area_7_collision),
		MACRO_OBJECTS(ccm_area_7_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SNOW),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 200, -10000),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
