/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DNDS"
 * 	found in "dnds.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_DelResponse_H_
#define	_DelResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DNDSResult.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DelResponse */
typedef DNDSResult_t	 DelResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DelResponse;
asn_struct_free_f DelResponse_free;
asn_struct_print_f DelResponse_print;
asn_constr_check_f DelResponse_constraint;
ber_type_decoder_f DelResponse_decode_ber;
der_type_encoder_f DelResponse_encode_der;
xer_type_decoder_f DelResponse_decode_xer;
xer_type_encoder_f DelResponse_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DelResponse_H_ */
#include <asn_internal.h>
