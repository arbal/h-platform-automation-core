#ifndef MOD_CADMIN_MDESCS
#define MOD_CADMIN_MDESCS

#include "mdescs.h"

// cadmin messages
#define CADMIN_CMSM(c) \
	MDESC2(c, cadmin_cmsm, user_authenticate,											9,0,0,1, "Autentizace u�ivatele.", "Autentizace u�ivatele se nezda�ila.") \
\
	MDESC2(c, cadmin_cmsm, service_stop,												9,0,1,1, "Zastaven� slu�by.", "Zastaven� slu�by se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_start,												9,0,1,2, "Spu�t�n� slu�by.", "Spu�t�n� slu�by se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_delete,												9,0,1,3, "Smaz�n� slu�by.", "Smaz�n� slu�by se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_mailserver_create_ccc,								9,0,1,4, "Vytvo�en� po�tovn�ho serveru pro danou slu�bu.", "Vytvo�en� po�tovn�ho serveru pro danou slu�bu se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_mailserver_delete_ccc,								9,0,1,5, "Zru�en� po�tovn�ho serveru pro danou slu�bu.", "Zru�en� po�tovn�ho serveru pro danou slu�bu se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_bonus_create_ccc,									9,0,1,6, "Vytvo�en� bonusu pro novou slu�bu.", "Vytvo�en� bonusu pro novou slu�bu se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_advertcamp_change_ccc,								9,0,1,7, "Zm�na advertcamp pro danou slu�bu.", "Zm�na advertcamp pro danou slu�bu se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, service_bonus_transfer_ccc,									9,0,1,8, "P�eveden� bonusu pro novou slu�bu.", "P�eveden� bonusu pro novou slu�bu se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_name_duplicity_check_ccc,							9,0,1,9, "Kontrola duplicity dom�nov�ho jm�na pro slu�bu.", "Kontrola dostupnosti dom�nov�ho jm�na pro slu�bu se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, service_cert_add_ccc,										9,0,1,10, "Vlo�en� ��dosti o certifik�t k dom�nov�mu jm�nu.", "Vlo�en� ��dosti o certifik�t k dom�nov�mu jm�nu se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_idcamp_change_ccc,									9,0,1,11, "Zm�na IDCamp pro danou slu�bu.", "Zm�na IDCamp pro danou slu�bu se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, service_miniweb_mailserver_create_ccc,						9,0,1,12, "Vytvo�en� po�ty pro miniweb pro danou slu�bu.", "Vytvo�en� po�ty pro miniweb pro danou slu�bu se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, customer_create,												9,1,0,1, "Vytvo�en� nov�ho z�kazn�ka.", "Vytvo�en� nov�ho z�kazn�ka se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, customer_change_password,									9,1,0,2, "Zm�na p�ihla�ovac� hesla z�kazn�ka.", "Zm�na p�ihla�ovac� hesla z�kazn�ka se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, customer_get_data,											9,1,0,3, "Na�ten� �daj� z�kazn�ka.", "Na�ten� �daj� z�kazn�ka se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, customer_get_used_servers,									9,1,0,4, "Z�sk� seznam server� pou��van�ch dan�m z�kazn�kem.", "Z�sk�n� seznamu server� pou��van�ch dan�m z�kazn�kem se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, customer_get_other_customer_data,							9,1,0,5, "Na�ten� �daj� ur�it�ho z�kazn�ka.", "Na�ten� �daj� ur�it�ho z�kazn�ka se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, customer_send_unsubscribe_mail_ccc,							9,1,0,6, "Roze�le emaily pro odhl�en� z�kazn�ka z odb�ru novinek.", "Rozesl�n� email� pro odhl�en� z�kazn�ka z odb�ru novinek se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, customer_unsubscribe_ccc,									9,1,0,7, "Odhl�en� z�kazn�ka z odb�ru novinek.", "Odhl�en� z�kazn�ka z odb�ru novinek se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, customer_activate_credit_system,								9,1,0,8, "P�epnut� z�kazn�ka na kreditn� syst�m.", "P�epnut� z�kazn�ka na kreditn� syst�m se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, customer_get_gogo_servers,									9,1,0,9, "Z�sk� seznam server� GOGO pou��van�ch dan�m z�kazn�kem.", "Z�sk�n� seznamu server� GOGO pou��van�ch dan�m z�kazn�kem se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, service_foto24_upgrade,										9,1,1,1, "P�evod slu�by na variantu Foto24 XXL a prodlou�en� bezplatn�ho provozu.", "P�evod slu�by na variantu Foto24 XXL a prodlou�en� bezplatn�ho provozu se nezda�il.") \
	MDESC2(c, cadmin_cmsm, service_main_account_change_password,						9,1,1,2, "Zm�na hesla hlavn�ho FTP ��tu slu�by.", "Zm�na hesla hlavn�ho FTP ��tu slu�by se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, service_hosting_able_check,									9,1,1,3, "Ov��� zda lze slu�bu zprovoznit.", "Ov��en� zda lze slu�bu zprovoznit se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, service_order_on_parent_domain,								9,1,1,4, "Vlo�� objedn�vku slu�by na pronajmut� dom�n�.", "Vlo�en� objedn�vky slu�by na pronajmut� dom�n� se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_order_new_domain,									9,1,1,5, "Vlo�� objedn�vku slu�by na nov� dom�n�.", "Vlo�en� objedn�vky slu�by na nov� dom�n� se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_inshop4_demo_upgrade,								9,1,1,6, "P�evod slu�by na variantu inShop4 Profi T.", "P�evod slu�by na variantu inShop4 Profi T se nezda�il.") \
	MDESC2(c, cadmin_cmsm, service_safeguard,											9,1,1,7, "Zabezpe�� slu�bu zamknut�m a zm�nou ftp hesla.", "Zabezpe�en� slu�by zamknut�m a zm�nou ftp hesla se nezda�il.") \
	MDESC2(c, cadmin_cmsm, service_access,												9,1,1,8, "Zjist� zda se slu�ba nach�z� na dan�m ��tu.", "Zji�t�n� zda se slu�ba nach�z� na dan�m ��tu se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, service_inpage_mini_upgrade,									9,1,1,9, "Pov��en� slu�by ve variant� inPage Mini.", "Pov��en� slu�by ve variant� inPage Mini se nezda�il.") \
	MDESC2(c, cadmin_cmsm, service_db_change_limits,									9,1,1,10, "Zm�na limit� sql datab�ze.", "Zm�na limit� sql datab�ze se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, service_inpage_upgrade,										9,1,1,11, "Pov��en� placen� slu�by inPage.", "Pov��en� placen� slu�by inPage se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, coupon_code_check,											9,1,2,1, "Ov��� platnost kup�nu.", "Ov��en� platnosti kup�nu se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, coupon_order,												9,1,2,2, "Vlo�en� kup�nov� objedn�vky.", "Vlo�en� kup�nov� objedn�vky se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_domains_not_done,						9,1,3,1, "Z�sk� seznam dosud nevy��zen�ch cizorod�ch dom�n.", "Z�sk�n� seznamu dosud nevy��zen�ch cizorod�ch dom�n se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_new_exp_date,							9,1,3,2, "Nastaven� nov�ho datumu expirace cizorod� dom�ny.", "Nastaven� nov�ho datumu expirace cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_data,									9,1,3,3, "Na�ten� �daj� o cizorod� dom�n�.", "Na�ten� �daj� o cizorod� dom�n� se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_registration_data,						9,1,3,4, "Na�ten� �daj� pro registraci cizorod� dom�ny.", "Na�ten� �daj� pro registraci cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_state,									9,1,3,5, "Nastaven� stavu zpracov�n� cizorod� dom�ny.", "Nastaven� stavu zpracov�n� cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_remove,									9,1,3,6, "Zru�en� cizorod� dom�ny.", "Zru�en� cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_msg_text,								9,1,3,7, "Na�ten� zpr�vy s pokyny pro registraci cizorod� dom�ny.", "Na�ten� zpr�vy s pokyny pro registraci cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_note,									9,1,3,8, "Nastaven� pozn�mky cizorod� dom�ny.", "Nastaven� pozn�mky cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_change_registrar_notice,					9,1,3,9, "Ozn�men� o zm�n� registr�tora.", "Ozn�men� o zm�n� registr�tora se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_restart_transfer,							9,1,3,10, "Znovuspu�t�n� transferu dom�ny.", "Znovuspu�t�n� transferu dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_update_dns,								9,1,3,11, "Zmeni DNS dom�ny v DB.", "Zmena DNS domeny se nezdarila.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_msg_text,								9,1,3,12, "Update zpr�vy s pokyny pro registraci cizorod� dom�ny.", "Update zpr�vy s pokyny pro registraci cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_get_msg_texts,								9,1,3,13, "Na�ten� v�ech zpr�v s pokyny pro registraci cizorod� dom�ny.", "Na�ten� zpr�v s pokyny pro registraci cizorod� dom�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, extraneous_domain_set_order_id,								9,1,3,14, "Nastaven� orderID cizorod� dom�ny.", "Nastaven� orderID cizorod� dom�ny se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, server_delete,												9,1,4,1, "Smaz�n� serveru.", "Smaz�n� serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_housing_create,										9,1,4,2, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_linux_create,									9,1,4,3, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_win_create,									9,1,4,4, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_win2008_create,								9,1,4,5, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_linux_create,								9,1,4,6, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_win_create,								9,1,4,7, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_win2008_create,							9,1,4,8, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_inshop3_create,							9,1,4,9, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_webhosting_inshop4_create,							9,1,4,10, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, server_hosting_win2012_create,								9,1,4,11, "Vytvo�en� nov�ho serveru.", "Vytvo�en� nov�ho serveru se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, dns_make_zone,												9,1,5,1, "Vytvo�en� z�ny v dns.", "Vytvo�en� z�ny v dns se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_delete_zone,												9,1,5,2, "Smaz�n� z�ny z dns.", "Smaz�n� z�ny z dns se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_add_a_record,											9,1,5,3, "P�id�n� A z�znamu do z�ny.", "P�id�n� A z�znamu do z�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_del_a_record,											9,1,5,4, "Smaz�n� A z�znamu ze z�ny.", "Smaz�n� A z�znamu ze z�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_add_cname_record,										9,1,5,5, "P�id�n� CNAME z�znamu do z�ny.", "P�id�n� CNAME z�znamu do z�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_del_cname_record,										9,1,5,6, "Smaz�n� CNAME z�znamu ze z�ny.", "Smaz�n� CNAME z�znamu ze z�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_sign_zone,												9,1,5,7, "Podeps�n� z�ny.", "Podeps�n� z�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_unsign_zone,												9,1,5,8, "Zru�en� podpisu z�ny.", "Zru�en� podpisu z�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_add_txt_record,											9,1,5,9, "P�id�n� TXT z�znamu do z�ny.", "P�id�n� TXT z�znamu do z�ny se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, domains_get_info,											9,1,6,1, "Z�sk� informace o dom�nov�m jm�nu z centra.", "Z�sk�n� informace o dom�nov�m jm�nu z centra se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, domains_list_with_zoner_registrator,							9,1,6,2, "Z�sk� seznam dom�nov�ch jmen z centra, u nich� je Zoner registr�torem.", "Z�sk�n� seznamu dom�nov�ch jmen z centra, u nich� je Zoner registr�torem se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, domains_convert_punycode,									9,1,6,3, "P�elo�� dom�nov� jm�no z punycode.", "P�eklad dom�nov�ho jm�na z punycode se nezda�il.") \
\
	MDESC2(c, cadmin_cmsm, domains_change_ns_ccc,										9,0,6,1, "Prom�tne zm�nu nameserver� u dom�ny do centra.", "Prom�tnut� zm�ny nameserver� u dom�ny do centra se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, domains_sk_cert_new_owner_ccc,								9,0,6,2, "Nastav� nov�ho vlastn�ka .sk dom�ny pro certifik�t.", "Nastaven� nov�ho vlastn�ka .sk dom�ny pro certifik�t se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, dns_manager_get_zone_ccc,									9,0,7,1, "P�e�ten� z�ny z datab�ze.", "P�e�ten� z�ny z datab�ze se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, dns_manager_get_zone,										9,1,7,1, "P�e�ten� z�ny z datab�ze.", "P�e�ten� z�ny z datab�ze se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_update_zone,										9,1,7,2, "�prava z�ny v datab�zi.", "�prava z�ny v datab�zi se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, dns_manager_list_ip_ranges,									9,1,7,3, "Z�sk� seznam ip rozsah� spravovan�ch dns.", "Z�sk�n� seznamu ip rozsah� spravovan�ch dns se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_list_ip_addresses,								9,1,7,4, "Z�sk� seznam ip adres pro dan� ip rozsah.", "Z�sk�n� seznamu ip adres pro dan� ip rozsah se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_get_ip_address,									9,1,7,5, "Z�sk� ip adresu.", "Z�sk�n� ip adresy se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_update_ip_address,								9,1,7,6, "Ulo�� zm�ny pro danou ip adresu do datab�ze.", "Ulo�en� zm�n pro danou ip adresu do datab�ze se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_generate_ip_range,								9,1,7,7, "Vygeneruje dan� ip rozsah do dns.", "Vygenerov�n� dan�ho ip rozsahu do dns se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_dig,												9,1,7,8, "P�e�te z�nu p��mo z dns serveru.", "P�e�ten� z�ny p��mo z dns serveru se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, dns_manager_dig_ns,											9,1,7,9, "P�e�te a vyhodnoti typ ns zaznamu p��mo z dns.", "P�e�ten� z�ny se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, invoice_make_payment,										9,1,8,1, "Zaplacen� v�zvy k �hrad�.", "Zaplacen� v�zvy k �hrad� se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, get_request_for_payment,										9,1,8,2, "Z�sk� v�zvu k �hrad�.", "Z�sk�n� v�zvy k �hrad� se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, coupon_campaign_create_ccc,									9,1,9,1, "Vytvo�en� nov� kampan� pro kup�ny.", "Vytvo�en� nov� kampan� pro kup�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_update_ccc,									9,1,9,2, "�prava kampan� pro kup�ny.", "�prava kampan� pro kup�ny se nezda�ila.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_delete_ccc,									9,1,9,3, "Zru�en� kampan� pro kup�ny.", "Zru�en� kampan� pro kup�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_get_ccc,										9,1,9,4, "Z�sk� podrobnosti o kampani pro kup�ny.", "Z�sk�n� podrobnost� o kampani pro kup�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, coupon_campaign_list_ccc,									9,1,9,5, "Z�sk� seznam kampan� pro kup�ny.", "Z�sk�n� seznamu kampan� pro kup�ny se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, coupon_code_create_ccc,										9,1,9,6, "P�id� nov� kup�n do kampan�.", "P�id�n� nov�ho kup�nu do kampan� se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, coupon_code_list_ccc,										9,1,9,7, "Z�sk� seznam kup�n� kampan�.", "Z�sk�n� seznamu kup�n� kampan� se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, template_message_get_ccc,									9,1,10,1, "Z�sk� �ablonu zpr�vy a napln� ji dodan�mi �daji.", "Z�sk�n� �ablony zpr�vy a jej� napln�n� dodan�mi �daji se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, action_set_finish_ccc,										9,1,11,1, "Ukon�� akci v centru administrace.", "Ukon�en� akce v centru administrace se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, registry_update_ccc,											9,1,11,2, "Zaps�n� hodnoty do registru.", "Zaps�n� hodnoty se nezda�ilo.") \
	MDESC2(c, cadmin_cmsm, action_set_restart_ccc,										9,1,11,3, "Znovu spust� akci v centru administrace.", "Znovu spu�t�n� akce v centru administrace se nezda�ilo.") \
\
	MDESC2(c, cadmin_cmsm, send_customer_expdom_report,									9,2,1,1, "Ode�le z�kazn�kovi p�ehled o expiruj�c�ch dom�n�ch.", "P�ehled o expiruj�c�ch dom�n�ch se nezda�ilo odeslat.") \
	MDESC2(c, cadmin_cmsm, bulk_send_expdom_report,										9,2,1,2, "Ode�le v�em odeb�raj�c�m z�kazn�k�m p�ehled o expiruj�c�ch dom�n�ch.", "P�ehled o expiruj�c�ch dom�n�ch se nezda�ilo v�em odeb�raj�c�m z�kazn�k�m odeslat.") \
	MDESC2(c, cadmin_cmsm, send_appeal_mail_invoice_pdf,								9,2,1,3, "Ode�le mail upominky pro neplaceni s pdf vyzvou.", "Odeslani mailu upominky se nezdarilo.") \
	
#define CADMIN_RESP(c) \
	MDESC(c, cadmin_resp, unknown_error,												9,0,0,30001, "Nastala nezn�m� chyba.") \
	MDESC(c, cadmin_resp, unknown_message,												9,0,0,30002, "Byla zasl�na nezn�m� zpr�va.") \
	MDESC(c, cadmin_resp, bad_credentials,												9,0,0,30003, "�patn� p�ihla�ovac� �daje.") \
	MDESC(c, cadmin_resp, access_denied,												9,0,0,30004, "Nem�te dostate�n� opr�vn�n�.") \
	MDESC(c, cadmin_resp, adding_ccc_actions_failed,									9,0,0,30005, "Nepoda�ilo se vlo�it akce CCC.") \
	MDESC(c, cadmin_resp, stopping_service_failed,										9,0,0,30006, "Zastaven� slu�by se nezda�ilo.") \
	MDESC(c, cadmin_resp, service_not_found,											9,0,0,30007, "Slu�ba nenalezena.") \
	MDESC(c, cadmin_resp, service_starting_stopping_not_supported,						9,0,0,30008, "Spou�t�n� a zastavov�n� slu�by nen� podporov�no.") \
	MDESC(c, cadmin_resp, service_starting_not_supported,								9,0,0,30009, "Spou�t�n� slu�by nen� podporov�no.") \
	MDESC(c, cadmin_resp, starting_service_failed,										9,0,0,30010, "Spu�t�n� slu�by se nezda�ilo.") \
	MDESC(c, cadmin_resp, service_already_deleted,										9,0,0,30011, "Slu�ba je smazan�.") \
	MDESC(c, cadmin_resp, deleting_service_failed,										9,0,0,30012, "Smaz�n� slu�by se nezda�ilo.") \
	MDESC(c, cadmin_resp, sql_error,													9,0,0,30013, "Nastala SQL chyba.") \
	MDESC(c, cadmin_resp, remote_addr_forbidden,										9,0,0,30014, "P��stup ze zak�zan� adresy.") \
	MDESC(c, cadmin_resp, exception_occured,											9,0,0,30015, "Nastala vyj�mka.") \
	MDESC(c, cadmin_resp, service_has_not_any_dns_records,								9,0,0,30016, "Slu�ba nem� ��dn� dns z�znamy.") \
	MDESC(c, cadmin_resp, insert_dns_a_records_failed,									9,0,0,30017, "Nepoda�ilo se p�idat dns A z�znamy.") \
	MDESC(c, cadmin_resp, delete_dns_a_records_failed,									9,0,0,30018, "Nepoda�ilo se smazat dns A z�znamy.") \
	MDESC(c, cadmin_resp, dns_a_records_not_defined,									9,0,0,30019, "Dns A z�znamy nejsou definov�ny.") \
	MDESC(c, cadmin_resp, dns_a_records_not_valid,										9,0,0,30020, "Dns A z�znamy nejsou platn�.") \
	MDESC(c, cadmin_resp, dns_a_records_not_available,									9,0,0,30021, "Dns A z�znamy nejsou voln�.") \
	MDESC(c, cadmin_resp, dns_a_records_already_exist,									9,0,0,30022, "Dns A z�znamy ji� existuj�.") \
	MDESC(c, cadmin_resp, insert_dns_cname_records_failed,								9,0,0,30023, "Nepoda�ilo se p�idat dns CNAME z�znamy.") \
	MDESC(c, cadmin_resp, delete_dns_cname_records_failed,								9,0,0,30024, "Nepoda�ilo se smazat dns CNAME z�znamy.") \
	MDESC(c, cadmin_resp, dns_cname_records_not_defined,								9,0,0,30025, "Dns CNAME z�znamy nejsou definov�ny.") \
	MDESC(c, cadmin_resp, dns_cname_records_not_valid,									9,0,0,30026, "Dns CNAME z�znamy nejsou platn�.") \
	MDESC(c, cadmin_resp, dns_cname_records_not_available,								9,0,0,30027, "Dns CNAME z�znamy nejsou voln�.") \
	MDESC(c, cadmin_resp, dns_cname_records_already_exist,								9,0,0,30028, "Dns CNAME z�znamy ji� existuj�.") \
	MDESC(c, cadmin_resp, dns_duplicite_records_found,									9,0,0,30029, "Byly nalezeny duplicitn� z�znamy v dns.") \
	MDESC(c, cadmin_resp, insert_dns_mx_records_failed,									9,0,0,30030, "Nepoda�ilo se p�idat dns MX z�znamy.") \
	MDESC(c, cadmin_resp, delete_dns_mx_records_failed,									9,0,0,30031, "Nepoda�ilo se smazat dns MX z�znamy.") \
	MDESC(c, cadmin_resp, dns_mx_records_not_defined,									9,0,0,30032, "Dns MX z�znamy nejsou definov�ny.") \
	MDESC(c, cadmin_resp, dns_mx_records_not_valid,										9,0,0,30033, "Dns MX z�znamy nejsou platn�.") \
	MDESC(c, cadmin_resp, dns_mx_records_not_available,									9,0,0,30034, "Dns MX z�znamy nejsou voln�.") \
	MDESC(c, cadmin_resp, dns_mx_records_already_exist,									9,0,0,30035, "Dns MX z�znamy ji� existuj�.") \
	MDESC(c, cadmin_resp, insert_dns_txt_records_failed,								9,0,0,30036, "Nepoda�ilo se p�idat dns TXT z�znamy.") \
	MDESC(c, cadmin_resp, delete_dns_txt_records_failed,								9,0,0,30037, "Nepoda�ilo se smazat dns TXT z�znamy.") \
	MDESC(c, cadmin_resp, dns_txt_records_not_defined,									9,0,0,30038, "Dns TXT z�znamy nejsou definov�ny.") \
	MDESC(c, cadmin_resp, dns_txt_records_not_valid,									9,0,0,30039, "Dns TXT z�znamy nejsou platn�.") \
	MDESC(c, cadmin_resp, dns_txt_records_not_available,								9,0,0,30040, "Dns TXT z�znamy nejsou voln�.") \
	MDESC(c, cadmin_resp, dns_txt_records_already_exist,								9,0,0,30041, "Dns TXT z�znamy ji� existuj�.") \
	MDESC(c, cadmin_resp, insert_dns_srv_records_failed,								9,0,0,30042, "Nepoda�ilo se p�idat dns SRV z�znamy.") \
	MDESC(c, cadmin_resp, delete_dns_srv_records_failed,								9,0,0,30043, "Nepoda�ilo se smazat dns SRV z�znamy.") \
	MDESC(c, cadmin_resp, dns_srv_records_not_defined,									9,0,0,30044, "Dns SRV z�znamy nejsou definov�ny.") \
	MDESC(c, cadmin_resp, dns_srv_records_not_valid,									9,0,0,30045, "Dns SRV z�znamy nejsou platn�.") \
	MDESC(c, cadmin_resp, dns_srv_records_not_available,								9,0,0,30046, "Dns SRV z�znamy nejsou voln�.") \
	MDESC(c, cadmin_resp, dns_srv_records_already_exist,								9,0,0,30047, "Dns SRV z�znamy ji� existuj�.") \
	MDESC(c, cadmin_resp, service_no_mailserver_found,									9,0,0,30048, "Slu�ba m� nem� n� mailserver.") \
	MDESC(c, cadmin_resp, server_not_imap_server,										9,0,0,30049, "Server nen� IMAP server.") \
	MDESC(c, cadmin_resp, service_mailserver_already_exist,								9,0,0,30050, "Slu�ba m� ji� mailserver nastaven.") \
	MDESC(c, cadmin_resp, service_mailserver_not_available,								9,0,0,30051, "Slu�ba v dan� variant� nem��e m�t n� mailserver.") \
	MDESC(c, cadmin_resp, mail_quota_not_defined,										9,0,0,30052, "Dan� varianta nem� nastavenou po�tovn� kv�tu.") \
	MDESC(c, cadmin_resp, no_bonus_found,												9,0,0,30053, "Dan� bonus nebyl nalezen.") \
	MDESC(c, cadmin_resp, variant_not_valid,											9,0,0,30054, "K�d varianty nen� platn�.") \
	MDESC(c, cadmin_resp, service_name_not_valid,										9,0,0,30055, "N�zev slu�by nen� platn�.") \
	MDESC(c, cadmin_resp, invoicing_not_valid,											9,0,0,30056, "Faktura�n� term�ny nejsou platn�.") \
	MDESC(c, cadmin_resp, payment_period_not_defined,									9,0,0,30057, "Faktura�n� obdob� nen� definov�no.") \
	MDESC(c, cadmin_resp, payment_period_not_valid,										9,0,0,30058, "Faktura�n� obdob� nen� platn�.") \
	MDESC(c, cadmin_resp, due_from_not_defined,											9,0,0,30059, "Datum zah�jen� fakturace nen� definov�no.") \
	MDESC(c, cadmin_resp, service_ftp_locking_not_supported,							9,0,0,30060, "Zamyk�n� FTP nen� podporov�no.") \
	MDESC(c, cadmin_resp, cannot_perform,												9,0,0,30061, "Nelze prov�st.") \
	MDESC(c, cadmin_resp, mailbox_user_not_defined,										9,0,0,30062, "N�zev po�tovn� schr�nky nen� definov�n.") \
	MDESC(c, cadmin_resp, mailbox_password_not_defined,									9,0,0,30063, "Heslo po�tovn� schr�nky nen� definov�no.") \
	MDESC(c, cadmin_resp, hash_not_valid,												9,0,0,30064, "Hash nen� platn�.") \
	MDESC(c, cadmin_resp, dns_cms_error,												9,0,0,30065, "Nastala chyba p�i vol�n� CMS pro DNS.") \
	MDESC(c, cadmin_resp, insert_dns_aaaa_records_failed,								9,0,0,30066, "Nepoda�ilo se p�idat dns AAAA z�znamy.") \
	MDESC(c, cadmin_resp, delete_dns_aaaa_records_failed,								9,0,0,30067, "Nepoda�ilo se smazat dns AAAA z�znamy.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_not_defined,									9,0,0,30068, "Dns AAAA z�znamy nejsou definov�ny.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_not_valid,									9,0,0,30069, "Dns AAAA z�znamy nejsou platn�.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_not_available,								9,0,0,30070, "Dns AAAA z�znamy nejsou voln�.") \
	MDESC(c, cadmin_resp, dns_aaaa_records_already_exist,								9,0,0,30071, "Dns AAAA z�znamy ji� existuj�.") \
\
	MDESC(c, cadmin_resp, customer_data_company_name_not_defined,						9,1,0,30002, "�daj pro n�zev spole�nosti z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_company_name_too_long,							9,1,0,30003, "�daj pro n�zev spole�nosti z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_company_name_not_token,							9,1,0,30004, "�daj pro n�zev spole�nosti z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_street_not_defined,								9,1,0,30005, "�daj pro ulici z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_street_too_long,								9,1,0,30006, "�daj pro ulici z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_street_not_token,								9,1,0,30007, "�daj pro ulici z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_city_not_defined,								9,1,0,30008, "�daj pro m�sto z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_city_too_long,									9,1,0,30009, "�daj pro m�sto z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_city_not_token,									9,1,0,30010, "�daj pro m�sto z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_zip_not_defined,								9,1,0,30011, "�daj pro PS� z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_zip_too_long,									9,1,0,30012, "�daj pro PS� z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_zip_not_token,									9,1,0,30013, "�daj pro PS� z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_country_not_defined,							9,1,0,30014, "�daj pro st�t z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_country_not_valid,								9,1,0,30015, "�daj pro st�t z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_ico_too_long,									9,1,0,30016, "�daj pro I� z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_ico_not_valid,									9,1,0,30017, "�daj pro I� z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_dic_too_long,									9,1,0,30018, "�daj pro DI� z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_dic_not_valid,									9,1,0,30019, "�daj pro DI� z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_bank_too_long,									9,1,0,30020, "�daj pro banku z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_tel_not_defined,								9,1,0,30021, "�daj pro telefon z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_tel_too_long,									9,1,0,30022, "�daj pro telefon z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_tel_not_valid,									9,1,0,30023, "�daj pro telefon z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_fax_too_long,									9,1,0,30024, "�daj pro fax z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_fax_not_valid,									9,1,0,30025, "�daj pro fax z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_email_not_defined,								9,1,0,30026, "�daj pro email z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_email_too_long,									9,1,0,30027, "�daj pro email z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_email_not_valid,								9,1,0,30028, "�daj pro email z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_email2_too_long,								9,1,0,30029, "�daj pro email2 z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_email2_not_valid,								9,1,0,30030, "�daj pro email2 z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_email_einvoice_too_long,						9,1,0,30031, "�daj pro email el. faktury z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_email_einvoice_not_valid,						9,1,0,30032, "�daj pro email el. faktury z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_chief_title_too_long,							9,1,0,30033, "�daj pro titul osoby jednatele z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_chief_title_not_token,							9,1,0,30034, "�daj pro titul osoby jednatele z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_chief_first_name_not_defined,					9,1,0,30035, "�daj pro jm�no osoby jednatele z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_chief_first_name_too_long,						9,1,0,30036, "�daj pro jm�no osoby jednatele z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_chief_first_name_not_token,						9,1,0,30037, "�daj pro jm�no osoby jednatele z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_chief_last_name_not_defined,					9,1,0,30038, "�daj pro p��jmen� osoby jednatele z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_data_chief_last_name_too_long,						9,1,0,30039, "�daj pro p��jmen� osoby jednatele z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_chief_last_name_not_token,						9,1,0,30040, "�daj pro p��jmen� osoby jednatele z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_technician_title_too_long,						9,1,0,30041, "�daj pro titul osoby technika z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_technician_title_not_token,						9,1,0,30042, "�daj pro titul osoby technika z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_technician_first_name_too_long,					9,1,0,30043, "�daj pro jm�no osoby technika z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_technician_first_name_not_token,				9,1,0,30044, "�daj pro jm�no osoby technika z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_technician_last_name_too_long,					9,1,0,30045, "�daj pro p��jmen� osoby technika z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_technician_last_name_not_token,					9,1,0,30046, "�daj pro p��jmen� osoby technika z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_chief_name_too_long,						9,1,0,30047, "�daj pro cel� jm�no osoby po�tovn�ho kontaktu z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_post_chief_name_not_token,						9,1,0,30048, "�daj pro cel� jm�no osoby po�tovn�ho kontaktu z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_company_name_too_long,						9,1,0,30049, "�daj pro n�zev spole�nosti po�tovn�ho kontaktu z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_post_company_name_not_token,					9,1,0,30050, "�daj pro n�zev spole�nosti po�tovn�ho kontaktu z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_street_too_long,							9,1,0,30051, "�daj pro ulici po�tovn�ho kontaktu z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_post_street_not_token,							9,1,0,30052, "�daj pro ulici po�tovn�ho kontaktu z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_city_too_long,								9,1,0,30053, "�daj pro m�sto po�tovn�ho kontaktu z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_post_city_not_token,							9,1,0,30054, "�daj pro m�sto po�tovn�ho kontaktu z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_zip_too_long,								9,1,0,30055, "�daj pro PS� po�tovn�ho kontaktu z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_data_post_zip_not_token,								9,1,0,30056, "�daj pro PS� po�tovn�ho kontaktu z�kazn�ka mus� odpov�dat po�adavk�m pro token.") \
	MDESC(c, cadmin_resp, customer_data_post_country_not_valid,							9,1,0,30057, "�daj pro st�t po�tovn�ho kontaktu z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_data_lang_not_valid,									9,1,0,30058, "�daj pro komunika�n� jazyk z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_login_user_name_not_valid,							9,1,0,30059, "�daj pro p�ihla�ovac� jm�no z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_login_user_password_not_valid,						9,1,0,30060, "�daj pro p�ihla�ovac� heslo z�kazn�ka nen� platn�.") \
	MDESC(c, cadmin_resp, customer_login_user_password_not_defined,						9,1,0,30061, "�daj pro p�ihla�ovac� heslo z�kazn�ka nen� definov�n.") \
	MDESC(c, cadmin_resp, customer_login_user_password_too_short,						9,1,0,30062, "�daj pro p�ihla�ovac� heslo z�kazn�ka nedosahuje minim�ln� d�lku.") \
	MDESC(c, cadmin_resp, customer_login_user_password_too_long,						9,1,0,30063, "�daj pro p�ihla�ovac� heslo z�kazn�ka p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, customer_with_credit_class_not_allowed,						9,1,0,30064, "Nen� dovoleno pro z�kazn�ky se zp�tn�m vy��tov�n�m.") \
\
	MDESC(c, cadmin_resp, service_data_service_name_not_defined,						9,1,1,30001, "�daj pro n�zev slu�by nen� definov�n.") \
	MDESC(c, cadmin_resp, service_data_var_code_not_valid,								9,1,1,30002, "�daj pro k�d varianty nen� platn�.") \
	MDESC(c, cadmin_resp, service_data_invoice_till_defined,							9,1,1,30003, "�daj pro vyfakturov�no do je ji� definov�n.") \
	MDESC(c, cadmin_resp, service_no_service_found,										9,1,1,30004, "Slu�ba nebyla nalezena.") \
	MDESC(c, cadmin_resp, service_multiple_services_found,								9,1,1,30005, "Bylo nalezeno v�ce ne� jedna slu�ba.") \
	MDESC(c, cadmin_resp, service_account_data_password_not_defined,					9,1,1,30006, "�daj pro heslo FTP ��tu dan� slu�by nen� definov�n.") \
	MDESC(c, cadmin_resp, service_account_data_password_too_short,						9,1,1,30007, "�daj pro heslo FTP ��tu dan� slu�by nedosahuje minim�ln� d�lku.") \
	MDESC(c, cadmin_resp, service_account_data_password_too_long,						9,1,1,30008, "�daj pro heslo FTP ��tu dan� slu�by p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, service_account_data_password_not_valid,						9,1,1,30009, "�daj pro heslo FTP dan� slu�by ��tu nen� platn�.") \
	MDESC(c, cadmin_resp, service_account_change_password_pending,						9,1,1,30010, "Pr�v� prob�h� zm�na hesla FTP ��tu dan� slu�by.") \
\
	MDESC(c, cadmin_resp, action_set_finished_ok_failed,								9,1,2,30001, "Nepoda�ilo se ukon�it akci do stavu OK.") \
	MDESC(c, cadmin_resp, action_set_finished_failed,									9,1,2,30002, "Nepoda�ilo se ukon�it akci.") \
	MDESC(c, cadmin_resp, coupon_code_not_valid,										9,1,2,30003, "Kup�n nen� platn�.") \
	MDESC(c, cadmin_resp, coupon_campaign_unknown,										9,1,2,30004, "Nezn�m� kampa� pro kup�n.") \
	MDESC(c, cadmin_resp, domain_tld_not_supported,										9,1,2,30005, "TLD nen� podporov�no.") \
	MDESC(c, cadmin_resp, domain_name_not_valid,										9,1,2,30006, "Dom�nov� jm�no nen� platn�.") \
	MDESC(c, cadmin_resp, domain_unknown_registrar,										9,1,2,30007, "Nezn�m� registr�tor pro dan� TLD.") \
	MDESC(c, cadmin_resp, cannot_register_domain_owner,									9,1,2,30008, "Nelze zaregistrovat dr�itele dom�ny.") \
	MDESC(c, cadmin_resp, cannot_register_domain,										9,1,2,30009, "Nelze zaregistrovat dom�nu.") \
	MDESC(c, cadmin_resp, domain_name_not_defined,										9,1,2,30010, "Dom�nov� jm�no nen� definov�no.") \
	MDESC(c, cadmin_resp, name_server_not_defined,										9,1,2,30011, "Nameserver nen� definov�n.") \
	MDESC(c, cadmin_resp, action_adding_failed,											9,1,2,30012, "Nepoda�ilo se vlo�it akci.") \
	MDESC(c, cadmin_resp, coupon_campaign_not_running,									9,1,2,30013, "Kampa� pro kup�n nen� spu�t�na.") \
	MDESC(c, cadmin_resp, coupon_campaign_max_count_reached,							9,1,2,30014, "Dosa�en maxim�ln� po�et kup�n� pro kampa�.") \
	MDESC(c, cadmin_resp, action_set_restarted_failed,									9,1,2,30015, "Nepoda�ilo se znovu spustit akci.") \
	MDESC(c, cadmin_resp, name_server_not_valid,										9,1,2,30016, "Nameserver nen� validni.") \
\
	MDESC(c, cadmin_resp, extraneous_domain_data_new_exp_date_not_defined,				9,1,3,30001, "�daj pro datum nov� expirace cizorod� dom�ny nen� definov�n.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_done_defined,							9,1,3,30002, "�daj pro datum vy��zen� cizorod� dom�ny je ji� definov�n.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_new_exp_date_not_valid,				9,1,3,30003, "�daj pro datum nov� expirace cizorod� dom�ny nen� platn�.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_realized_by_not_defined,				9,1,3,30004, "�daj pro osobu vy�izuj�c� cizorodou dom�nu nen� definov�n.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_state_out_of_bounds,					9,1,3,30005, "�daj pro stav zpracov�n� cizorod� dom�ny nen� v povolen�ch mez�ch (1-99).") \
	MDESC(c, cadmin_resp, extraneous_domain_data_state_not_valid,						9,1,3,30006, "�daj pro zpracov�n� stav cizorod� dom�ny nen� platn�.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_note_not_defined,						9,1,3,30007, "�daj pro pozn�mku cizorod� dom�ny nen� definov�n.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_note_too_long,							9,1,3,30008, "�daj pro pozn�mku cizorod� dom�ny p�ekro�il povolenou d�lku.") \
	MDESC(c, cadmin_resp, extraneous_domain_data_registrarid_not_defined,				9,1,3,30009, "Registr�tor cizorod� dom�ny nen� definov�n.") \
\
	MDESC(c, cadmin_resp, server_is_not_empty,											9,1,4,30001, "Na serveru jsou nezru�en� slu�by.") \
	MDESC(c, cadmin_resp, server_cannot_be_deleted,										9,1,4,30002, "Server nelze odstranit.") \
	MDESC(c, cadmin_resp, server_name_not_defined,										9,1,4,30003, "Nen� definov�n n�zev serveru.") \
	MDESC(c, cadmin_resp, ip_address_not_defined,										9,1,4,30004, "Nen� definov�na IP adresa.") \
	MDESC(c, cadmin_resp, email_not_defined,											9,1,4,30005, "Nen� definov�na emailov� adresa.") \
	MDESC(c, cadmin_resp, email_not_valid,												9,1,4,30006, "Emailov� adresa nen� platn�.") \
	MDESC(c, cadmin_resp, user_id_not_defined,											9,1,4,30007, "Nen� definov�no ��slo ��tu u�ivatele.") \
	MDESC(c, cadmin_resp, server_name_too_short,										9,1,4,30008, "N�zev serveru mus� b�t del��.") \
	MDESC(c, cadmin_resp, admin_name_not_defined,										9,1,4,30009, "Nen� definov�no p�ihla�ovac� jm�no pro administraci serveru.") \
	MDESC(c, cadmin_resp, admin_password_not_defined,									9,1,4,30010, "Nen� definov�no p�ihla�ovac� heslo pro administraci serveru.") \
	MDESC(c, cadmin_resp, sql_type_not_valid,											9,1,4,30011, "Typ SQL datab�ze nen� platn�.") \
	MDESC(c, cadmin_resp, server_name_not_valid,										9,1,4,30012, "N�zev serveru nen� platn�.") \
	MDESC(c, cadmin_resp, operator_name_not_defined,									9,1,4,30013, "Nen� definov�no jm�no administr�tora.") \
	MDESC(c, cadmin_resp, invoice_not_found,											9,1,4,30014, "V�zva k �hrad� nebyla nalezena.") \
	MDESC(c, cadmin_resp, invoice_already_paid,											9,1,4,30015, "V�zva k �hrad� byla ji� zaplacena.") \
	MDESC(c, cadmin_resp, server_has_package,											9,1,4,30016, "Dan�mu serveru je p�i�azen bal��ek.") \
\
	MDESC(c, cadmin_resp, dns_operation_failed,											9,1,5,30001, "Operace na dns se nezda�ila.") \
\
	MDESC(c, cadmin_resp, dig_no_ns_records,											9,1,7,30001, "NS zaznamy nenalezeny") \
	MDESC(c, cadmin_resp, dig_operation_failed,											9,1,7,30002, "Operace na dns se nezda�ila.") \
\
	MDESC(c, cadmin_resp, param_title_not_defined,										9,1,9,30001, "Parametr title nen� definov�n.") \
	MDESC(c, cadmin_resp, param_comment_not_defined,									9,1,9,30002, "Parametr comment nen� definov�n.") \
	MDESC(c, cadmin_resp, param_pbu_not_valid,											9,1,9,30003, "Parametr pbu nen� platn�.") \
	MDESC(c, cadmin_resp, param_currency_code_not_defined,								9,1,9,30004, "Parametr currency_code nen� definov�n.") \
	MDESC(c, cadmin_resp, param_currency_code_not_valid,								9,1,9,30005, "Parametr currency_code nen� platn�.") \
	MDESC(c, cadmin_resp, param_var_code_not_valid,										9,1,9,30006, "Parametr var_code nen� platn�.") \
	MDESC(c, cadmin_resp, param_tld_not_defined,										9,1,9,30007, "Parametr tld nen� definov�n.") \
	MDESC(c, cadmin_resp, param_tld_not_valid,											9,1,9,30008, "Parametr tld nen� platn�.") \
	MDESC(c, cadmin_resp, param_valid_until_not_valid,									9,1,9,30009, "Parametr valid_until nen� platn�.") \
	MDESC(c, cadmin_resp, coupon_campaign_not_found,									9,1,9,30010, "Kup�nov� kampa� nebyla nalezena.") \
	MDESC(c, cadmin_resp, param_code_not_defined,										9,1,9,30011, "Parametr code nen� definov�n.") \
\
	MDESC(c, cadmin_resp, transaction_error,											9,2,1,30001, "Nastala chyba v transakci.") \
	MDESC(c, cadmin_resp, missing_param_id_user,										9,2,1,30002, "Nen� definov�n parametr id_user.") \
	MDESC(c, cadmin_resp, invalid_param_id_user,										9,2,1,30003, "Neplatn� parametr id_user.") \
	MDESC(c, cadmin_resp, iduser_not_found,												9,2,1,30004, "Nebyl nalezen iduser.") \
	MDESC(c, cadmin_resp, empty_email,													9,2,1,30005, "Pr�zdn� email.") \
	MDESC(c, cadmin_resp, unknown_lang,													9,2,1,30006, "Nezn�m� lang.") \
	MDESC(c, cadmin_resp, unknown_pbu,													9,2,1,30007, "Nezn�m� pbu.") \
	MDESC(c, cadmin_resp, missing_param_report_if_empty,								9,2,1,30008, "Nen� definov�n parametr report_if_empty.") \
	MDESC(c, cadmin_resp, invalid_param_report_if_empty,								9,2,1,30009, "Neplatn� parametr report_if_empty.") \
	MDESC(c, cadmin_resp, missing_param_update_sent_date,								9,2,1,30010, "Nen� definov�n parametr update_sent_date.") \
	MDESC(c, cadmin_resp, invalid_param_update_sent_date,								9,2,1,30011, "Neplatn� parametr update_sent_date.") \
	MDESC(c, cadmin_resp, expdom_report_nothing_to_send,								9,2,1,30012, "P�ehled o expiruj�c�ch dom�n�ch neobsahuje ��dn� dom�ny.") \
	MDESC(c, cadmin_resp, expdom_report_not_all_sent,									9,2,1,30013, "P�ehled o expiruj�c�ch dom�n�ch nebyl zasl�n v�em zam��len�m z�kazn�k�m.") \
\
	MDESC(c, cadmin_resp, user_authenticated,											9,0,0,50001, "Autentizace u�ivatele �sp�n� prob�hla.") \
\
	MDESC(c, cadmin_resp, service_stopped,												9,0,1,50001, "Zastaven� slu�by �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_started,												9,0,1,50002, "Spu�t�n� slu�by �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_deleted,												9,0,1,50003, "Smaz�n� slu�by �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_mailserver_created,									9,0,1,50004, "Vytvo�en� po�tovn�ho serveru pro danou slu�bu �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_mailserver_deleted,									9,0,1,50005, "Smaz�n� po�tovn�ho serveru pro danou slu�bu �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_bonus_created,										9,0,1,50006, "Vytvo�en� bonusu pro novou slu�bu �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_advertcamp_changed,									9,0,1,50007, "Zm�na advertcamp pro danou slu�bu �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, service_bonus_transfered,										9,0,1,50008, "P�eveden� bonusu pro novou slu�bu �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_name_duplicity_checked,								9,0,1,50009, "Kontrola duplicity dom�nov�ho jm�na pro slu�bu �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, service_cert_added,											9,0,1,50010, "Vlo�en� ��dosti o certifik�t k dom�nov�mu jm�nu �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_idcamp_changed,										9,0,1,50011, "Zm�na IDCamp pro danou slu�bu �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, service_miniweb_mailserver_created,							9,0,1,50012, "Vytvo�en� po�ty pro miniweb pro danou slu�bu �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, customer_created,												9,1,0,50001, "Vytvo�en� nov�ho z�kazn�ka �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, customer_password_changed,									9,1,0,50002, "Zm�na p�ihla�ovac� hesla z�kazn�ka �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, customer_get_data_success,									9,1,0,50003, "Na�ten� �daj� z�kazn�ka �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, customer_get_used_servers_success,							9,1,0,50004, "Z�sk�n� seznamu server� pou��van�ch dan�m z�kazn�kem �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, customer_unsubscribe_mail_sent,								9,1,0,50005, "Rozesl�n� email� pro odhl�en� z�kazn�ka z odb�ru novinek �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, customer_unsubscribed,										9,1,0,50006, "Odhl�en� z�kazn�ka z odb�ru novinek �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, customer_credit_system_activated,								9,1,0,50007, "P�epnut� z�kazn�ka na kreditn� syst�m �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, customer_get_gogo_servers_success,							9,1,0,50008, "Z�sk�n� seznamu server� GOGO pou��van�ch dan�m z�kazn�kem �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, service_foto24_upgrade_success,								9,1,1,50001, "P�evod slu�by na variantu Foto24 XXL a prodlou�en� bezplatn�ho provozu �sp�n� prob�hl.") \
	MDESC(c, cadmin_resp, service_main_account_password_changed,						9,1,1,50002, "Zm�na hesla hlavn�ho FTP ��tu slu�by �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, service_hosting_able_check_success,							9,1,1,50003, "Ov��en� zda lze slu�bu zprovoznit �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_order_on_parent_domain_success,						9,1,1,50004, "Vlo�en� objedn�vky slu�by na pronajmut� dom�n� �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_order_new_domain_success,								9,1,1,50005, "Vlo�en� objedn�vky slu�by na nov� dom�n� �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_inshop4_demo_upgrade_success,							9,1,1,50006, "P�evod slu�by na variantu inShop4 Profi T �sp�n� prob�hl.") \
	MDESC(c, cadmin_resp, service_safeguard_success,									9,1,1,50007, "Zabezpe�en� slu�by zamknut�m a zm�nou ftp hesla �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_access_enabled,										9,1,1,50008, "Zji�t�n� zda se slu�ba nach�z� na dan�m ��tu �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_inpage_mini_upgrade_success,							9,1,1,50009, "Pov��en� slu�by ve variant� inPage Mini �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, service_db_limits_changed,									9,1,1,50010, "Zm�na limit� sql datab�ze �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, service_inpage_upgrade_success,								9,1,1,50011, "Pov��en� slu�by inPage �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, coupon_code_checked,											9,1,2,50001, "Ov��en� platnosti kup�nu �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, coupon_order_success,											9,1,2,50002, "Vlo�en� kup�nov� objedn�vky �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, extraneous_domain_get_domains_not_done_success,				9,1,3,50001, "Z�sk�n� seznamu dosud nevy��zen�ch cizorod�ch dom�n �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_new_exp_date_success,					9,1,3,50002, "Nastaven� nov�ho datumu expirace cizorod� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_data_success,							9,1,3,50003, "Na�ten� �daj� o cizorod� dom�n� �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_registration_data_success,				9,1,3,50004, "Na�ten� �daj� pro registraci cizorod� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_state_success,							9,1,3,50005, "Nastaven� stavu zpracov�n� cizorod� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_remove_success,								9,1,3,50006, "Zru�en� cizorod� �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_msg_text_success,						9,1,3,50007, "Na�ten� zpr�vy s pokyny pro registraci cizorod� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_note_success,							9,1,3,50008, "Nastaven� pozn�mky cizorod� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_change_registrar_notice_success,			9,1,3,50009, "Ozn�men� o zm�n� registr�tora �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_restart_transfer_success,					9,1,3,50010, "Znovuspu�t�n� transferu dom�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_update_dns_success,							9,1,3,50011, "Zmena DNS u domeny dom�ny �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_msg_text_success,						9,1,3,50012, "Update zpr�vy s pokyny pro registraci cizorod� dom�ny �sp�n� prob�hl.") \
	MDESC(c, cadmin_resp, extraneous_domain_get_msg_texts_success,						9,1,3,50013, "Na�ten� v�ech zpr�v s pokyny pro registraci cizorod� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, extraneous_domain_set_order_id_success,						9,1,3,50014, "Nastaven� orderId cizorod� dom�ny �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, server_deleted,												9,1,4,50001, "Smaz�n� serveru �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, server_created,												9,1,4,50002, "Vytvo�en� nov�ho serveru �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, dns_operation_ok,												9,1,5,50001, "Operace na dns �sp�n� prob�hla.") \
\
	MDESC(c, cadmin_resp, domains_get_info_ok,											9,1,6,50001, "Z�sk�n� informace o dom�nov�m jm�nu z centra �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, domains_with_zoner_registrator_listed,						9,1,6,50002, "Z�sk�n� seznamu dom�nov�ch jmen z centra, u nich� je Zoner registr�torem �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, domains_punycode_converted,									9,1,6,50003, "P�eklad dom�nov�ho jm�na z punycode �sp�n� prob�hl.") \
\
	MDESC(c, cadmin_resp, domains_ns_changed_ok,										9,0,6,50001, "Prom�tnut� zm�ny nameserver� u dom�ny do centra �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, domains_sk_cert_new_owner_ok,									9,0,6,50002, "Nastaven� nov�ho vlastn�ka .sk dom�ny pro certifik�t �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, dns_manager_get_zone_ok,										9,1,7,50001, "P�e�ten� z�ny z datab�ze �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, dns_manager_update_zone_ok,									9,1,7,50002, "�prava z�ny v datab�zi �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, dns_manager_ip_ranges_listed,									9,1,7,50003, "Z�sk�n� seznamu ip rozsah� spravovan�ch dns �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, dns_manager_ip_addresses_listed,								9,1,7,50004, "Z�sk�n� seznamu ip adres pro dan� ip rozsah �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, dns_manager_get_ip_address_success,							9,1,7,50005, "Z�sk�n� ip adresy �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, dns_manager_ip_address_updated,								9,1,7,50006, "Ulo�en� zm�n pro danou ip adresu do datab�ze �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, dns_manager_generate_ip_range_success,						9,1,7,50007, "Vygenerov�n� dan�ho ip rozsahu do dns �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, dns_manager_dig_ok,											9,1,7,50008, "P�e�ten� z�ny p��mo z dns serveru �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, dns_manager_dig_ns_ok,										9,1,7,50009, "P�e�ten� ns p��mo z dns �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, invoice_make_payment_ok,										9,1,8,50001, "Zaplacen� v�zvy k �hrad� �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, request_for_payment_got,										9,1,8,50002, "Z�sk�n� v�zvy k �hrad� �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, coupon_campaign_created,										9,1,9,50001, "Vytvo�en� nov� kampan� pro kup�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, coupon_campaign_updated,										9,1,9,50002, "�prava kampan� pro kup�ny �sp�n� prob�hla.") \
	MDESC(c, cadmin_resp, coupon_campaign_deleted,										9,1,9,50003, "Zru�en� kampan� pro kup�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, coupon_campaign_get_ok,										9,1,9,50004, "Z�sk�n� podrobnost� o kampani pro kup�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, coupon_campaign_listed,										9,1,9,50005, "Z�sk�n� seznamu kampan� pro kup�ny �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, coupon_code_created,											9,1,9,50006, "P�id�n� nov�ho kup�nu do kampan� �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, coupon_code_listed,											9,1,9,50007, "Z�sk�n� seznamu kup�n� kampan� �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, template_message_get_ok,										9,1,10,50001, "Z�sk�n� �ablony zpr�vy a jej� napln�n� dodan�mi �daji �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, action_set_finished_ok,										9,1,11,50001, "Ukon�en� akce v centru administrace �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, registry_update_ok,											9,1,11,50002, "Zaps�n� hodnoty do registru �sp�n� prob�hlo.") \
	MDESC(c, cadmin_resp, action_set_restarted_ok,										9,1,11,50003, "Znovuspu�t�n� akce v centru administrace �sp�n� prob�hlo.") \
\
	MDESC(c, cadmin_resp, expdom_report_sent,											9,2,1,50001, "Zpr�va o expiruj�c�ch dom�n�ch odesl�na.") \
	MDESC(c, cadmin_resp, expdom_report_bulk_sent,										9,2,1,50002, "Zpr�va o expiruj�c�ch dom�n�ch v�em odeb�raj�c�m z�kazn�k�m odesl�na.") \
	MDESC(c, cadmin_resp, appeal_mail_invoice_pdf_sent,									9,2,1,50003, "Mail upominky s pdf vyzvou odesl�n.") \

#define CADMIN_CMSM_WHS(c) \
	GROUP_WHS(c, cadmin_module_mdesc, cadmin_cmsm, user_authenticate)


#define CADMIN_MDESC_TABLE(c) \
	CADMIN_CMSM(c) \
	CADMIN_RESP(c) \
	CADMIN_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
CADMIN_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_CADMIN_MDESCS
