/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_PWS_Failed_NR_CGI_List_H_
#define	_PWS_Failed_NR_CGI_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolIE_SingleContainer;

/* PWS-Failed-NR-CGI-List */
typedef struct PWS_Failed_NR_CGI_List {
	A_SEQUENCE_OF(struct ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PWS_Failed_NR_CGI_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PWS_Failed_NR_CGI_List;

#ifdef __cplusplus
}
#endif

#endif	/* _PWS_Failed_NR_CGI_List_H_ */
#include <asn_internal.h>
