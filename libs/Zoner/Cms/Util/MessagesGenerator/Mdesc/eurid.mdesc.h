#ifndef MOD_EURID_MDESCS
#define MOD_EURID_MDESCS

#include "mdescs.h"

// eurid messages
#define EURID_CMSM(c) \
	MDESC2(c, eurid_cmsm, contact_check,						17,0,0,1, "Kontrola dostupnosti kontaktu.", "Kontrola dostupnosti kontaktu se nezda�ila.") \
	MDESC2(c, eurid_cmsm, contact_whois,						17,0,0,2, "Whois kontaktu.", "Whois kontaktu se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, contact_create,						17,0,0,3, "Vytvo�en� nov�ho kontaktu.", "Vytvo�en� nov�ho kontaktu se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, contact_update_by_admin,				17,0,0,4, "Zm�na �daj� kontaktu na z�klad� potvrzen� administr�tora.", "Zm�na �daj� kontaktu se nezda�ila.") \
	MDESC2(c, eurid_cmsm, contact_update_by_password,			17,0,0,5, "Zm�na �daj� kontaktu s pou�it�m hesla.", "Zm�na �daj� kontaktu se nezda�ila.") \
	MDESC2(c, eurid_cmsm, contact_delete_by_admin,				17,0,0,6, "Smaz�n� kontaktu na z�klad� potvrzen� administr�tora.", "Smaz�n� kontaktu se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, contact_delete_by_password,			17,0,0,7, "Smaz�n� kontaktu s pou�it�m hesla.", "Smaz�n� kontaktu se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, contact_send_password,				17,0,0,8, "P�eposl�n� hesla pro kontakt.", "P�eposl�n� hesla pro kontakt se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, contact_list_domains,					17,0,0,9, "Z�sk� seznam dom�nov�ch jmen, kde figuruje dan� kontakt.", "Z�sk�n� seznamu dom�nov�ch jmen, kde figuruje dan� kontakt se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, contact_list_by_email,				17,0,0,10, "Z�sk� seznam kontakt�, kter� maj� dan� email.", "Z�sk�n� seznamu kontakt�, kter� maj� dan� email se nezda�ilo.") \
\
	MDESC2(c, eurid_cmsm, domain_check,							17,0,1,1, "Kontrola dostupnosti dom�ny.", "Kontrola dostupnosti dom�ny se nezda�ila.") \
	MDESC2(c, eurid_cmsm, domain_whois,							17,0,1,2, "Whois dom�ny.", "Whois dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_create_order,					17,0,1,3, "Objedn�n� nov� dom�ny.", "Objedn�n� nov� dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_create_order_zoner_ns,			17,0,1,4, "Objedn�n� nov� dom�ny s nastaven�m Zoner nameserver�.", "Objedn�n� nov� dom�ny s nastaven�m Zoner nameserver� se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_update_by_admin,				17,0,1,5, "Zm�na �daj� dom�ny na z�klad� potvrzen� administr�tora.", "Zm�na �daj� dom�ny se nezda�ila.") \
	MDESC2(c, eurid_cmsm, domain_update_by_password,			17,0,1,6, "Zm�na �daj� dom�ny s pou�it�m hesla.", "Zm�na �daj� dom�ny se nezda�ila.") \
	MDESC2(c, eurid_cmsm, domain_trade_transfer_order,			17,0,1,7, "Objedn�n� p�eveden� dom�ny a/nebo zm�ny vlastn�ka dom�ny.", "Objedn�n� p�eveden� dom�ny a/nebo zm�ny vlastn�ka dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_trade_transfer_order_zoner_ns,	17,0,1,8, "Objedn�n� p�eveden� dom�ny a/nebo zm�ny vlastn�ka dom�ny s nastaven�m Zoner nameserver�.", "Objedn�n� p�eveden� dom�ny a/nebo zm�ny vlastn�ka dom�ny s nastaven�m Zoner nameserver� se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_check_state,					17,0,1,9, "Prov��� stav dom�ny.", "Prov��en� stavu dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_renew_order,					17,0,1,10, "Objedn�n� prodlou�en� platnosti dom�ny.", "Objedn�n� prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_update_keygroup_by_admin,		17,0,1,11, "Zm�na keygroup dom�ny na z�klad� potvrzen� administr�tora.", "Zm�na keygroup dom�ny se nezda�ila.") \
	MDESC2(c, eurid_cmsm, domain_transfer_reset,				17,0,1,12, "Zm�na auth-id a spu�t�n� akce s transferem dom�ny.", "Zm�na auth-id a spu�t�n� akce s transferem dom�ny se nezda�ila.") \
	MDESC2(c, eurid_cmsm, domain_get_authid,					17,0,1,13, "Z�sk�n� auth-id dom�ny.", "Z�sk�n� auth-id dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_trade_by_admin,				17,0,1,14, "Zm�na vlastn�ka dom�ny na z�klad� potvrzen� administr�tora.", "Zm�na vlastn�ka dom�ny na z�klad� potvrzen� administr�tora se nezda�ila.") \
	MDESC2(c, eurid_cmsm, domain_whois_eurid,					17,0,1,15, "Whois dom�ny z Euridu.", "Whois dom�ny z Euridu se nezda�il.") \
\
	MDESC2(c, eurid_cmsm, keygroup_whois,						17,0,2,1, "Whois keygroup.", "Whois keygroup se nezda�ila.") \
	MDESC2(c, eurid_cmsm, keygroup_create,						17,0,2,2, "Vytvo�en� keygroup.", "Vytvo�en� keygroup se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, keygroup_update_by_admin,				17,0,2,3, "Zm�na �daj� keygroup na z�klad� potvrzen� administr�tora.", "Zm�na �daj� keygroup se nezda�ila.") \
	MDESC2(c, eurid_cmsm, keygroup_delete_by_admin,				17,0,2,4, "Smaz�n� keygroup na z�klad� potvrzen� administr�tora.", "Smaz�n� keygroup se nezda�ilo.") \
\
	MDESC2(c, eurid_cmsm, domain_create_ccc,					17,1,1,1, "Vytvo�en� nov� dom�ny z �daj� v tabulce r_eurid_domain.", "Vytvo�en� nov� dom�ny z �daj� v tabulce r_eurid_domain se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_create_from_v1_ccc,			17,1,1,2, "Vytvo�en� nov� dom�ny z �daj� v tabulce eu_domain_v1.", "Vytvo�en� nov� dom�ny z �daj� v tabulce eu_domain_v1 se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_transfer_ccc,					17,1,1,3, "P�eveden� dom�ny podle �daj� v tabulce r_eurid_domain.", "P�eveden� dom�ny podle �daj� v tabulce r_eurid_domain se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_transfer_from_v1_ccc,			17,1,1,4, "P�eveden� dom�ny podle �daj� v tabulce eu_domain_v1.", "P�eveden� dom�ny podle �daj� v tabulce eu_domain_v1 se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_update_cache_ccc,				17,1,1,5, "Vlo�� nebo aktualizuje dom�nu v cache.", "Vlo�en� nebo aktualizace dom�ny v cache se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_delete_ccc,					17,1,1,6, "Smaz�n� dom�ny.", "Smaz�n� dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_undelete_ccc,					17,1,1,7, "Obnoven� dom�ny.", "Obnoven� dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_reactivate_ccc,				17,1,1,8, "Reaktivace dom�ny.", "Reaktivace dom�ny se nezda�ila.") \
	MDESC2(c, eurid_cmsm, registrar_info_credit,				17,1,1,9, "Z�sk� pen�n� z�statek u EURidu.", "Z�sk�n� pen�n�ho z�statku u EURidu se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, domain_renew_ccc,						17,1,1,10, "Prodlou�en� platnosti dom�ny.", "Prodlou�en� platnosti dom�ny se nezda�ilo.") \
	MDESC2(c, eurid_cmsm, make_poll_ccc,						17,1,1,11, "Vyhodnocen� zpr�v od registr�tora.", "Vyhodnocen� zpr�v od registr�tora se nezda�ilo.") \
\
	MDESC2(c, eurid_cmsm, contact_update_cache_ccc,				17,1,2,1, "Vlo�� nebo aktualizuje kontakt v cache.", "Vlo�en� nebo aktualizace kontaktu v cache se nezda�ilo.") \

#define EURID_RESP(c) \
	MDESC(c, eurid_resp, unknown_message,						17,0,0,30001, "Byla zasl�na nezn�m� zpr�va.") \
	MDESC(c, eurid_resp, access_denied,							17,0,0,30002, "Nem�te dostate�n� opr�vn�n�.") \
	MDESC(c, eurid_resp, exception_occured,						17,0,0,30003, "Nastala vyj�mka.") \
	MDESC(c, eurid_resp, unknown_error,							17,0,0,30004, "Nastala nezn�m� chyba.") \
	MDESC(c, eurid_resp, syntax_error,							17,0,0,30005, "Nastala syntaktick� chyba, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, eurid_resp, runtime_error,							17,0,0,30006, "Nastala runtime chyba, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, eurid_resp, sql_error,								17,0,0,30007, "Nastala chyba datab�ze, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, eurid_resp, eurid_error,							17,0,0,30008, "Nastala chyba EURidu, podrobnosti naleznete ve v�stupn�ch parametrech.") \
	MDESC(c, eurid_resp, eurid_exception_error,					17,0,0,30009, "Nastala vyj�mka na EURidu, podrobnosti naleznete ve v�stupn�ch parametrech.") \
\
	MDESC(c, eurid_resp, contact_checked,						17,0,0,50001, "Kontrola dostupnosti kontaktu �sp�n� prob�hla.") \
	MDESC(c, eurid_resp, contact_whois_succeeded,				17,0,0,50002, "Whois kontaktu �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, contact_created,						17,0,0,50003, "Vytvo�en� nov�ho kontaktu �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, contact_updated,						17,0,0,50004, "Zm�na �daj� kontaktu �sp�n� prob�hla.") \
	MDESC(c, eurid_resp, contact_deleted,						17,0,0,50005, "Smaz�n� kontaktu �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, contact_password_sent,					17,0,0,50006, "P�eposl�n� hesla pro kontakt �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, contact_domains_listed,				17,0,0,50007, "Z�sk�n� seznamu dom�nov�ch jmen, kde figuruje dan� kontakt �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, contact_by_email_listed,				17,0,0,50008, "Z�sk�n� seznamu kontakt�, kter� maj� dan� email �sp�n� prob�hlo.") \
\
	MDESC(c, eurid_resp, domain_checked,						17,0,1,50001, "Kontrola dostupnosti dom�ny �sp�n� prob�hla.") \
	MDESC(c, eurid_resp, domain_whois_succeeded,				17,0,1,50002, "Whois dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_order_created,					17,0,1,50003, "Objedn�n� nov� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_updated,						17,0,1,50004, "Zm�na �daj� dom�ny �sp�n� prob�hla.") \
	MDESC(c, eurid_resp, domain_trade_transfer_order_created,	17,0,1,50005, "Objedn�n� p�eveden� dom�ny a/nebo zm�ny vlastn�ka dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_state_checked,					17,0,1,50006, "Prov��en� stavu dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_renewed,						17,0,1,50007, "Prodlou�en� platnosti dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_transfer_reset_ok,				17,0,1,50008, "Zm�na auth-id a spu�t�n� akce s transferem dom�ny �sp�n� prob�hla.") \
	MDESC(c, eurid_resp, domain_authid_got,						17,0,1,50009, "Z�sk�n� auth-id dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_trade_ok,						17,0,1,50010, "Zm�na vlastn�ka dom�ny �sp�n� prob�hla.") \
\
	MDESC(c, eurid_resp, keygroup_whois_succeeded,				17,0,2,50001, "Whois keygroup �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, keygroup_created,						17,0,2,50002, "Vytvo�en� keygroup �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, keygroup_updated,						17,0,2,50003, "Zm�na �daj� keygroup �sp�n� prob�hla.") \
	MDESC(c, eurid_resp, keygroup_deleted,						17,0,2,50004, "Smaz�n� keygroup �sp�n� prob�hlo.") \
\
	MDESC(c, eurid_resp, domain_created,						17,1,1,50001, "Vytvo�en� nov� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_transfered,						17,1,1,50002, "P�evod dom�ny �sp�n� prob�hl.") \
	MDESC(c, eurid_resp, domain_cache_updated,					17,1,1,50003, "Vlo�en� nebo aktualizace dom�ny v cache �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_deleted,						17,1,1,50004, "Smaz�n� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_undeleted,						17,1,1,50005, "Obnoven� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, domain_reactivated,					17,1,1,50006, "Reaktivace dom�ny �sp�n� prob�hla.") \
	MDESC(c, eurid_resp, registrar_info_credit_ok,				17,1,1,50007, "Z�sk�n� pen�n�ho z�statku u EURidu �sp�n� prob�hlo.") \
	MDESC(c, eurid_resp, make_poll_succeeded,					17,1,1,50008, "Vyhodnocen� zpr�v od registr�tora �sp�n� prob�hlo.") \
\
	MDESC(c, eurid_resp, contact_cache_updated,					17,1,2,50001, "Vlo�en� nebo aktualizace kontaktu v cache �sp�n� prob�hlo.") \

	
#define EURID_CMSM_WHS(c) \
	GROUP_WHS(c, eurid_module_mdesc, eurid_cmsm, contact_whois)


#define EURID_MDESC_TABLE(c) \
	EURID_CMSM(c) \
	EURID_RESP(c) \
	EURID_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
EURID_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_EURID_MDESCS
