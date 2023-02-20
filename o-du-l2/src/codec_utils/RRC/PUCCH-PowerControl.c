/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#include "PUCCH-PowerControl.h"

#include "P0-PUCCH.h"
#include "PUCCH-PathlossReferenceRS.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_deltaF_PUCCH_f0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_deltaF_PUCCH_f1_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_deltaF_PUCCH_f2_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_deltaF_PUCCH_f3_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_deltaF_PUCCH_f4_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -16 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p0_Set_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pathlossReferenceRSs_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_p0_Set_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_type_p0_Set_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_pathlossReferenceRSs_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_pathlossReferenceRSs_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_twoPUCCH_PC_AdjustmentStates_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_twoPUCCH_PC_AdjustmentStates_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_deltaF_PUCCH_f0_constr_2 CC_NOTUSED = {
	{ 1, 0 }	/* (-16..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_deltaF_PUCCH_f0_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_deltaF_PUCCH_f1_constr_3 CC_NOTUSED = {
	{ 1, 0 }	/* (-16..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_deltaF_PUCCH_f1_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_deltaF_PUCCH_f2_constr_4 CC_NOTUSED = {
	{ 1, 0 }	/* (-16..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_deltaF_PUCCH_f2_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_deltaF_PUCCH_f3_constr_5 CC_NOTUSED = {
	{ 1, 0 }	/* (-16..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_deltaF_PUCCH_f3_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_deltaF_PUCCH_f4_constr_6 CC_NOTUSED = {
	{ 1, 0 }	/* (-16..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_deltaF_PUCCH_f4_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -16,  15 }	/* (-16..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_p0_Set_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..8)) */};
static asn_per_constraints_t asn_PER_memb_p0_Set_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pathlossReferenceRSs_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_pathlossReferenceRSs_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_p0_Set_7[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_P0_PUCCH,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_p0_Set_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_p0_Set_specs_7 = {
	sizeof(struct PUCCH_PowerControl__p0_Set),
	offsetof(struct PUCCH_PowerControl__p0_Set, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_p0_Set_7 = {
	"p0-Set",
	"p0-Set",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_p0_Set_tags_7,
	sizeof(asn_DEF_p0_Set_tags_7)
		/sizeof(asn_DEF_p0_Set_tags_7[0]) - 1, /* 1 */
	asn_DEF_p0_Set_tags_7,	/* Same as above */
	sizeof(asn_DEF_p0_Set_tags_7)
		/sizeof(asn_DEF_p0_Set_tags_7[0]), /* 2 */
	{ &asn_OER_type_p0_Set_constr_7, &asn_PER_type_p0_Set_constr_7, SEQUENCE_OF_constraint },
	asn_MBR_p0_Set_7,
	1,	/* Single element */
	&asn_SPC_p0_Set_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_pathlossReferenceRSs_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_PUCCH_PathlossReferenceRS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_pathlossReferenceRSs_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_pathlossReferenceRSs_specs_9 = {
	sizeof(struct PUCCH_PowerControl__pathlossReferenceRSs),
	offsetof(struct PUCCH_PowerControl__pathlossReferenceRSs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_pathlossReferenceRSs_9 = {
	"pathlossReferenceRSs",
	"pathlossReferenceRSs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_pathlossReferenceRSs_tags_9,
	sizeof(asn_DEF_pathlossReferenceRSs_tags_9)
		/sizeof(asn_DEF_pathlossReferenceRSs_tags_9[0]) - 1, /* 1 */
	asn_DEF_pathlossReferenceRSs_tags_9,	/* Same as above */
	sizeof(asn_DEF_pathlossReferenceRSs_tags_9)
		/sizeof(asn_DEF_pathlossReferenceRSs_tags_9[0]), /* 2 */
	{ &asn_OER_type_pathlossReferenceRSs_constr_9, &asn_PER_type_pathlossReferenceRSs_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_pathlossReferenceRSs_9,
	1,	/* Single element */
	&asn_SPC_pathlossReferenceRSs_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoPUCCH_PC_AdjustmentStates_value2enum_11[] = {
	{ 0,	9,	"twoStates" }
};
static const unsigned int asn_MAP_twoPUCCH_PC_AdjustmentStates_enum2value_11[] = {
	0	/* twoStates(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoPUCCH_PC_AdjustmentStates_specs_11 = {
	asn_MAP_twoPUCCH_PC_AdjustmentStates_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_twoPUCCH_PC_AdjustmentStates_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoPUCCH_PC_AdjustmentStates_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoPUCCH_PC_AdjustmentStates_11 = {
	"twoPUCCH-PC-AdjustmentStates",
	"twoPUCCH-PC-AdjustmentStates",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoPUCCH_PC_AdjustmentStates_tags_11,
	sizeof(asn_DEF_twoPUCCH_PC_AdjustmentStates_tags_11)
		/sizeof(asn_DEF_twoPUCCH_PC_AdjustmentStates_tags_11[0]) - 1, /* 1 */
	asn_DEF_twoPUCCH_PC_AdjustmentStates_tags_11,	/* Same as above */
	sizeof(asn_DEF_twoPUCCH_PC_AdjustmentStates_tags_11)
		/sizeof(asn_DEF_twoPUCCH_PC_AdjustmentStates_tags_11[0]), /* 2 */
	{ &asn_OER_type_twoPUCCH_PC_AdjustmentStates_constr_11, &asn_PER_type_twoPUCCH_PC_AdjustmentStates_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoPUCCH_PC_AdjustmentStates_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PUCCH_PowerControl_1[] = {
	{ ATF_POINTER, 8, offsetof(struct PUCCH_PowerControl, deltaF_PUCCH_f0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_deltaF_PUCCH_f0_constr_2, &asn_PER_memb_deltaF_PUCCH_f0_constr_2,  memb_deltaF_PUCCH_f0_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f0"
		},
	{ ATF_POINTER, 7, offsetof(struct PUCCH_PowerControl, deltaF_PUCCH_f1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_deltaF_PUCCH_f1_constr_3, &asn_PER_memb_deltaF_PUCCH_f1_constr_3,  memb_deltaF_PUCCH_f1_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f1"
		},
	{ ATF_POINTER, 6, offsetof(struct PUCCH_PowerControl, deltaF_PUCCH_f2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_deltaF_PUCCH_f2_constr_4, &asn_PER_memb_deltaF_PUCCH_f2_constr_4,  memb_deltaF_PUCCH_f2_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f2"
		},
	{ ATF_POINTER, 5, offsetof(struct PUCCH_PowerControl, deltaF_PUCCH_f3),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_deltaF_PUCCH_f3_constr_5, &asn_PER_memb_deltaF_PUCCH_f3_constr_5,  memb_deltaF_PUCCH_f3_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f3"
		},
	{ ATF_POINTER, 4, offsetof(struct PUCCH_PowerControl, deltaF_PUCCH_f4),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_deltaF_PUCCH_f4_constr_6, &asn_PER_memb_deltaF_PUCCH_f4_constr_6,  memb_deltaF_PUCCH_f4_constraint_1 },
		0, 0, /* No default value */
		"deltaF-PUCCH-f4"
		},
	{ ATF_POINTER, 3, offsetof(struct PUCCH_PowerControl, p0_Set),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_p0_Set_7,
		0,
		{ &asn_OER_memb_p0_Set_constr_7, &asn_PER_memb_p0_Set_constr_7,  memb_p0_Set_constraint_1 },
		0, 0, /* No default value */
		"p0-Set"
		},
	{ ATF_POINTER, 2, offsetof(struct PUCCH_PowerControl, pathlossReferenceRSs),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_pathlossReferenceRSs_9,
		0,
		{ &asn_OER_memb_pathlossReferenceRSs_constr_9, &asn_PER_memb_pathlossReferenceRSs_constr_9,  memb_pathlossReferenceRSs_constraint_1 },
		0, 0, /* No default value */
		"pathlossReferenceRSs"
		},
	{ ATF_POINTER, 1, offsetof(struct PUCCH_PowerControl, twoPUCCH_PC_AdjustmentStates),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoPUCCH_PC_AdjustmentStates_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoPUCCH-PC-AdjustmentStates"
		},
};
static const int asn_MAP_PUCCH_PowerControl_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_PUCCH_PowerControl_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PUCCH_PowerControl_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deltaF-PUCCH-f0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaF-PUCCH-f1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* deltaF-PUCCH-f2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* deltaF-PUCCH-f3 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deltaF-PUCCH-f4 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* p0-Set */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* pathlossReferenceRSs */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* twoPUCCH-PC-AdjustmentStates */
};
asn_SEQUENCE_specifics_t asn_SPC_PUCCH_PowerControl_specs_1 = {
	sizeof(struct PUCCH_PowerControl),
	offsetof(struct PUCCH_PowerControl, _asn_ctx),
	asn_MAP_PUCCH_PowerControl_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_PUCCH_PowerControl_oms_1,	/* Optional members */
	8, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PUCCH_PowerControl = {
	"PUCCH-PowerControl",
	"PUCCH-PowerControl",
	&asn_OP_SEQUENCE,
	asn_DEF_PUCCH_PowerControl_tags_1,
	sizeof(asn_DEF_PUCCH_PowerControl_tags_1)
		/sizeof(asn_DEF_PUCCH_PowerControl_tags_1[0]), /* 1 */
	asn_DEF_PUCCH_PowerControl_tags_1,	/* Same as above */
	sizeof(asn_DEF_PUCCH_PowerControl_tags_1)
		/sizeof(asn_DEF_PUCCH_PowerControl_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PUCCH_PowerControl_1,
	8,	/* Elements count */
	&asn_SPC_PUCCH_PowerControl_specs_1	/* Additional specs */
};
