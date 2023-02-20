/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_ResultsPerSSB_Index_H_
#define	_ResultsPerSSB_Index_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SSB-Index.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasQuantityResults;

/* ResultsPerSSB-Index */
typedef struct ResultsPerSSB_Index {
	SSB_Index_t	 ssb_Index;
	struct MeasQuantityResults	*ssb_Results;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResultsPerSSB_Index_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResultsPerSSB_Index;
extern asn_SEQUENCE_specifics_t asn_SPC_ResultsPerSSB_Index_specs_1;
extern asn_TYPE_member_t asn_MBR_ResultsPerSSB_Index_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _ResultsPerSSB_Index_H_ */
#include <asn_internal.h>
