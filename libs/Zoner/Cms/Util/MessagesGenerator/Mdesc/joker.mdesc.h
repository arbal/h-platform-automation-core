#ifndef MOD_JOKER_MDESCS
#define MOD_JOKER_MDESCS

#include "mdescs.h"

// joker messages
#define JOKER_CMSM(c) \
	MDESC2(c, joker_cmsm, contact_whois,						14,0,0,1, "Whois kontaktu.", "Whois kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, contact_create,						14,0,0,2, "Vytvo�en� nov�ho kontaktu.", "Vytvo�en� nov�ho kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, contact_update_by_admin,				14,0,0,3, "Zm�na �daj� kontaktu na z�klad� potvrzen� administr�tora.", "Zm�na �daj� kontaktu se nezda�ila.") \
	MDESC2(c, joker_cmsm, contact_update_by_password,			14,0,0,4, "Zm�na �daj� kontaktu s pou�it�m hesla.", "Zm�na �daj� kontaktu se nezda�ila.") \
	MDESC2(c, joker_cmsm, contact_send_password,				14,0,0,5, "P�eposl�n� hesla pro kontakt.", "P�eposl�n� hesla pro kontakt se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, domain_check,							14,0,1,1, "Kontrola dostupnosti dom�ny.", "Kontrola dostupnosti dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, domain_whois,							14,0,1,2, "Whois dom�ny.", "Whois dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_owner_change_by_admin,			14,0,1,3, "Zm�na vlastn�ka dom�ny na z�klad� potvrzen� administr�tora.", "Zm�na vlastn�ka se nezda�ila.") \
	MDESC2(c, joker_cmsm, domain_create_order,					14,0,1,4, "Objedn�n� nov� dom�ny.", "Objedn�n� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_renew_order,					14,0,1,5, "Objedn�n� prodlou�en� platnosti dom�ny.", "Objedn�n� prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_by_admin,				14,0,1,6, "P�eveden� dom�ny administr�torem.", "P�eveden� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_update_by_password,			14,0,1,7, "Zm�na �daj� dom�ny s pou�it�m hesla.", "Zm�na �daj� dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, domain_lock_by_password,				14,0,1,8, "Zamknut� dom�ny s pou�it�m hesla.", "Zamknut� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_unlock_by_password,			14,0,1,9, "Odemknut� dom�ny s pou�it�m hesla.", "Odemknut� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_lock_by_admin,					14,0,1,10, "Zamknut� dom�ny administr�torem.", "Zamknut� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_unlock_by_admin,				14,0,1,11, "Odemknut� dom�ny administr�torem.", "Odemknut� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_send_authid_by_password,		14,0,1,12, "Zasl�n� authid vlastn�kovi dom�ny s pou�it�m hesla.", "Zasl�n� authid vlastn�kovi dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_send_authid_by_admin,			14,0,1,13, "Zasl�n� authid vlastn�kovi dom�ny administr�torem.", "Zasl�n� authid vlastn�kovi dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_update_by_admin,				14,0,1,14, "Zm�na �daj� dom�ny administr�torem.", "Zm�na �daj� dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, domain_transfer_order,				14,0,1,15, "Objedn�n� p�eveden� dom�ny.", "Objedn�n� p�eveden� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_cancel_by_admin,		14,0,1,16, "Zru�en� p�evodu dom�ny administr�torem.", "Zru�en� p�evodu dom�ny administr�torem se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_ex_by_admin,			14,0,1,17, "P�eveden� dom�ny administr�torem.", "P�eveden� dom�ny se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, contact_create_ccc,					14,1,0,1, "Vytvo�en� nov�ho kontaktu.", "Vytvo�en� nov�ho kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, contact_create_from_table,			14,1,0,2, "Vytvo�en� nov�ho kontaktu.", "Vytvo�en� nov�ho kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, contact_get_from_table,				14,1,0,3, "Vr�t� kontakt z DB.", "Vracen� kontaktu se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, domain_create_ccc,					14,1,1,1, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_create_from_core_table_ccc,	14,1,1,2, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_create_from_joker_table_ccc,	14,1,1,3, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_renew_ccc,						14,1,1,4, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_update_ccc,					14,1,1,5, "Zm�na �daj� dom�ny.", "Zm�na �daj� dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, domain_get_balance,					14,1,1,6, "Z�sk�n� z�statku.", "Z�sk�n� z�statku se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_transfer_ccc,					14,1,1,7, "P�eveden� dom�ny.", "P�eveden� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_sign_ccc,						14,1,1,8, "Podepsani domeny DNSSECem.", "Podepsani dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, domain_unsign_ccc,					14,1,1,9, "Odpodepsani dom�ny DNSSECem.", "Odpodepsani dom�ny se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, hu_domain_whois,						14,2,0,1, "Whois dom�ny.", "Whois dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, hu_domain_create,						14,2,0,2, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, hu_domain_renew,						14,2,0,3, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, hu_domain_update_ns,					14,2,0,4, "Zm�na NS dom�ny.", "Zm�na NS dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, hu_domain_update_admin_tech,			14,2,0,5, "Zm�na Admin a Tech kontaktu dom�ny.", "Zm�na Admin a Tech kontaktu dom�ny se nezda�ila.") \
\
	MDESC2(c, joker_cmsm, hu_contact_whois,						14,2,1,1, "Whois kontaktu.", "Whois kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, hu_contact_create_owner,				14,2,1,2, "Vytvo�en� nov�ho kontaktu v roli vlastn�ka.", "Vytvo�en� nov�ho kontaktu v roli vlastn�ka se nezda�ilo.") \
	MDESC2(c, joker_cmsm, hu_contact_update_owner,				14,2,1,3, "Zm�na �daj� kontaktu v roli vlastn�ka.", "Zm�na �daj� kontaktu v roli vlastn�ka se nezda�ila.") \
	MDESC2(c, joker_cmsm, hu_contact_create_tech,				14,2,1,4, "Vytvo�en� nov�ho kontaktu v roli admin, tech.", "Vytvo�en� nov�ho kontaktu v roli admin, tech se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, webenlet_domain_whois,				14,2,5,1, "Whois dom�ny.", "Whois dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, webenlet_domain_create,				14,2,5,2, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, webenlet_domain_renew,				14,2,5,3, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, webenlet_domain_update_ns,			14,2,5,4, "Zm�na NS dom�ny.", "Zm�na NS dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, webenlet_domain_update_admin_tech,	14,2,5,5, "Zm�na Admin a Tech kontaktu dom�ny.", "Zm�na Admin a Tech kontaktu dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, webenlet_make_orders,					14,2,5,6, "Vyhodnocen� objednavek od registr�tora.", "Vyhodnocen� objednavek od registr�tora se nezda�ilo.") \
	MDESC2(c, joker_cmsm, webenlet_get_statement,				14,2,5,7, "Pozada o souhlas s podminkami registr�tora.", "Pozadavek o souhlas se nezda�il.") \
	MDESC2(c, joker_cmsm, webenlet_set_statement,				14,2,5,8, "Posle o souhlas s podminkami registr�tora.", "Souhlas se nezda�il.") \
	MDESC2(c, joker_cmsm, webenlet_contact_whois,				14,2,5,10, "Whois kontaktu.", "Whois kontaktu se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, eurodns_domain_renew,					14,3,0,1, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, eurodns_domain_whois,					14,3,0,2, "Whois dom�ny.", "Whois dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, eurodns_contact_whois,				14,3,0,3, "Whois kontaktu.", "Whois kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, eurodns_poll,							14,3,0,4, "Vyhodnocen� zpr�v od registr�tora.", "Vyhodnocen� zpr�v od registr�tora se nezda�ilo.") \
	MDESC2(c, joker_cmsm, eurodns_domain_create,				14,3,0,5, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, eurodns_get_balance,					14,3,0,6, "Z�sk�n� z�statku.", "Z�sk�n� z�statku se nezda�ilo.") \
	MDESC2(c, joker_cmsm, eurodns_domain_update_by_admin,		14,3,0,7, "Zm�na �daj� dom�ny.", "Zm�na �daj� dom�ny se nezda�ila.") \
\
	MDESC2(c, joker_cmsm, aoi_domain_renew,						14,4,0,1, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, aoi_domain_create,					14,4,0,2, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, subreg_domain_create,					14,5,0,1, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, subreg_domain_renew,					14,5,0,2, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, subreg_poll,							14,5,0,3, "Vyhodnocen� zpr�v od registr�tora.", "Vyhodnocen� zpr�v od registr�tora se nezda�ilo.") \
	MDESC2(c, joker_cmsm, subreg_get_balance,					14,5,0,4, "Z�sk�n� z�statku.", "Z�sk�n� z�statku se nezda�ilo.") \
	MDESC2(c, joker_cmsm, subreg_domain_check,					14,5,0,5, "Kontrola dostupnosti dom�ny.", "Kontrola dostupnosti dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, subreg_domain_whois,					14,5,0,6, "Whois dom�ny.", "Whois dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, subreg_contact_whois,					14,5,0,7, "Whois kontaktu.", "Whois kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, subreg_domain_update_by_admin,		14,5,0,8, "Zm�na �daj� domeny na z�klad� potvrzen� administr�tora.", "Zm�na �daj� domeny se nezda�ila.") \
	MDESC2(c, joker_cmsm, subreg_contact_create,				14,5,0,9, "Vytvo�en� nov�ho kontaktu.", "Vytvo�en� nov�ho kontaktu se nezda�ilo.") \
	MDESC2(c, joker_cmsm, subreg_contact_update,				14,5,0,10, "Zm�na �daj� kontaktu.", "Zm�na �daj� kontaktu se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, ro_domain_create,						14,6,0,1, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, ru_domain_create,						14,7,0,1, "Vytvo�en� nov� dom�ny.", "Vytvo�en� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, ru_domain_renew,						14,7,0,2, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, ru_make_orders,						14,7,0,3, "Vyhodnocen� objednavek od registr�tora.", "Vyhodnocen� objednavek od registr�tora se nezda�ilo.") \
	MDESC2(c, joker_cmsm, ru_get_balance,						14,7,0,4, "Z�sk�n� z�statku.", "Z�sk�n� z�statku se nezda�ilo.") \
\
	MDESC2(c, joker_cmsm, uk_domain_check,						14,8,0,1, "Kontrola dostupnosti dom�ny.", "Kontrola dostupnosti dom�ny se nezda�ila.") \
	MDESC2(c, joker_cmsm, uk_domain_whois,						14,8,0,2, "Whois dom�ny.", "Whois dom�ny se nezda�ilo.") \
	MDESC2(c, joker_cmsm, uk_contact_whois,						14,8,0,3, "Whois kontaktu.", "Whois kontaktu se nezda�ilo.") \
	\
	MDESC2(c, symantec_cmsm, cert_enroll,						14,10,0,1, "Registrace ssl certifik�tu.", "Registrace ssl certifik�tu se nezda�ila.") \
	MDESC2(c, symantec_cmsm, domain_validate,					14,10,0,2, "Validace dom�nov�ho jm�na certifik�tu.", "Validace dom�nov�ho jm�na certifik�tu se nezda�ila.") \
	MDESC2(c, symantec_cmsm, cert_renew,						14,10,0,3, "Renew ssl certifik�tu.", "Renew ssl certifik�tu se nezda�ila.") \
\
	MDESC2(c, joker_cmsm, registrar_make_poll,					14,20,0,1, "Vlo�� akci na zpracovan� pollu (objednavek) registr�tora.", "Vlo�en� akce se nezda�ilo.") \



#define JOKER_RESP(c) \
	MDESC(c, joker_resp, unknown_message,						14,0,0,30001, "Byla zasl�na nezn�m� zpr�va.") \
	MDESC(c, joker_resp, access_denied,							14,0,0,30002, "Nem�te dostate�n� opr�vn�n�.") \
	MDESC(c, joker_resp, exception_occured,						14,0,0,30003, "Nastala vyj�mka.") \
	MDESC(c, joker_resp, syntax_error,							14,0,0,30004, "Nastala syntaktick� chyba, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, joker_resp, joker_error,							14,0,0,30005, "Nastala chyba na JOKERu, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, joker_resp, joker_exception_error,					14,0,0,30006, "Nastala vyj�mka na JOKERu, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, joker_resp, runtime_error,							14,0,0,30007, "Nastala runtime chyba, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, joker_resp, sql_error,								14,0,0,30008, "Nastala chyba datab�ze, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, joker_resp, unknown_error,							14,0,0,30009, "Nastala nezn�m� chyba.") \
\
	MDESC(c, symantec_resp, internal_data_check_failed,			14,10,0,30001, "INTERNAL_DATA_CHECK_FAILED.") \
\
	MDESC(c, joker_resp, contact_whois_succeeded,				14,0,0,50001, "Whois kontaktu �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, contact_created,						14,0,0,50002, "Vytvo�en� nov�ho kontaktu �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, contact_updated,						14,0,0,50003, "Zm�na �daj� kontaktu �sp�n� prob�hla.") \
	MDESC(c, joker_resp, contact_password_sent,					14,0,0,50004, "P�eposl�n� hesla pro kontakt �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, contact_exists,						14,0,0,50005, "Kontaktu ji� existuje.") \
	MDESC(c, joker_resp, contact_not_exists,					14,0,0,50007, "Kontaktu neexistuje.") \
\
	MDESC(c, joker_resp, domain_checked,						14,0,1,50001, "Kontrola dostupnosti dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, domain_whois_succeeded,				14,0,1,50002, "Whois dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_created,						14,0,1,50003, "Vytvo�en� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_owner_changed,					14,0,1,50004, "Zm�na vlastn�ka dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, domain_renewed,						14,0,1,50005, "Prodlou�en� platnosti dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_transferred,					14,0,1,50006, "P�eveden� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_updated,						14,0,1,50007, "Zm�na �daj� dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, domain_locked,							14,0,1,50008, "Zamknut� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_unlocked,						14,0,1,50009, "Odemknut� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_authid_sent,					14,0,1,50010, "Zasl�n� authid vlastn�kovi dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_transfer_canceled,				14,0,1,50011, "Zru�en� p�evodu dom�ny administr�torem �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, domain_get_balance_ok,					14,0,1,50012, "Z�sk�n� z�statku �sp�n� prob�hlo.") \
\
	MDESC(c, joker_resp, hu_domain_whois_succeeded,				14,2,0,50001, "Whois dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, hu_domain_created,						14,2,0,50002, "Vytvo�en� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, hu_domain_renewed,						14,2,0,50003, "Prodlou�en� platnosti dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, hu_domain_ns_changed,					14,2,0,50004, "Zm�na NS dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, hu_domain_admin_tech_changed,			14,2,0,50005, "Zm�na admin a tech kontaktu dom�ny �sp�n� prob�hla.") \
\
	MDESC(c, joker_resp, hu_contact_whois_succeeded,			14,2,1,50001, "Whois kontaktu �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, hu_contact_created,					14,2,1,50002, "Vytvo�en� nov�ho kontaktu �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, hu_contact_updated,					14,2,1,50003, "Zm�na �daj� kontaktu �sp�n� prob�hla.") \
\
	MDESC(c, joker_resp, webenlet_domain_whois_succeeded,		14,2,5,50001, "Whois dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, webenlet_domain_created,				14,2,5,50002, "Vytvo�en� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, webenlet_domain_renewed,				14,2,5,50003, "Prodlou�en� platnosti dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, webenlet_domain_ns_changed,			14,2,5,50004, "Zm�na NS dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, webenlet_domain_admin_tech_changed,	14,2,5,50005, "Zm�na admin a tech kontaktu dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, webenlet_make_orders_succeeded,		14,2,5,50006, "Vyhodnocen� objednavek registr�tora �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, webenlet_get_statement_succeeded,		14,2,5,50007, "Souhlas s podminkami registr�tora �sp�n� vygenerovan.") \
	MDESC(c, joker_resp, webenlet_set_statement_succeeded,		14,2,5,50008, "Souhlas s podminkami registr�tora �sp�n� zadan.") \
	MDESC(c, joker_resp, webenlet_contact_whois_succeeded,		14,2,5,50010, "Whois kontaktu �sp�n� prob�hlo.") \
\
	MDESC(c, joker_resp, eurodns_domain_renewed,				14,3,0,50001, "Prodlou�en� platnosti dom�ny �sp�n� zad�no.") \
	MDESC(c, joker_resp, eurodns_domain_whois_succeeded,		14,3,0,50002, "Whois dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, eurodns_contact_whois_succeeded,		14,3,0,50003, "Whois kontaktu �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, eurodns_poll_succeeded,				14,3,0,50004, "Vyhodnocen� zpr�v od registr�tora �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, eurodns_domain_created,				14,3,0,50005, "Vytvo�en� dom�ny �sp�n� zad�no.") \
	MDESC(c, joker_resp, eurodns_get_balance_ok,				14,3,0,50006, "Z�sk�n� z�statku kreditu �sp�n�.") \
	MDESC(c, joker_resp, eurodns_domain_updated,				14,3,0,50007, "Zm�na �daj� dom�ny �sp�n� zad�na.") \
\
	MDESC(c, joker_resp, aoi_domain_renewed,					14,4,0,50001, "Prodlou�en� platnosti dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, aoi_domain_created,					14,4,0,50002, "Vytvo�en� dom�ny �sp�n� prob�hlo.") \
\
	MDESC(c, joker_resp, subreg_domain_created,					14,5,0,50001, "Vytvo�en� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, subreg_domain_renewed,					14,5,0,50002, "Prodlou�en� platnosti dom�ny �sp�n� zad�no.") \
	MDESC(c, joker_resp, subreg_poll_succeeded,					14,5,0,50003, "Vyhodnocen� zpr�v od registr�tora �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, subreg_get_balance_ok,					14,5,0,50004, "Z�sk�n� z�statku kreditu �sp�n�.") \
	MDESC(c, joker_resp, subreg_domain_checked,					14,5,0,50005, "Kontrola dostupnosti dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, subreg_domain_whois_succeeded,			14,5,0,50006, "Whois dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, subreg_contact_whois_succeeded,		14,5,0,50007, "Whois kontaktu �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, subreg_domain_update_send_succeeded,	14,5,0,50008, "Zmena udaju u dom�ny �sp�n� odeslana.") \
	MDESC(c, joker_resp, subreg_contact_created,				14,5,0,50009, "Vytvo�en� kontaktu �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, subreg_contact_updated,				14,5,0,50010, "Zmena udaju kontaktu �sp�n� prob�hla.") \
\
	MDESC(c, joker_resp, ro_domain_created,						14,6,0,50001, "Vytvo�en� dom�ny �sp�n� prob�hlo.") \
\
	MDESC(c, joker_resp, ru_domain_created,						14,7,0,50001, "Vytvo�en� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, ru_domain_renewed,						14,7,0,50002, "Prodlou�en� platnosti dom�ny �sp�n� zad�no.") \
	MDESC(c, joker_resp, ru_make_orders_succeeded,				14,7,0,50003, "Vyhodnocen� objednavek registr�tora �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, ru_get_balance_ok,						14,7,0,50004, "Z�sk�n� z�statku kreditu �sp�n�.") \
\
	MDESC(c, joker_resp, uk_domain_checked,						14,8,0,50001, "Kontrola dostupnosti dom�ny �sp�n� prob�hla.") \
	MDESC(c, joker_resp, uk_domain_whois_succeeded,				14,8,0,50002, "Whois dom�ny �sp�n� prob�hlo.") \
	MDESC(c, joker_resp, uk_contact_whois_succeeded,			14,8,0,50003, "Whois kontaktu �sp�n� prob�hlo.") \
\
	MDESC(c, symantec_resp, cert_created,						14,10,0,50001, "Registrace ssl certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, symantec_resp, domain_validated,					14,10,0,50002, "Validace dom�nov�ho jm�na �sp�n� prob�hla.") \
	MDESC(c, symantec_resp, cert_renewed,						14,10,0,50003, "Renewe ssl certifik�tu �sp�n� prob�hlo.") \

	
#define JOKER_CMSM_WHS(c) \
	GROUP_WHS(c, joker_module_mdesc, joker_cmsm, contact_whois)


#define JOKER_MDESC_TABLE(c) \
	JOKER_CMSM(c) \
	JOKER_RESP(c) \
	JOKER_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
JOKER_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_JOKER_MDESCS
