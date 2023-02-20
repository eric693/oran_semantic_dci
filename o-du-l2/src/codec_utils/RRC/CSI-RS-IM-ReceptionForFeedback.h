/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "02_Aug/rrc_15_3_asn.asn1"
 * 	`asn1c -D ./Aug02 -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_CSI_RS_IM_ReceptionForFeedback_H_
#define	_CSI_RS_IM_ReceptionForFeedback_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC {
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p2	= 0,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p4	= 1,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p8	= 2,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p12	= 3,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p16	= 4,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p24	= 5,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p32	= 6,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p40	= 7,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p48	= 8,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p56	= 9,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p64	= 10,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p72	= 11,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p80	= 12,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p88	= 13,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p96	= 14,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p104	= 15,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p112	= 16,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p120	= 17,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p128	= 18,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p136	= 19,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p144	= 20,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p152	= 21,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p160	= 22,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p168	= 23,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p176	= 24,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p184	= 25,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p192	= 26,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p200	= 27,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p208	= 28,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p216	= 29,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p224	= 30,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p232	= 31,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p240	= 32,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p248	= 33,
	CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC_p256	= 34
} e_CSI_RS_IM_ReceptionForFeedback__maxNumberPortsAcrossNZP_CSI_RS_PerCC;
typedef enum CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC {
	CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC_n1	= 0,
	CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC_n2	= 1,
	CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC_n4	= 2,
	CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC_n8	= 3,
	CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC_n16	= 4,
	CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC_n32	= 5
} e_CSI_RS_IM_ReceptionForFeedback__maxNumberCS_IM_PerCC;
typedef enum CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC {
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n5	= 0,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n6	= 1,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n7	= 2,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n8	= 3,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n9	= 4,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n10	= 5,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n12	= 6,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n14	= 7,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n16	= 8,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n18	= 9,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n20	= 10,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n22	= 11,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n24	= 12,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n26	= 13,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n28	= 14,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n30	= 15,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n32	= 16,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n34	= 17,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n36	= 18,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n38	= 19,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n40	= 20,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n42	= 21,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n44	= 22,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n46	= 23,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n48	= 24,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n50	= 25,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n52	= 26,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n54	= 27,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n56	= 28,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n58	= 29,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n60	= 30,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n62	= 31,
	CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC_n64	= 32
} e_CSI_RS_IM_ReceptionForFeedback__maxNumberSimultaneousCSI_RS_ActBWP_AllCC;
typedef enum CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC {
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p8	= 0,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p12	= 1,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p16	= 2,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p24	= 3,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p32	= 4,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p40	= 5,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p48	= 6,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p56	= 7,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p64	= 8,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p72	= 9,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p80	= 10,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p88	= 11,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p96	= 12,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p104	= 13,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p112	= 14,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p120	= 15,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p128	= 16,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p136	= 17,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p144	= 18,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p152	= 19,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p160	= 20,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p168	= 21,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p176	= 22,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p184	= 23,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p192	= 24,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p200	= 25,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p208	= 26,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p216	= 27,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p224	= 28,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p232	= 29,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p240	= 30,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p248	= 31,
	CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_p256	= 32
} e_CSI_RS_IM_ReceptionForFeedback__totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC;

/* CSI-RS-IM-ReceptionForFeedback */
typedef struct CSI_RS_IM_ReceptionForFeedback {
	long	 maxNumberNZP_CSI_RS_PerCC;
	long	 maxNumberPortsAcrossNZP_CSI_RS_PerCC;
	long	 maxNumberCS_IM_PerCC;
	long	 maxNumberSimultaneousCSI_RS_ActBWP_AllCC;
	long	 totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_RS_IM_ReceptionForFeedback_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberPortsAcrossNZP_CSI_RS_PerCC_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberCS_IM_PerCC_39;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_maxNumberSimultaneousCSI_RS_ActBWP_AllCC_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_totalNumberPortsSimultaneousCSI_RS_ActBWP_AllCC_80;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_RS_IM_ReceptionForFeedback;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_RS_IM_ReceptionForFeedback_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_RS_IM_ReceptionForFeedback_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_RS_IM_ReceptionForFeedback_H_ */
#include <asn_internal.h>
