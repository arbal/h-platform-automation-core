#ifndef MOD_ZONERCONTROLCENTER_MDESCS
#define MOD_ZONERCONTROLCENTER_MDESCS

#include "mdescs.h"

// zcc messages
#define ZONERCONTROLCENTER_CMSM(c) \
	MDESC2(c, zcc_cmsm, client_authenticate,														19,0,0,1, "P�ihl�en� cms klienta.", "P�ihl�en� cms klienta se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, user_authenticate,															19,0,0,2, "P�ihl�en� u�ivatele.", "P�ihl�en� u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, user_authenticate_with_identkey,											19,0,0,3, "P�ihl�en� u�ivatele s kl��em.", "P�ihl�en� u�ivatele s kl��em se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, sslmarket_create_user_identity,												19,0,0,4, "Vytvo�en� nov� identity pro u�ivatele SSL market.", "Vytvo�en� nov� identity pro u�ivatele SSL market se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, general_search,																19,0,1,1, "V�eobecn� vyhled�v�n�.", "V�eobecn� vyhled�v�n� se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, make_dns_snapshot,															19,1,0,1, "Vytvo�en� snapshotu dns.", "Vytvo�en� snapshotu dns se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_dns_snapshot,															19,1,0,2, "Z�sk�n� snapshotu dns.", "Z�sk�n� snapshotu dns se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_dns_snapshots,															19,1,0,3, "Z�sk�n� seznamu po��zen�ch snapshot� dns.", "Z�sk�n� seznamu po��zen�ch snapshot� dns se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_user,																	19,1,1,1, "Z�sk�n� u�ivatele.", "Z�sk�n� u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, send_hotline_request,														19,1,1,2, "Zasl�n� po�adavku na hotline.", "Zasl�n� po�adavku na hotline se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_price,																19,1,1,3, "Z�sk�n� ceny pro dan� TLD.", "Z�sk�n� ceny pro dan� TLD se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, user_update_profile,														19,1,1,4, "�prava kontaktn�ch �daj� u�ivatele.", "�prava kontaktn�ch �daj� u�ivatele se nezda�ila.") \
	MDESC2(c, zcc_cmsm, create_user,																19,1,1,5, "Vytvo�en� u�ivatele.", "Vytvo�en� u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_prices,																19,1,1,6, "Z�sk�n� seznamu cen pro dan� TLD.", "Z�sk�n� seznamu cen pro dan� TLD se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_reg_prices,													19,1,1,7, "Z�sk�n� seznamu TLD s cenou za ro�n� registraci.", "Z�sk�n� seznamu TLD s cenou za ro�n� registraci se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_reg_common_prices,											19,1,1,8, "Z�sk�n� seznamu TLD s b�nou cenou za ro�n� registraci.", "Z�sk�n� seznamu TLD s b�nou cenou za ro�n� registraci se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_sms_notification,														19,1,1,9, "Z�sk�n� �daj� pro SMS upozor�ov�n�.", "Z�sk�n� �daj� pro SMS upozor�ov�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_sms_notification_subject,											19,1,1,10, "Nastaven� p�edm�tu SMS upozor�ov�n�.", "Nastaven� p�edm�tu SMS upozor�ov�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_sms_phone,															19,1,1,11, "Nastaven� telefonn�ho ��sla pro SMS upozor�ov�n�.", "Nastaven� telefonn�ho ��sla pro SMS upozor�ov�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, send_lost_credentials,														19,1,1,12, "Zasl�n� odkazu pro obnovu hesla.", "Zasl�n� odkazu pro obnovu hesla se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_renew_prices,												19,1,1,13, "Z�sk�n� seznamu TLD s cenou za ro�n� prodlou�en�.", "Z�sk�n� seznamu TLD s cenou za ro�n� prodlou�en� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_idle_user,															19,1,1,14, "Smaz�n� neaktivn�ho u�ivatele.", "Smaz�n� neaktivn�ho u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_idle_users,															19,1,1,15, "Smaz�n� neaktivn�ch u�ivatel�.", "Smaz�n� neaktivn�ch u�ivatel� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_user_note,															19,1,1,16, "Vytvo�en� pozn�mky u u�ivatele.", "Vytvo�en� pozn�mky u u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_user_note,															19,1,1,17, "Smaz�n� pozn�mky u u�ivatele.", "Smaz�n� pozn�mky u u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_user_note,															19,1,1,18, "�prava pozn�mky u u�ivatele.", "�prava pozn�mky u u�ivatele se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_user_note,																19,1,1,19, "Z�sk�n� pozn�mky u u�ivatele.", "Z�sk�n� pozn�mky u u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_user_notes,																19,1,1,20, "Z�sk�n� seznamu pozn�mek u u�ivatele.", "Z�sk�n� seznamu pozn�mek u u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_users_with_blocked_gpwebpay,											19,1,1,21, "Z�sk�n� seznamu u�ivatel� se zablokovanou platbou kartami.", "Z�sk�n� seznamu u�ivatel� se zablokovanou platbou kartami se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_gpwebpay_blockation_settings,										19,1,1,22, "�prava parametr� pro blokaci plateb kartami.", "�prava parametr� pro blokaci plateb kartami se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_transfer_prices,											19,1,1,23, "Z�sk�n� seznamu TLD s cenou za ro�n� p�evod.", "Z�sk�n� seznamu TLD s cenou za ro�n� p�evod se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_and_1y_transfer_common_prices,										19,1,1,24, "Z�sk�n� seznamu TLD s b�nou cenou za ro�n� p�evod.", "Z�sk�n� seznamu TLD s b�nou cenou za ro�n� p�evod se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_specreg_prices,													19,1,1,25, "Z�sk�n� seznamu TLD s cenou za speci�ln� registraci.", "Z�sk�n� seznamu TLD s cenou za speci�ln� registraci se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tlds_specreg_common_prices,												19,1,1,26, "Z�sk�n� seznamu TLD s b�nou cenou za speci�ln� registraci.", "Z�sk�n� seznamu TLD s b�nou cenou za speci�ln� registraci se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_common_price,														19,1,1,27, "Z�sk�n� b�n� ceny pro dan� TLD.", "Z�sk�n� b�n� ceny pro dan� TLD se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_complete_common_reg_prices,												19,1,1,28, "Z�sk�n� kompletn�ho cen�ku b�n�ch cen za registrace.", "Z�sk�n� kompletn�ho cen�ku b�n�ch cen za registrace se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_complete_reg_prices,													19,1,1,29, "Z�sk�n� kompletn�ho cen�ku za registrace.", "Z�sk�n� kompletn�ho cen�ku za registrace se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_common_prices,														19,1,1,30, "Z�sk�n� seznamu b�n�ch cen pro dan� TLD.", "Z�sk�n� seznamu b�n�ch cen pro dan� TLD se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, credit_account_active_notify,												19,1,1,31, "Ozn�men� o aktivaci kreditn�ho ��tu.", "Ozn�men� o aktivaci kreditn�ho ��tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, approve_user,																19,1,1,32, "Schv�len� u�ivatele.", "Schv�len� u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_server_audit_log_events,												19,1,1,33, "Z�sk�n� historie u�ivatele.", "Z�sk�n� historie u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, activate_tester,															19,1,1,34, "Aktivace testera.", "Aktivace testera se nezda�ila.") \
	MDESC2(c, zcc_cmsm, update_news_subscription,													19,1,1,35, "�prava p�ihl�en� k odb�ru novinek.", "�prava p�ihl�en� k odb�ru novinek se nezda�ila.") \
	MDESC2(c, zcc_cmsm, create_and_send_email_message,												19,1,1,36, "Vytvo�en� a odesl�n� mailov� zpr�vy.", "Vytvo�en� a odesl�n� mailov� zpr�vy se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_user_delegations,														19,1,1,37, "Z�sk�n� seznamu delegac� u�ivatele.", "Z�sk�n� seznamu delegac� u�ivatele se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_unpaid_reqs_for_payment,												19,1,2,1, "Z�sk�n� seznamu nezaplacen�ch v�zev k �hrad�.", "Z�sk�n� seznamu nezaplacen�ch v�zev k �hrad� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_req_for_payment_by_number,												19,1,2,2, "Z�sk�n� v�zvy k �hrad� podle VS.", "Z�sk�n� v�zvy k �hrad� podle VS se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_pay_debt,																19,1,2,3, "Z�sk�n� �daj� pro �hradu pohled�vky.", "Z�sk�n� �daj� pro �hradu pohled�vky se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_vs_for_first_payment,													19,1,2,4, "Z�sk�n� vs pro �hradu prvn� pohled�vky.", "Z�sk�n� vs pro �hradu prvn� pohled�vky se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_gpwebpay_shutdown,														19,1,2,5, "Z�sk�n� datumu p��t� odst�vky syst�mu GPwebpay.", "Z�sk�n� datumu p��t� odst�vky syst�mu GPwebpay se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, credit_pay,																	19,1,2,6, "Uhrazen� pohled�vky z kreditn�ho ��tu.", "Uhrazen� pohled�vky z kreditn�ho ��tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_view_of_req_for_payment,												19,1,2,7, "Zm�na viditelnosti pohled�vky.", "Zm�na viditelnosti pohled�vky se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_last_req_for_payment,													19,1,2,8, "Z�sk�n� posledn� v�zvy k �hrad�.", "Z�sk�n� posledn� v�zvy k �hrad� se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_managed_domains,														19,1,3,1, "Z�sk�n� seznamu dom�n, kde je Zoner registr�torem.", "Z�sk�n� seznamu dom�n, kde je Zoner registr�torem se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_domain,																	19,1,3,2, "Z�sk�n� dom�ny.", "Z�sk�n� dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_auto_renew,															19,1,3,3, "Nastaven� p��znaku pro automatick� prodlu�ov�n� dom�ny.", "Nastaven� p��znaku pro automatick� prodlu�ov�n� dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, check_domain_name,															19,1,3,4, "Zji�t�n� dostupnosti dom�ny.", "Zji�t�n� dostupnosti dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domains,														19,1,3,5, "Z�sk�n� seznamu top level dom�n.", "Z�sk�n� seznamu top level dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domain,														19,1,3,6, "Z�sk�n� top level dom�ny.", "Z�sk�n� top level dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_top_level_domain,													19,1,3,7, "�prava top level dom�ny.", "�prava top level dom�ny se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_domain_name_owner,														19,1,3,8, "Z�sk�n� kontaktn�ch �daj� vlastn�ka dom�ny.", "Z�sk�n� kontaktn�ch �daj� vlastn�ka dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_domain_name_contact,													19,1,3,9, "�prava �daj� kontaktu dom�ny.", "�prava �daj� kontaktu dom�ny se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_domain_name_contact,													19,1,3,10, "Z�sk�n� kontaktn�ch �daj� kontaktu dom�ny.", "Z�sk�n� kontaktn�ch �daj� kontaktu dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, start_reg_of_new_tld,														19,1,3,11, "Zah�jen� registrac� nov�ho tld.", "Zah�jen� registrac� nov�ho tld se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, determine_tld,																19,1,3,12, "Ur�en� tld.", "Ur�en� tld se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domain_last_change,											19,1,3,13, "Z�sk�n� datumu posledn� zm�ny top level dom�ny.", "Z�sk�n� datumu posledn� zm�ny top level dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_premium_reg_price,														19,1,3,14, "Z�sk�n� ceny za registraci pr�miv� dom�ny.", "Z�sk�n� ceny za registraci pr�miv� dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_registrars,																19,1,3,15, "Z�sk�n� seznamu registr�tor�.", "Z�sk�n� seznamu registr�tor� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, registrar_make_poll,														19,1,3,16, "Zpracov�n� poll msg u registr�tora.", "Zpracov�n� poll msg u registr�tora se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, send_auth_info,																19,1,3,17, "Posl�n� autoriza�n�ho k�du pro p�evod dom�ny.", "Posl�n� autoriza�n�ho k�du pro p�evod dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_cznic_registrant_email,													19,1,3,18, "Z�sk�n� emailu dr�itele .cz dom�ny.", "Z�sk�n� emailu dr�itele .cz dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domains_counts,												19,1,3,19, "Z�sk�n� po�tu spravovan�ch dom�n rozd�len�ch podle top level dom�n.", "Z�sk�n� po�tu spravovan�ch dom�n rozd�len�ch podle top level dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_top_level_domain_registrar_counts,										19,1,3,20, "Z�sk�n� po�tu spravovan�ch dom�n rozd�len�ch podle registr�tora pro dan� tld.", "Z�sk�n� po�tu spravovan�ch dom�n rozd�len�ch podle registr�tora pro dan� tld se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, create_database,															19,1,4,1, "Vytvo�en� datab�ze.", "Vytvo�en� datab�ze se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_database,																19,1,4,2, "Z�sk�n� datab�ze.", "Z�sk�n� datab�ze se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, migrate_database,															19,1,4,3, "Migrace datab�ze.", "Migrace datab�ze se nezda�ila.") \
	MDESC2(c, zcc_cmsm, assign_database,															19,1,4,4, "P�i�azen� datab�ze k dom�n�.", "P�i�azen� datab�ze k dom�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, assign_pooled_database,														19,1,4,5, "P�i�azen� p�edvytvo�en� datab�ze k dom�n�.", "P�i�azen� p�edvytvo�en� datab�ze k dom�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_database,															19,1,4,6, "Smaz�n� datab�ze.", "Smaz�n� datab�ze se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_database_server,														19,1,4,7, "Z�sk�n� datab�zov�ho serveru pro danou datab�zi.", "Z�sk�n� datab�zov�ho serveru pro danou datab�zi se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, change_database_size,														19,1,4,8, "Zm�na max. velikosti datab�ze.", "Zm�na max. velikosti datab�ze se nezda�ila.") \
	MDESC2(c, zcc_cmsm, create_database_simplified,													19,1,4,9, "Vytvo�en� datab�ze zjednodu�en�.", "Vytvo�en� datab�ze zjednodu�en� se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_service,																19,1,5,1, "Z�sk�n� slu�by.", "Z�sk�n� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_main_account,													19,1,5,2, "Z�sk�n� hlavn�ho ��tu dan� slu�by.", "Z�sk�n� hlavn�ho ��tu dan� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_services,																19,1,5,3, "Z�sk�n� seznamu slu�eb.", "Z�sk�n� seznamu slu�eb se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, simulate_activity,															19,1,5,4, "Simulace �innosti.", "Simulace �innosti se nezda�ila.") \
	MDESC2(c, zcc_cmsm, service_redirect,															19,1,5,5, "P�esm�rov�n� dom�ny.", "P�esm�rov�n� dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, service_upgrade,															19,1,5,6, "Pov��en� slu�by.", "Pov��en� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_mail,																19,1,5,7, "Vytvo�en� po�ty.", "Vytvo�en� po�ty se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_mail,																19,1,5,8, "Smaz�n� po�ty.", "Smaz�n� po�ty se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, service_replace_ipv4,														19,1,5,9, "V�m�na IP adresy u slu�by.", "V�m�na IP adresy u slu�by se nezda�ila.") \
	MDESC2(c, zcc_cmsm, remove_own_ip,																19,1,5,10, "Odstran�n� vlastn� IP adresy.", "Odstran�n� vlastn� IP adresy se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, add_own_ip,																	19,1,5,11, "P�id�n� vlastn� IP adresy.", "P�id�n� vlastn� IP adresy se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delegate_permission,														19,1,5,12, "Delegov�n� opr�vn�n�.", "Delegov�n� opr�vn�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, undelegate_permission,														19,1,5,13, "Oddelegov�n� opr�vn�n�.", "Oddelegov�n� opr�vn�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_service_note,														19,1,5,14, "Vytvo�en� pozn�mky u slu�by.", "Vytvo�en� pozn�mky u slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_service_note,														19,1,5,15, "Smaz�n� pozn�mky u slu�by.", "Smaz�n� pozn�mky u slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_service_note,														19,1,5,16, "Zm�na pozn�mky u slu�by.", "Zm�na pozn�mky u slu�by se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_service_note,															19,1,5,17, "Z�sk�n� pozn�mky u slu�by.", "Z�sk�n� pozn�mky u slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_notes,															19,1,5,18, "Z�sk�n� seznamu pozn�mek u slu�by.", "Z�sk�n� seznamu pozn�mek u slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_permission_delegations,											19,1,5,19, "Z�sk�n� seznamu opr�vn�n�.", "Z�sk�n� seznamu opr�vn�n� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_service_chc_request,													19,1,5,20, "Vytvo�en� ��dosti do CHC pro slu�bu.", "Vytvo�en� ��dosti do CHC pro slu�bu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, check_service_name,															19,1,5,21, "Ov��en� dostupnosti n�zvu slu�by.", "Ov��en� dostupnosti n�zvu slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, carry_out_service_application_pool_task,									19,1,5,22, "Proveden� �lohy na aplika�n�m poolu slu�by.", "Proveden� �lohy na aplika�n�m poolu slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, is_installatron_available,													19,1,5,23, "Zji�t�n� dostupnosti installatronu pro slu�bu.", "Zji�t�n� dostupnosti installatronu pro slu�bu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, installatron_cleanup_site,													19,1,5,24, "Smaz�n� slu�by z installatronu.", "Smaz�n� slu�by z installatronu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_third_level_domains,											19,1,5,25, "Z�sk�n� dom�n t�et� �rovn� pro slu�bu.", "Z�sk�n� dom�n t�et� �rovn� pro slu�bu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_service_data,														19,1,5,27, "Smaz�n� dat slu�by.", "Smaz�n� dat slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, park_service_data,															19,1,5,28, "Zaparkov�n� dat slu�by.", "Zaparkov�n� dat slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, deny_service_data,															19,1,5,29, "Odstaven� dat slu�by pro neplacen�.", "Odstaven� dat slu�by pro neplacen� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, park_service,																19,1,5,30, "Zaparkov�n� slu�by.", "Zaparkov�n� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_service,																19,1,5,31, "Smaz�n� slu�by.", "Smaz�n� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_aliases,																19,1,5,32, "Z�sk�n� seznamu alias�.", "Z�sk�n� seznamu alias� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_alias,																19,1,5,33, "Vytvo�en� aliasu.", "Vytvo�en� aliasu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_features,														19,1,5,34, "Z�sk�n� stav� z�mk� slu�by.", "Z�sk�n� stav� z�mk� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, stats_lock,																	19,1,5,35, "Zamknut� statistiky slu�by.", "Zamknut� statistiky slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, stats_unlock,																19,1,5,36, "Odemknut� statistiky slu�by.", "Odemknut� statistiky slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_accounts,														19,1,5,37, "Z�sk�n� seznamu ftp ��t� slu�by.", "Z�sk�n� seznamu ftp ��t� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, ftp_lock,																	19,1,5,38, "Zamknut� ftp ��tu slu�by.", "Zamknut� ftp ��tu slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, ftp_unlock,																	19,1,5,39, "Odemknut� ftp ��tu slu�by.", "Odemknut� ftp ��tu slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, ssh_lock,																	19,1,5,40, "Zamknut� ssh ��tu slu�by.", "Zamknut� ssh ��tu slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, ssh_unlock,																	19,1,5,41, "Odemknut� ssh ��tu slu�by.", "Odemknut� ssh ��tu slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, service_permission_granted,													19,1,5,42, "Ov��en� ud�len�ch pr�v ke slu�b�.", "Ov��en� ud�len�ch pr�v ke slu�b� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_hosting_server,															19,1,5,43, "Z�sk�n� hostingov�ho serveru pro danou slu�bu.", "Z�sk�n� hostingov�ho serveru pro danou slu�bu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_mail_server,															19,1,5,44, "Z�sk�n� po�tovn�ho serveru pro danou slu�bu.", "Z�sk�n� po�tovn�ho serveru pro danou slu�bu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_master_service,															19,1,5,45, "Z�sk�n� master slu�by.", "Z�sk�n� master slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_third_level_domain_from_alias,									19,1,5,46, "Z�sk�n� dom�ny t�et� �rovn� z aliasu na ni.", "Z�sk�n� dom�ny t�et� �rovn� z aliasu na ni se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, domain_transfer_available,													19,1,5,47, "Zji�t�n� dostupnosti transferu dom�ny.", "Zji�t�n� dostupnosti transferu dom�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_databases,																19,1,5,48, "Z�sk�n� seznamu datab�z�.", "Z�sk�n� seznamu datab�z� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_database_server_deployments,											19,1,5,49, "Z�sk�n� seznamu server� pro z�izov�n� jednotliv�ch typ� datab�z� slu�by.", "Z�sk�n� seznamu server� pro z�izov�n� jednotliv�ch typ� datab�z� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_free_database_name,														19,1,5,50, "Z�sk�n� voln�ho n�zvu datab�ze odvozen�ho od n�zvu slu�by.", "Z�sk�n� voln�ho n�zvu datab�ze odvozen�ho od n�zvu slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_db_quotas,														19,1,5,51, "Z�sk�n� datab�zov�ch kv�t pro slu�bu.", "Z�sk�n� datab�zov�ch kv�t pro slu�bu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, upgrade_service_db_quotas,													19,1,5,52, "Nav��en� datab�zov�ch kv�t pro slu�bu.", "Nav��en� datab�zov�ch kv�t pro slu�bu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_billing_info,													19,1,5,53, "Z�sk�n� informac� pro fakturaci slu�by.", "Z�sk�n� informac� pro fakturaci slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_delegations,													19,1,5,54, "Z�sk�n� seznamu delegac� slu�by.", "Z�sk�n� seznamu delegac� slu�by se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, search_services,															19,1,5,55, "Hled�n� mezi slu�bami.", "Hled�n� mezi slu�bami se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, downgrade_service_db_quotas,												19,1,5,56, "Pon�en� datab�zov�ch kv�t pro slu�bu.", "Pon�en� datab�zov�ch kv�t pro slu�bu se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, create_service_tasks_batch,													19,1,6,1, "Vytvo�en� d�vky �loh.", "Vytvo�en� d�vky �loh se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_service_tasks_batch,													19,1,6,2, "Z�sk�n� d�vky �loh.", "Z�sk�n� d�vky �loh se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, process_service_task,														19,1,6,3, "Zpracov�n� �lohy.", "Zpracov�n� �lohy se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, service_sign_dnssec,														19,1,7,1, "Podeps�n� z�ny DNSSEC.", "Podeps�n� z�ny DNSSEC se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, service_unsign_dnssec,														19,1,7,2, "Odpodeps�n� z�ny DNSSEC.", "Odpodeps�n� z�ny DNSSEC se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_user_domain_lists,														19,1,8,1, "Z�sk�n� u�ivatelsk�ch seznam� dom�n.", "Z�sk�n� u�ivatelsk�ch seznam� dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_user_domain_list,													19,1,8,2, "Vytvo�en� u�ivatelsk�ho seznamu dom�n.", "Vytvo�en� u�ivatelsk�ho seznamu dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_user_domain_list,														19,1,8,3, "Z�sk�n� u�ivatelsk�ho seznamu dom�n.", "Z�sk�n� u�ivatelsk�ho seznamu dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_user_domain_list,													19,1,8,4, "�prava u�ivatelsk�ho seznamu dom�n.", "�prava u�ivatelsk�ho seznamu dom�n se nezda�ila.") \
	MDESC2(c, zcc_cmsm, delete_user_domain_list,													19,1,8,5, "Zru�en� u�ivatelsk�ho seznamu dom�n.", "Zru�en� u�ivatelsk�ho seznamu dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, add_domain_to_user_domain_list,												19,1,8,6, "P�id�n� dom�ny do u�ivatelsk�ho seznamu dom�n.", "P�id�n� dom�ny do u�ivatelsk�ho seznamu dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_domain_from_user_domain_list,										19,1,8,7, "Zru�en� dom�ny z u�ivatelsk�ho seznamu dom�n.", "Zru�en� dom�ny z u�ivatelsk�ho seznamu dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, domain_is_on_user_domain_list,												19,1,8,8, "Zji�t�n� zda je dom�na v u�ivatelsk�m seznamu dom�n.", "Zji�t�n� zda je dom�na v u�ivatelsk�m seznamu dom�n se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, create_order,																19,1,9,1, "Vytvo�en� objedn�vky.", "Vytvo�en� objedn�vky se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_order,																	19,1,9,2, "Z�sk�n� objedn�vky.", "Z�sk�n� objedn�vky se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, process_order_item,															19,1,9,3, "Zpracov�n� polo�ky v objedn�vce.", "Zpracov�n� polo�ky v objedn�vce se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, order_hosting,																19,1,9,4, "Objedn�n� hostingu.", "Objedn�n� hostingu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, order_cloud_server,															19,1,9,5, "Objedn�n� cloud serveru.", "Objedn�n� cloud serveru se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, assign_anonymous_order,														19,1,9,6, "P�i�azen� anonymn� objedn�vky.", "P�i�azen� anonymn� objedn�vky se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, process_order,																19,1,9,7, "Zpracov�n� objedn�vky.", "Zpracov�n� objedn�vky se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, order_create_group_payment,													19,1,9,8, "Vytvo�en� hromadn� v�zvy pro objedn�vku.", "Vytvo�en� hromadn� v�zvy pro objedn�vku se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, change_mailbox_count,														19,1,10,1, "Zm�na po�tu po�tovn�ch schr�nek.", "Zm�na po�tu po�tovn�ch schr�nek se nezda�ila.") \
	MDESC2(c, zcc_cmsm, change_mail_quota,															19,1,10,2, "Zm�na celkov� po�tovn� kv�ty.", "Zm�na celkov� po�tovn� kv�ty se nezda�ila.") \
\
	MDESC2(c, zcc_cmsm, change_web_quota,															19,1,11,1, "Zm�na webov� kv�ty.", "Zm�na webov� kv�ty se nezda�ila.") \
\
	MDESC2(c, zcc_cmsm, mojeid_handle_check,														19,1,12,1, "Kontrola dostupnosti u�ivatelsk�ho jm�na mojeID identity.", "Kontrola dostupnosti u�ivatelsk�ho jm�na mojeID identity se nezda�ila.") \
	MDESC2(c, zcc_cmsm, mojeid_register,															19,1,12,2, "Registrace nov� mojeID identity.", "Registrace nov� mojeID identity se nezda�ila.") \
\
	MDESC2(c, zcc_cmsm, update_zone_ipv6,															19,1,13,1, "Aktualizace z�ny dopln�n�m z�znam� IPv6.", "Aktualizace z�ny dopln�n�m z�znam� IPv6 se nezda�ila.") \
	MDESC2(c, zcc_cmsm, publish_zone,																19,1,13,2, "P�enesen� dns z�znam� na produk�n� dns server.", "P�enesen� dns z�znam� na produk�n� dns server se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, add_arecord_ipv6,															19,1,13,3, "P�id�n� odpov�daj�c�ho z�znamu IPv6 do z�ny.", "P�id�n� odpov�daj�c�ho z�znamu IPv6 do z�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, activate_ipv6,																19,1,13,4, "Aktivace IPv4 ze Zoner rozsahu pro podporu IPv6.", "Aktivace IPv4 ze Zoner rozsahu pro podporu IPv6 se nezda�ila.") \
	MDESC2(c, zcc_cmsm, dns_get_ip_ranges,															19,1,13,5, "Z�sk�n� seznamu IP rozsah�.", "Z�sk�n� seznamu IP rozsah� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, dns_get_ptr_records,														19,1,13,6, "Z�sk�n� seznamu PTR z�znam�.", "Z�sk�n� seznamu PTR z�znam� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, dns_get_ptr_record,															19,1,13,7, "Z�sk�n� PTR z�znamu.", "Z�sk�n� PTR z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, dns_update_ptr_record,														19,1,13,8, "�prava PTR z�znamu.", "�prava PTR z�znamu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, dns_rewrite_reverse_zone,													19,1,13,9, "Vygenerov�n� reverzn� z�ny.", "Vygenerov�n� reverzn� z�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, dns_get_zone,																19,1,13,10, "Z�sk�n� z�ny.", "Z�sk�n� z�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_arecord_ipv6,														19,1,13,11, "Odebr�n� odpov�daj�c�ho z�znamu IPv6 ze z�ny.", "Odebr�n� odpov�daj�c�ho z�znamu IPv6 ze z�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_zone,																19,1,13,12, "Smaz�n� z�ny z produk�n�ho dns serveru.", "Smaz�n� z�ny z produk�n�ho dns serveru se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, clear_zone,																	19,1,13,13, "Smaz�n� dns z�znam� z datab�ze.", "Smaz�n� dns z�znam� z datab�ze se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_dns_a_record,														19,1,13,14, "Vytvo�en� A z�znamu.", "Vytvo�en� A z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_dns_cname_record,													19,1,13,15, "Vytvo�en� CName z�znamu.", "Vytvo�en� CName z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_dns_aaaa_record,														19,1,13,16, "Vytvo�en� AAAA z�znamu.", "Vytvo�en� AAAA z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_dns_txt_record,														19,1,13,17, "Vytvo�en� TXT z�znamu.", "Vytvo�en� TXT z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_dns_mx_record,														19,1,13,18, "Vytvo�en� MX z�znamu.", "Vytvo�en� MX z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_dns_srv_record,														19,1,13,19, "Vytvo�en� SRV z�znamu.", "Vytvo�en� SRV z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_txt_records,															19,1,13,20, "Smaz�n� TXT z�znam� s dan�m hostname.", "Smaz�n� TXT z�znam� s dan�m hostname se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_a_record,															19,1,13,21, "Smaz�n� A z�znamu.", "Smaz�n� A z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, is_dns_zone_uptodate,														19,1,13,22, "Zobrazen� aktu�lnosti dns z�ny.", "Zobrazen� aktu�lnosti dns z�ny se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_a_record,															19,1,13,23, "�prava A z�znamu.", "�prava A z�znamu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, delete_cname_record,														19,1,13,24, "Smaz�n� CNAME z�znamu.", "Smaz�n� CNAME z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_cname_record,														19,1,13,25, "�prava CNAME z�znamu.", "�prava CNAME z�znamu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, delete_aaaa_record,															19,1,13,26, "Smaz�n� AAAA z�znamu.", "Smaz�n� AAAA z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_aaaa_record,															19,1,13,27, "�prava AAAA z�znamu.", "�prava AAAA z�znamu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, delete_mx_record,															19,1,13,28, "Smaz�n� MX z�znamu.", "Smaz�n� MX z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_mx_record,															19,1,13,29, "�prava MX z�znamu.", "�prava MX z�znamu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, is_dns_zone_managed,														19,1,13,30, "Ov��en�, �e dns z�na je spravov�na Zonerem.", "Ov��en�, �e dns z�na je spravov�na Zonerem se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_txt_record,															19,1,13,31, "�prava TXT z�znamu.", "�prava TXT z�znamu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, delete_txt_record,															19,1,13,32, "Smaz�n� TXT z�znamu.", "Smaz�n� TXT z�znamu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, convert_mail_cname_records,													19,1,13,33, "P�eveden� po�tovn�ch CNAME z�znam� na zoner.com.", "P�eveden� po�tovn�ch CNAME z�znam� na zoner.com se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_package,																19,1,14,1, "Z�sk�n� bal��ku.", "Z�sk�n� bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_packages_by_init,														19,1,14,2, "Z�sk�n� seznamu (ne)zah�jen�ch bal��k�.", "Z�sk�n� seznamu (ne)zah�jen�ch bal��k� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, init_package,																19,1,14,3, "Zah�jen� bal��ku.", "Zah�jen� bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, package_billing_update_notify,												19,1,14,4, "Ozn�men� o zm�n� po��te�n�ho data fakturace bal��ku.", "Ozn�men� o zm�n� po��te�n�ho data fakturace bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_all_packages,															19,1,14,5, "Z�sk�n� seznamu v�ech bal��k�.", "Z�sk�n� seznamu v�ech bal��k� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, package_payment_made_notify,												19,1,14,6, "Ozn�men� o proveden� platb� za bal��ek.", "Ozn�men� o proveden� platb� za bal��ek se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_packages_by_hwid,														19,1,14,7, "Z�sk�n� seznamu bal��k� podle HwId.", "Z�sk�n� seznamu bal��k� podle HwId se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_packages_by_server_name,												19,1,14,8, "Z�sk�n� seznamu bal��k� podle n�zvu serveru.", "Z�sk�n� seznamu bal��k� podle n�zvu serveru se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, merge_packages,																19,1,14,9, "Slou�en� dvou bal��k� do jednoho.", "Slou�en� dvou bal��k� do jednoho se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_package,																19,1,14,10, "�prava bal��ku.", "�prava bal��ku se nezda�ila.") \
	MDESC2(c, zcc_cmsm, create_package,																19,1,14,11, "Vytvo�en� bal��ku.", "Vytvo�en� bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_package,																19,1,14,12, "Zru�en� bal��ku.", "Zru�en� bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, add_server_to_package,														19,1,14,13, "P�id�n� serveru do bal��ku.", "P�id�n� serveru do bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, remove_server_from_package,													19,1,14,14, "Zru�en� serveru z bal��ku.", "Zru�en� serveru z bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_package_invoice_request,												19,1,14,15, "Zru�en� po�adavku na fakturaci bal��ku.", "Zru�en� po�adavku na fakturaci bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_package_invoice_request,												19,1,14,16, "Vytvo�en� po�adavku na fakturaci bal��ku.", "Vytvo�en� po�adavku na fakturaci bal��ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_packages,																19,1,14,17, "Z�sk�n� seznamu bal��k�.", "Z�sk�n� seznamu bal��k� se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_variant,																19,1,15,1, "Z�sk�n� varianty.", "Z�sk�n� varianty se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_variants_on_menu,														19,1,15,2, "Z�sk�n� seznamu variant v nab�dce.", "Z�sk�n� seznamu variant v nab�dce se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_variants_for_upgrade,													19,1,15,3, "Z�sk�n� seznamu variant pro ugrade.", "Z�sk�n� seznamu variant pro ugrade se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_all_variants_for_upgrade,												19,1,15,4, "Z�sk�n� seznamu v�ech variant pro ugrade.", "Z�sk�n� seznamu v�ech variant pro ugrade se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_all_variants_with_monthly_fee,											19,1,15,5, "Z�sk�n� seznamu v�ech placen�ch variant.", "Z�sk�n� seznamu v�ech placen�ch variant se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_variant_config,															19,1,15,6, "Z�sk�n� konfigurace varianty.", "Z�sk�n� konfigurace varianty se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_variants,																19,1,15,7, "Z�sk�n� seznamu variant.", "Z�sk�n� seznamu variant se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_credentials,															19,1,16,1, "Z�sk�n� p�ihla�ovac�ch �daj� k ��tu.", "Z�sk�n� p�ihla�ovac�ch �daj� k ��tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_credentials,															19,1,16,2, "Zm�na p�ihla�ovac�ch �daj� k ��tu.", "Zm�na p�ihla�ovac�ch �daj� k ��tu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, update_alt_credentials,														19,1,16,3, "Zm�na alternativn�ch p�ihla�ovac�ch �daj�.", "Zm�na alternativn�ch p�ihla�ovac�ch �daj� se nezda�ila.") \
	MDESC2(c, zcc_cmsm, delete_alt_credentials,														19,1,16,4, "Zru�en� alternativn�ch p�ihla�ovac�ch �daj�.", "Zru�en� alternativn�ch p�ihla�ovac�ch �daj� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_alt_credentials,														19,1,16,5, "Vytvo�en� alternativn�ch p�ihla�ovac�ch �daj�.", "Vytvo�en� alternativn�ch p�ihla�ovac�ch �daj� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, bind_alt_credentials,														19,1,16,6, "P�ipojen� alternativn�ch p�ihla�ovac�ch �daj�.", "P�ipojen� alternativn�ch p�ihla�ovac�ch �daj� se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_tld_fee_tlds,															19,1,17,1, "Z�sk�n� seznamu tld z cen�ku dom�n.", "Z�sk�n� seznamu tld z cen�ku dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fees_for_users,														19,1,17,2, "Z�sk�n� cen�ku dom�n pro vybran� u�ivatele.", "Z�sk�n� cen�ku dom�n pro vybran� u�ivatele se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fees_for_categories,												19,1,17,3, "Z�sk�n� cen�ku dom�n pro u�ivatelsk� kategorie.", "Z�sk�n� cen�ku dom�n pro u�ivatelsk� kategorie se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fees_for_branches,													19,1,17,4, "Z�sk�n� cen�ku dom�n pro pobo�ky.", "Z�sk�n� cen�ku dom�n pro pobo�ky se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_tld_fee,																19,1,17,5, "Vytvo�en� nov� polo�ky v cen�ku dom�n.", "Vytvo�en� nov� polo�ky v cen�ku dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, delete_tld_fee,																19,1,17,6, "Zru�en� polo�ky v cen�ku dom�n.", "Zru�en� polo�ky v cen�ku dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fee,																19,1,17,7, "Z�sk�n� polo�ky v cen�ku dom�n.", "Z�sk�n� polo�ky v cen�ku dom�n se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, update_tld_fee,																19,1,17,8, "�prava ��stky u polo�ky v cen�ku dom�n.", "�prava ��stky u polo�ky v cen�ku dom�n se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_basic_tld_fees_for_branch,												19,1,17,9, "Z�sk�n� z�kladn�ho cen�ku dom�n pro pobo�ku.", "Z�sk�n� z�kladn�ho cen�ku dom�n pro pobo�ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fee_extra_tlds,														19,1,17,10, "Z�sk�n� seznamu tld z cen�ku dom�n, kter� maj� nastaveny individu�ln� ceny pro u�ivatele �i kategorie.", "Z�sk�n� seznamu tld z cen�ku dom�n, kter� maj� nastaveny individu�ln� ceny pro u�ivatele �i kategorie se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_pricelist_tld,														19,1,17,11, "P�id�n� nov� TLD do cen�ku.", "P�id�n� nov� TLD do cen�ku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_tld_fee_amount_last_change,												19,1,17,12, "Z�sk�n� datumu posledn� zm�ny v cen�ku dom�n.", "Z�sk�n� datumu posledn� zm�ny v cen�ku dom�n se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, update_end_report_message_box,												19,1,18,1, "�prava z�v�re�n� zpr�vy v message boxu.", "�prava z�v�re�n� zpr�vy v message boxu se nezda�ila.") \
\
	MDESC2(c, zcc_cmsm, deploy_cloud_server,														19,1,19,1, "Nasazen� cloud serveru.", "Nasazen� cloud serveru se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_server,																	19,1,19,2, "Z�sk�n� serveru.", "Z�sk�n� serveru se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_servers,																19,1,19,3, "Z�sk�n� seznamu server�.", "Z�sk�n� seznamu server� se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, invoice_request_cancelled_notify,											19,1,20,1, "Ozn�men� o zru�en� faktura�n�ho po�adavku.", "Ozn�men� o zru�en� faktura�n�ho po�adavku se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, invoice_request_paid_notify,												19,1,20,2, "Ozn�men� o uhrazen� faktura�n�ho po�adavku. ", "Ozn�men� o uhrazen� faktura�n�ho po�adavku se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, reward_old_invoicing_payment_notify,										19,1,21,1, "Ozn�men� pro syst�m odm�n o platb� ze star�ho faktura�n�ho syst�mu.", "Ozn�men� pro syst�m odm�n o platb� ze star�ho faktura�n�ho syst�mu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, reward_new_invoicing_payment_notify,										19,1,21,2, "Ozn�men� pro syst�m odm�n o platb� z nov�ho faktura�n�ho syst�mu.", "Ozn�men� pro syst�m odm�n o platb� z nov�ho faktura�n�ho syst�mu se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_certificates,															19,1,22,1, "Z�sk�n� seznamu certifik�t�.", "Z�sk�n� seznamu certifik�t� se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_certificate,															19,1,22,2, "Vytvo�en� certifik�tu.", "Vytvo�en� certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_certificate,															19,1,22,3, "Z�sk�n� certifik�tu.", "Z�sk�n� certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_private_key,												19,1,22,4, "Z�sk�n� priv�tn�ho kl��e certifik�tu.", "Z�sk�n� priv�tn�ho kl��e certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, symantec_send_post_request,													19,1,22,5, "Posl�n� POST ��dosti na Symantec.", "Posl�n� POST ��dosti na Symantec se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_binding_for_service,										19,1,22,6, "Z�sk�n� instalace certifik�tu.", "Z�sk�n� instalace certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, install_certificate,														19,1,22,7, "Instalace certifik�tu.", "Instalace certifik�tu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, certificate_installation_possible,											19,1,22,8, "Ov��en� mo�nosti instalace certifik�tu.", "Ov��en� mo�nosti instalace certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, uninstall_certificate,														19,1,22,9, "Odinstalace certifik�tu.", "Odinstalace certifik�tu se nezda�ila.") \
	MDESC2(c, zcc_cmsm, get_certificate_domains,													19,1,22,10, "Z�sk�n� seznamu dom�n z certifik�tu.", "Z�sk�n� seznamu dom�n z certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_binding,													19,1,22,11, "Z�sk�n� instalace certifik�tu.", "Z�sk�n� instalace certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_for_cn,														19,1,22,12, "Z�sk�n� certifik�tu pro CN.", "Z�sk�n� certifik�tu pro CN se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_pfx,														19,1,22,13, "Z�sk�n� .pfx souboru certifik�tu.", "Z�sk�n� .pfx souboru certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, create_commercial_certificate,												19,1,22,14, "Vytvo�en� komer�n�ho certifik�tu.", "Vytvo�en� komer�n�ho certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, insert_certificate,															19,1,22,15, "Vlo�en� certifik�tu.", "Vlo�en� certifik�tu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_certificate_installable_domains,										19,1,22,16, "Z�sk�n� seznamu dom�n, pro kter� lze instalovat certifik�t.", "Z�sk�n� seznamu dom�n, pro kter� lze instalovat certifik�t se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, renew_certificate,															19,1,22,17, "Obnoven� certifik�tu.", "Obnoven� certifik�tu se nezda�ilo.") \
\
	MDESC2(c, zcc_cmsm, get_eet_bills,																19,1,23,1, "Z�sk�n� seznamu EET ��tenek.", "Z�sk�n� seznamu EET ��tenek se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, assign_credit_eet_bill,														19,1,23,2, "P�i�azen� EET ��tenky z kreditn�ho syst�mu.", "P�i�azen� EET ��tenky z kreditn�ho syst�mu se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_eet_bill_info,															19,1,23,3, "Z�sk�n� podrobnost� o EET ��tence.", "Z�sk�n� podrobnost� o EET ��tence se nezda�ilo.") \
	MDESC2(c, zcc_cmsm, get_eet_bill,																19,1,23,4, "Z�sk�n� EET ��tenky.", "Z�sk�n� EET ��tenky se nezda�ilo.") \


#define ZONERCONTROLCENTER_RESP(c) \
	MDESC(c, zcc_resp, unknown_message,																19,0,0,30001, "Byla zasl�na nezn�m� zpr�va.") \
	MDESC(c, zcc_resp, access_denied,																19,0,0,30002, "Nem�te opr�vn�n� p��stupu k dan� zpr�v�.") \
	MDESC(c, zcc_resp, client_authentication_failed,												19,0,0,30003, "P�ihl�en� cms klienta nebylo �sp�n�.") \
	MDESC(c, zcc_resp, user_authentication_failed,													19,0,0,30004, "P�ihl�en� u�ivatele nebylo �sp�n�.") \
	MDESC(c, zcc_resp, uknown_error_occurred,														19,0,0,30005, "Nastala nezn�m� chyba.") \
	MDESC(c, zcc_resp, remote_call_failed,															19,0,0,30006, "Selhalo vzd�len� vol�n�.") \
	MDESC(c, zcc_resp, operations_insert_failed,													19,0,0,30007, "Selhalo vlo�en� akc�.") \
	MDESC(c, zcc_resp, sql_exception,																19,0,0,30008, "Nastala sql vyj�mka.") \
	MDESC(c, zcc_resp, unxpected_exception,															19,0,0,30009, "Nastala neo�ek�van� vyj�mka.") \
	MDESC(c, zcc_resp, user_id_not_valid,															19,0,0,30010, "Neplatn� identifik�tor u�ivatele.") \
\
	MDESC(c, zcc_resp, search_criterion_missing,													19,0,1,30001, "Chyb� krit�rium hled�n�.") \
\
	MDESC(c, zcc_resp, dns_snapshot_not_made,														19,1,0,30001, "Vytvo�en� snapshotu dns nebylo provedeno.") \
	MDESC(c, zcc_resp, dns_snapshot_get_failed,														19,1,0,30002, "Z�sk�n� snapshotu dns se nezda�ilo.") \
\
	MDESC(c, zcc_resp, hotline_request_body_missing,												19,1,1,30001, "Chyb� t�lo po�adavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_inform_by_missing,											19,1,1,30002, "Chyb� zp�sob zp�tn�ho informov�n� u po�adavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_phone_missing,												19,1,1,30003, "Chyb� telefon u po�adavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_phone_invalid,												19,1,1,30004, "Neplatn� telefon u po�adavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_email_missing,												19,1,1,30005, "Chyb� email u po�adavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_email_invalid,												19,1,1,30006, "Neplatn� email u po�adavku na hotline.") \
	MDESC(c, zcc_resp, hotline_request_sending_failed,												19,1,1,30007, "Nepoda�ilo se odeslat po�adavek na hotline.") \
	MDESC(c, zcc_resp, user_profile_updating_failed,												19,1,1,30008, "Nepoda�ilo se prov�st �pravu kontaktn�ch �daj� u�ivatele.") \
	MDESC(c, zcc_resp, user_billing_address_name_missing,											19,1,1,30009, "Chyb� n�zev spole�nosti u faktura�n� adresy.") \
	MDESC(c, zcc_resp, user_billing_address_name_max_length_exceeded,								19,1,1,30010, "N�zev spole�nosti u faktura�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_billing_address_street_missing,											19,1,1,30011, "Chyb� ulice u faktura�n� adresy.") \
	MDESC(c, zcc_resp, user_billing_address_street_max_length_exceeded,								19,1,1,30012, "Ulice u faktura�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_billing_address_city_missing,											19,1,1,30013, "Chyb� m�sto u faktura�n� adresy.") \
	MDESC(c, zcc_resp, user_billing_address_city_max_length_exceeded,								19,1,1,30014, "M�sto u faktura�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_billing_address_zip_missing,											19,1,1,30015, "Chyb� ps� u faktura�n� adresy.") \
	MDESC(c, zcc_resp, user_billing_address_zip_max_length_exceeded,								19,1,1,30016, "Ps� u faktura�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_delivery_address_name_missing,											19,1,1,30017, "Chyb� n�zev spole�nosti u koresponden�n� adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_name_max_length_exceeded,								19,1,1,30018, "N�zev spole�nosti u koresponden�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_delivery_address_street_missing,										19,1,1,30019, "Chyb� ulice u koresponden�n� adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_street_max_length_exceeded,							19,1,1,30020, "Ulice u koresponden�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_delivery_address_city_missing,											19,1,1,30021, "Chyb� m�sto u koresponden�n� adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_city_max_length_exceeded,								19,1,1,30022, "M�sto u koresponden�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_delivery_address_zip_missing,											19,1,1,30023, "Chyb� ps� u koresponden�n� adresy.") \
	MDESC(c, zcc_resp, user_delivery_address_zip_max_length_exceeded,								19,1,1,30024, "Ps� u koresponden�n� adresy p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_identification_max_length_exceeded,										19,1,1,30025, "I� p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_vat_identification_max_length_exceeded,									19,1,1,30026, "DI� p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_bank_max_length_exceeded,												19,1,1,30027, "Bankovn� spojen� p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_fax_max_length_exceeded,												19,1,1,30028, "Fax p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_fax_invalid,															19,1,1,30029, "Neplatn� fax.") \
	MDESC(c, zcc_resp, user_authorized_person_before_name_titles_max_length_exceeded,				19,1,1,30030, "Tituly p�ed jm�nem opr�vn�n� osoby p�ekra�uj� povolenou d�lku.") \
	MDESC(c, zcc_resp, user_authorized_person_first_name_missing,									19,1,1,30031, "Chyb� jm�no opr�vn�n� osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_first_name_max_length_exceeded,						19,1,1,30032, "Jm�no opr�vn�n� osoby p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_authorized_person_last_name_missing,									19,1,1,30033, "Chyb� p��jmen� opr�vn�n� osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_last_name_max_length_exceeded,						19,1,1,30034, "P��jmen� opr�vn�n� osoby p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_authorized_person_after_name_titles_max_length_exceeded,				19,1,1,30035, "Tituly za jm�nem opr�vn�n� osoby p�ekra�uj� povolenou d�lku.") \
	MDESC(c, zcc_resp, user_authorized_person_phone_missing,										19,1,1,30036, "Chyb� telefon opr�vn�n� osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_phone_max_length_exceeded,							19,1,1,30037, "Telefon opr�vn�n� osoby p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_authorized_person_phone_invalid,										19,1,1,30038, "Neplatn� telefon opr�vn�n� osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_email_missing,										19,1,1,30039, "Chyb� e-mail opr�vn�n� osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_email_max_length_exceeded,							19,1,1,30040, "E-mail opr�vn�n� osoby p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_authorized_person_email_invalid,										19,1,1,30041, "Neplatn� e-mail opr�vn�n� osoby.") \
	MDESC(c, zcc_resp, user_authorized_person_duplicate,											19,1,1,30042, "Stejn� opr�vn�n� osoba.") \
	MDESC(c, zcc_resp, user_authorized_person_at_least_one_must_be_defined,							19,1,1,30043, "Mus� b�t ustanovena alespo� jedna opr�vn�n� osoba.") \
	MDESC(c, zcc_resp, hotline_request_subject_missing,												19,1,1,30044, "Chyb� p�edm�t po�adavku na hotline.") \
	MDESC(c, zcc_resp, sms_area_code_missing,														19,1,1,30045, "Chyb� ��slo p�edvolby.") \
	MDESC(c, zcc_resp, sms_area_code_invalid,														19,1,1,30046, "��slo p�edvolby nen� platn�.") \
	MDESC(c, zcc_resp, sms_phone_invalid,															19,1,1,30047, "Telefonn� ��slo nen� platn�.") \
	MDESC(c, zcc_resp, sms_phone_same,																19,1,1,30048, "Telefonn� ��slo je nezm�n�n�.") \
	MDESC(c, zcc_resp, tld_price_missing,															19,1,1,30049, "Cena pro dan� TLD chyb�.") \
	MDESC(c, zcc_resp, user_some_services_exist,													19,1,1,30050, "Na ��tu u�ivatele existuj� n�jak� slu�by.") \
	MDESC(c, zcc_resp, user_has_system_role,														19,1,1,30051, "U�ivatel m� admin pr�va.") \
	MDESC(c, zcc_resp, user_delegated_services_exist,												19,1,1,30052, "Na ��tu u�ivatele existuj� delegovan� slu�by.") \
	MDESC(c, zcc_resp, user_undeletable,															19,1,1,30053, "��et u�ivatele je nesmazateln�.") \
	MDESC(c, zcc_resp, user_creation_failed,														19,1,1,30054, "Vytvo�en� u�ivatele selhalo.") \
	MDESC(c, zcc_resp, user_note_type_not_valid,													19,1,1,30055, "Neplatn� typ pozn�mky u u�ivatele.") \
	MDESC(c, zcc_resp, user_not_found,																19,1,1,30056, "U�ivatel nebyl nalezen.") \
	MDESC(c, zcc_resp, note_of_same_type_already_exists,											19,1,1,30057, "Pozn�mka stejn�ho typu ji� existuje.") \
	MDESC(c, zcc_resp, user_note_not_found,															19,1,1,30058, "Pozn�mka u u�ivatele nebyla nalezena.") \
	MDESC(c, zcc_resp, user_already_exists,															19,1,1,30059, "��et ji� existuje.") \
	MDESC(c, zcc_resp, user_email_einvoice_missing,													19,1,1,30060, "Chyb� faktura�n� e-mail.") \
	MDESC(c, zcc_resp, user_email_einvoice_max_length_exceeded,										19,1,1,30061, "Faktura�n� e-mail p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_email_einvoice_invalid,													19,1,1,30062, "Neplatn� faktura�n� e-mail.") \
	MDESC(c, zcc_resp, user_some_servers_exist,														19,1,1,30063, "Na ��tu u�ivatele existuj� n�jak� servery.") \
	MDESC(c, zcc_resp, event_type_invalid,															19,1,1,30064, "Typ ud�losti nen� platn�.") \
	MDESC(c, zcc_resp, message_template_not_found,													19,1,1,30065, "�ablona zpr�vy nebyla nalezena.") \
	MDESC(c, zcc_resp, message_template_not_implemented,											19,1,1,30066, "�ablonu zpr�vy zat�m nelze pou��t.") \
	MDESC(c, zcc_resp, message_empty,																19,1,1,30067, "Zpr�va je pr�zdn�.") \
	MDESC(c, zcc_resp, admin_name_missing,															19,1,1,30068, "Chyb� jm�no administr�tora.") \
\
	MDESC(c, zcc_resp, debt_not_found,																19,1,2,30001, "Pohled�vka nebyla nalezena.") \
	MDESC(c, zcc_resp, debt_already_paid,															19,1,2,30002, "Pohled�vka byla ji� uhrazena.") \
	MDESC(c, zcc_resp, more_debts_exist,															19,1,2,30003, "Existuje v�ce pohled�vek.") \
	MDESC(c, zcc_resp, credit_system_not_available,													19,1,2,30004, "Kreditn� ��et nen� aktivov�n.") \
	MDESC(c, zcc_resp, low_credit,																	19,1,2,30005, "Nedostate�n� kredit na kreditn�m ��tu.") \
	MDESC(c, zcc_resp, credit_pay_unspecified_error,												19,1,2,30006, "Platba se nezda�ila z jin�ch p���in.") \
\
	MDESC(c, zcc_resp, expires_within_days_out_of_range,											19,1,3,30001, "Hodnota polo�ky expires_within_days je mimo povolen� rozsah -720 a� 720.") \
	MDESC(c, zcc_resp, domain_name_check_failed,													19,1,3,30002, "Zji�t�n� dostupnosti dom�ny selhalo.") \
	MDESC(c, zcc_resp, tld_years_out_of_bounds,														19,1,3,30003, "Hodnota rok� pro dan� tld je mimo povolen� meze.") \
	MDESC(c, zcc_resp, tld_min_years_greater_than_max_years,										19,1,3,30004, "Hodnota min. rok� pro dan� tld je v�t�� ne� hodnota max. rok�.") \
	MDESC(c, zcc_resp, tld_domain_length_out_of_bounds,												19,1,3,30005, "D�lka dom�ny pro dan� tld je mimo povolen� meze.") \
	MDESC(c, zcc_resp, tld_min_domain_length_greater_than_max_domain_length,						19,1,3,30006, "Hodnota min. d�lky dom�ny pro dan� tld je v�t�� ne� hodnota max. d�lky dom�ny.") \
	MDESC(c, zcc_resp, tld_time_window_out_of_bounds,												19,1,3,30007, "�asov� okno pro dan� tld je mimo povolen� meze.") \
	MDESC(c, zcc_resp, tld_invalid,																	19,1,3,30008, "Neplatn� tld.") \
	MDESC(c, zcc_resp, domain_name_owner_not_found,													19,1,3,30009, "Vlastn�k dom�ny nebyl nalezen.") \
	MDESC(c, zcc_resp, contact_handle_not_found,													19,1,3,30010, "Handle kontaktu nebyl nalezen.") \
	MDESC(c, zcc_resp, contact_role_not_valid,														19,1,3,30011, "Role kontaktu nen� validn�.") \
	MDESC(c, zcc_resp, tld_not_found,																19,1,3,30012, "Tld nebylo nalezeno.") \
	MDESC(c, zcc_resp, registrar_already_defined,													19,1,3,30013, "Registr�tor je ji� definov�n.") \
	MDESC(c, zcc_resp, registrar_id_unknown,														19,1,3,30014, "Id registr�tora je nezn�m�.") \
	MDESC(c, zcc_resp, registrar_id_cannot_be_used,													19,1,3,30015, "Id registr�tora nelze pou��t.") \
	MDESC(c, zcc_resp, auth_info_sending_failed,													19,1,3,30016, "Posl�n� autoriza�n�ho k�du pro p�evod dom�ny selhalo.") \
	MDESC(c, zcc_resp, renew_in_progress,															19,1,3,30017, "Pr�v� prob�ha proces obnovy dom�ny.") \
\
	MDESC(c, zcc_resp, database_type_not_defined,													19,1,4,30001, "Nezn�m� typ datab�ze.") \
	MDESC(c, zcc_resp, database_type_not_available,													19,1,4,30002, "Typ datab�ze nelze v dan�m p��pad� pou��t.") \
	MDESC(c, zcc_resp, database_data_file_not_available,											19,1,4,30003, "Datov� soubor nelze u t�to datab�ze pou��t.") \
	MDESC(c, zcc_resp, database_server_not_available,												19,1,4,30004, "Pro dan� typ datab�ze nen� p�i�azen server.") \
	MDESC(c, zcc_resp, database_name_not_available,													19,1,4,30005, "N�zev datab�ze nelze pou��t.") \
	MDESC(c, zcc_resp, database_name_not_valid,														19,1,4,30006, "N�zev datab�ze nen� validn�.") \
	MDESC(c, zcc_resp, database_creation_failed,													19,1,4,30007, "Vytvo�en� datab�ze selhalo.") \
	MDESC(c, zcc_resp, database_user_creation_failed,												19,1,4,30008, "Vytvo�en� u�ivatele datab�ze selhalo.") \
	MDESC(c, zcc_resp, database_operations_failed,													19,1,4,30009, "Vytvo�en� operac� pro vytvo�en� datab�ze selhalo.") \
	MDESC(c, zcc_resp, database_name_max_length_exceeded,											19,1,4,30010, "N�zev datab�ze p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, database_user_password_length_out_of_bounds,									19,1,4,30011, "D�lka hesla u�ivatele datab�ze mimo stanoven� limit.") \
	MDESC(c, zcc_resp, target_server_not_valid,														19,1,4,30012, "C�lov� server nelze pou��t.") \
	MDESC(c, zcc_resp, database_state_not_ok,														19,1,4,30013, "Datab�ze se nenach�z� ve stavu OK.") \
	MDESC(c, zcc_resp, operation_on_dba_server_failed,												19,1,4,30014, "Operace na datab�zov�m serveru selhala.") \
	MDESC(c, zcc_resp, sql_transact_failed,															19,1,4,30015, "Sql transakce selhala.") \
	MDESC(c, zcc_resp, dns_update_impossible,														19,1,4,30016, "�prava dns nen� mo�n�.") \
	MDESC(c, zcc_resp, dns_operation_failed,														19,1,4,30017, "Operace na dns serveru selhala.") \
	MDESC(c, zcc_resp, target_and_source_servers_identical,											19,1,4,30018, "C�lov� server je stejn� jako zdrojov�.") \
	MDESC(c, zcc_resp, database_not_found,															19,1,4,30019, "Datab�ze nebyla nalezena.") \
	MDESC(c, zcc_resp, database_count_exceeded,														19,1,4,30020, "Po�et p�edplacen�ch datab�z� vy�erp�n.") \
	MDESC(c, zcc_resp, database_space_exceeded,														19,1,4,30021, "P�edplacen� diskov� prostor pro datab�ze vy�erp�n.") \
	MDESC(c, zcc_resp, database_size_too_small,														19,1,4,30022, "Velikost datab�ze je p��li� mal�.") \
	MDESC(c, zcc_resp, database_size_too_big,														19,1,4,30023, "Velikost datab�ze je p��li� velk�.") \
\
	MDESC(c, zcc_resp, service_not_found,															19,1,5,30001, "Slu�ba nebyla nalezena.") \
	MDESC(c, zcc_resp, service_account_not_found,													19,1,5,30002, "��et slu�by nebyl nalezen.") \
	MDESC(c, zcc_resp, email_not_authorized_for_service,											19,1,5,30003, "Email nen� pro danou slu�bu autorizovan�.") \
	MDESC(c, zcc_resp, service_state_not_acceptable,												19,1,5,30004, "Slu�ba nen� v p�ijateln�m stavu.") \
	MDESC(c, zcc_resp, service_has_no_mail,															19,1,5,30005, "Slu�ba neprovozuje po�tu.") \
	MDESC(c, zcc_resp, service_has_no_web,															19,1,5,30006, "Slu�ba neprovozuje web.") \
	MDESC(c, zcc_resp, url_not_valid,																19,1,5,30007, "Url nen� validn�.") \
	MDESC(c, zcc_resp, service_must_be_parked,														19,1,5,30008, "Slu�ba mus� b�t zaparkov�na.") \
	MDESC(c, zcc_resp, variant_not_defined,															19,1,5,30009, "Varianta nen� definov�na.") \
	MDESC(c, zcc_resp, service_payer_someone_else,													19,1,5,30010, "Nespr�vn� pl�tce za slu�bu.") \
	MDESC(c, zcc_resp, service_state_not_ok,														19,1,5,30011, "Slu�ba nen� ve stavu OK.") \
	MDESC(c, zcc_resp, upgrade_not_available,														19,1,5,30012, "Zm�na varianty nen� mo�n�.") \
	MDESC(c, zcc_resp, varcode_identical,															19,1,5,30013, "Nov� varianta je stejn� jako p�vodn�.") \
	MDESC(c, zcc_resp, service_paying_already,														19,1,5,30014, "Slu�ba ji� b�� v placen�m re�imu.") \
	MDESC(c, zcc_resp, payment_period_invalid,														19,1,5,30015, "Platebn� obdob� nen� platn�.") \
	MDESC(c, zcc_resp, bad_varcode,																	19,1,5,30016, "Variantu nelze pou��t.") \
	MDESC(c, zcc_resp, bad_domain_name,																19,1,5,30017, "Dom�nov� jm�no nelze pou��t.") \
	MDESC(c, zcc_resp, bad_user,																	19,1,5,30018, "Nespr�vn� u�ivatel.") \
	MDESC(c, zcc_resp, hosting_server_identical,													19,1,5,30019, "Dan� server pro hosting je shodn� s aktu�ln�m.") \
	MDESC(c, zcc_resp, bad_server,																	19,1,5,30020, "Dan� server nelze pou��t.") \
	MDESC(c, zcc_resp, service_has_already_mail,													19,1,5,30021, "Slu�ba m� ji� po�tu vytvo�enu.") \
	MDESC(c, zcc_resp, variant_has_no_mail,															19,1,5,30022, "Varianta neobsahuje po�tu.") \
	MDESC(c, zcc_resp, shared_ip_varcode_not_available,												19,1,5,30023, "Varianta bez vlastn� IP adresy nen� k dispozici.") \
	MDESC(c, zcc_resp, server_shared_ip_missing,													19,1,5,30024, "Server nem� nastavenu sd�lenou IP adresu.") \
	MDESC(c, zcc_resp, own_ip_varcode_not_available,												19,1,5,30025, "Varianta s vlastn� IP adresou nen� k dispozici.") \
	MDESC(c, zcc_resp, permission_not_valid,														19,1,5,30026, "Neplatn� opr�vn�n�.") \
	MDESC(c, zcc_resp, permission_already_delegated,												19,1,5,30027, "Opr�vn�n� ji� existuje.") \
	MDESC(c, zcc_resp, permission_not_found,														19,1,5,30028, "Opr�vn�n� nebylo nalezeno.") \
	MDESC(c, zcc_resp, already_operating_free,														19,1,5,30029, "Slu�ba ji� b�� zdarma.") \
	MDESC(c, zcc_resp, service_note_type_not_valid,													19,1,5,30030, "Neplatn� typ pozn�mky u slu�by.") \
	MDESC(c, zcc_resp, note_not_defined,															19,1,5,30031, "Pozn�mka nen� definov�na.") \
	MDESC(c, zcc_resp, service_note_not_found,														19,1,5,30032, "Pozn�mka u slu�by nebyla nalezena.") \
	MDESC(c, zcc_resp, service_app_pool_task_not_valid,												19,1,5,30033, "�loha pro aplika�n� pool slu�by nen� platn�.") \
	MDESC(c, zcc_resp, server_not_found,															19,1,5,30034, "Server nebyl nalezen.") \
	MDESC(c, zcc_resp, operation_on_server_failed,													19,1,5,30035, "Operace na serveru selhala.") \
	MDESC(c, zcc_resp, service_app_pool_not_found,													19,1,5,30036, "Aplika�n� pool slu�by nebyl nalezen.") \
	MDESC(c, zcc_resp, installatron_not_available,													19,1,5,30037, "Installatron nen� pro slu�bu dostupn�.") \
	MDESC(c, zcc_resp, variant_not_valid,															19,1,5,30038, "Varianta nen� platn�.") \
	MDESC(c, zcc_resp, parking_not_possible,														19,1,5,30040, "Slu�bu nelze zaparkovat.") \
	MDESC(c, zcc_resp, deletion_not_possible,														19,1,5,30041, "Slu�bu nelze smazat.") \
	MDESC(c, zcc_resp, reg_already_paid_but_not_registred,											19,1,5,30042, "Registrace dom�ny ji� uhrazena, ale registrace neprovedena.") \
	MDESC(c, zcc_resp, aliases_max_count_exceeded,													19,1,5,30043, "Po�et alias� dos�hl povolen�ho po�tu.") \
	MDESC(c, zcc_resp, bad_lock_state,																19,1,5,30044, "Stav z�mku nen� spr�vn�.") \
	MDESC(c, zcc_resp, not_ftp_account,																19,1,5,30045, "��et nen� ftp.") \
	MDESC(c, zcc_resp, service_permission_not_granted,												19,1,5,30046, "Pr�va ke slu�b� nebyla ud�lena.") \
	MDESC(c, zcc_resp, dns_not_ready,																19,1,5,30047, "Dns nen� p�ipravena.") \
	MDESC(c, zcc_resp, service_not_usable,															19,1,5,30048, "Slu�bu nelze pou��t.") \
	MDESC(c, zcc_resp, domain_name_not_managed,														19,1,5,30049, "Dom�na nen� Zonerem spravov�na. Nejsme registr�torem.") \
	MDESC(c, zcc_resp, domain_not_exists,															19,1,5,30050, "Dom�na v centru neexistuje.") \
	MDESC(c, zcc_resp, domain_name_managed,															19,1,5,30051, "Dom�na Zonerem spravov�na. Jsme registr�torem.") \
	MDESC(c, zcc_resp, transfer_pending,															19,1,5,30052, "Transfer zah�jen.") \
	MDESC(c, zcc_resp, service_db_quotas_no_change_required,										19,1,5,30053, "Zm�na kv�t nen� po�adov�na.") \
	MDESC(c, zcc_resp, db_count_quota_cannot_be_lower_than_created_db_count,						19,1,5,30054, "Limit po�tu datab�z� nem��e b�t men�� ne� po�et existuj�c�ch datab�z�.") \
	MDESC(c, zcc_resp, db_count_quota_cannot_be_lower_than_min_db_count,							19,1,5,30055, "Limit po�tu datab�z� nem��e b�t men�� ne� po�et datab�z�, kter� m� varianta k dispozici.") \
	MDESC(c, zcc_resp, db_space_quota_cannot_be_lower_than_allocated_db_space,						19,1,5,30056, "Limit celkov� velikosti datab�z� nem��e b�t men�� ne� sou�et aktu�ln� velikosti existuj�c�ch datab�z�.") \
	MDESC(c, zcc_resp, db_space_quota_cannot_be_lower_than_min_db_space,							19,1,5,30057, "Limit celkov� velikosti datab�z� nem��e b�t men�� ne� limit, kter� m� varianta k dispozici.") \
\
	MDESC(c, zcc_resp, service_task_type_unknown,													19,1,6,30001, "Nezn�m� typ �lohy.") \
	MDESC(c, zcc_resp, service_task_params_invalid,													19,1,6,30002, "Neplatn� parametry �lohy.") \
	MDESC(c, zcc_resp, service_task_permissions_denied,												19,1,6,30003, "Nem�te opr�vn�n� k vykon�n� dan� �lohy.") \
	MDESC(c, zcc_resp, service_task_unexpected_exception,											19,1,6,30004, "Nastala neo�ek�van� vyj�mka.") \
	MDESC(c, zcc_resp, service_task_parsing_error_failed,											19,1,6,30005, "Parsov�n� chyby selhalo.") \
	MDESC(c, zcc_resp, service_task_database_not_found,												19,1,6,30006, "Datab�ze nebyla nalezena.") \
\
	MDESC(c, zcc_resp, dnssec_not_available,														19,1,7,30001, "Pro dan� dom�nov� jm�no nen� DNSSEC k dispozici.") \
	MDESC(c, zcc_resp, dns_not_managed_dnssec_forbidden,											19,1,7,30002, "Dom�nov� jm�no nem� DNS spravov�no. DNSSEC nelze pou��t.") \
	MDESC(c, zcc_resp, dnssec_state_not_valid,														19,1,7,30003, "U dan�ho dom�nov�ho jm�na pr�v� prob�h� zm�na stavu DNSSEC.") \
	MDESC(c, zcc_resp, dnssec_operations_failed,													19,1,7,30004, "Vlo�en� operac� pro DNSSEC selhalo.") \
	MDESC(c, zcc_resp, domain_expired,																19,1,7,30005, "Dom�na expirovala.") \
\
	MDESC(c, zcc_resp, user_domain_list_name_missing,												19,1,8,30001, "Chyb� n�zev u�ivatelsk�ho seznamu dom�n.") \
	MDESC(c, zcc_resp, user_domain_list_name_max_length_exceeded,									19,1,8,30002, "N�zev u�ivatelsk�ho seznamu dom�n p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_domain_list_description_max_length_exceeded,							19,1,8,30003, "Popis u�ivatelsk�ho seznamu dom�n p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, user_domain_list_creation_failed,											19,1,8,30004, "Vytvo�en� u�ivatelsk�ho seznamu dom�n selhalo.") \
\
	MDESC(c, zcc_resp, order_item_not_knowing_how_to_process,										19,1,9,30001, "Nelze ur�it jak polo�ku v objedn�vce zpracovat.") \
	MDESC(c, zcc_resp, order_item_unable_to_parse_params,											19,1,9,30002, "Nelze parsovat parametry polo�ky v objedn�vce.") \
	MDESC(c, zcc_resp, order_item_domain_payer_someone_else,										19,1,9,30003, "Pl�tcem za dom�nu je jin� ��et ne� je uvedeno v objedn�vce.") \
	MDESC(c, zcc_resp, order_item_not_zoner_registrar,												19,1,9,30004, "Registr�torem dom�ny nen� Zoner.") \
	MDESC(c, zcc_resp, order_item_renew_in_progress,												19,1,9,30005, "Prodlou�en� platnosti dom�ny ji� bylo zah�jeno.") \
	MDESC(c, zcc_resp, order_item_years_to_renew_out_of_range,										19,1,9,30006, "Nelze prodlou�it platnost dom�ny o zvolen� po�et let.") \
	MDESC(c, zcc_resp, order_item_low_credit,														19,1,9,30007, "Na kreditn�m ��tu nen� dostatek kredit�.") \
	MDESC(c, zcc_resp, order_item_exception_occurred,												19,1,9,30008, "Vyskytly se pot�e p�i pr�ci s datab�z� nebo kreditn�m syst�mem.") \
	MDESC(c, zcc_resp, order_item_tld_not_supported,												19,1,9,30009, "TLD nen� podporov�no.") \
	MDESC(c, zcc_resp, order_item_owner_does_not_exist,												19,1,9,30010, "Kontakt uveden� jako vlastn�k neexistuje.") \
	MDESC(c, zcc_resp, order_item_owner_missing_data,												19,1,9,30011, "U vlastn�ka nejsou uvedeny v�echny pot�ebn� �daje.") \
	MDESC(c, zcc_resp, order_item_admin_does_not_exist,												19,1,9,30012, "Kontakt uveden� jako admin neexistuje.") \
	MDESC(c, zcc_resp, order_item_admin_missing_data,												19,1,9,30013, "U admina nejsou uvedeny v�echny pot�ebn� �daje.") \
	MDESC(c, zcc_resp, order_item_tech_does_not_exist,												19,1,9,30014, "Kontakt uveden� jako tech neexistuje.") \
	MDESC(c, zcc_resp, order_item_tech_missing_data,												19,1,9,30015, "U techa nejsou uvedeny v�echny pot�ebn� �daje.") \
	MDESC(c, zcc_resp, order_item_domain_name_not_available,										19,1,9,30016, "Dom�nov� jm�no nelze pou��t.") \
	MDESC(c, zcc_resp, order_item_service_state_not_ok,												19,1,9,30017, "Slu�ba mus� b�t ve stavu OK.") \
	MDESC(c, zcc_resp, order_item_varcode_identical,												19,1,9,30018, "C�lov� varianta je stejn� jako aktu�ln�.") \
	MDESC(c, zcc_resp, order_item_upgrade_not_available,											19,1,9,30019, "Upgrade nelze prov�st.") \
	MDESC(c, zcc_resp, order_item_payment_period_invalid,											19,1,9,30020, "Platebn� obdob� je neplatn�.") \
	MDESC(c, zcc_resp, order_item_bad_user,															19,1,9,30021, "Neexistuj�c� u�ivatel.") \
	MDESC(c, zcc_resp, order_item_bad_varcode,														19,1,9,30022, "Dan� k�d varianty nelze pou��t.") \
	MDESC(c, zcc_resp, order_item_bad_domain_name,													19,1,9,30023, "Dom�nov� jm�no nelze pou��t.") \
	MDESC(c, zcc_resp, order_item_bad_registration_data,											19,1,9,30024, "�daje pro registraci dom�nov�ho jm�na nelze pou��t.") \
	MDESC(c, zcc_resp, order_item_registering_contact_failed,										19,1,9,30025, "Registrace kontaktu selhala.") \
	MDESC(c, zcc_resp, order_item_dns_conflict,														19,1,9,30026, "V dns ji� jm�no existuje.") \
	MDESC(c, zcc_resp, order_item_hosting_server_identical,											19,1,9,30027, "Dan� server pro hosting je shodn� s aktu�ln�m.") \
	MDESC(c, zcc_resp, order_item_bad_server,														19,1,9,30028, "Dan� server nelze pou��t.") \
	MDESC(c, zcc_resp, order_item_inpage_package_not_available,										19,1,9,30029, "Dan� inapge bal��ek nelze pou��t.") \
	MDESC(c, zcc_resp, cloud_server_program_not_valid,												19,1,9,30030, "Program cloud serveru je neplatn�.") \
	MDESC(c, zcc_resp, cloud_server_opsys_not_valid,												19,1,9,30031, "Opera�n� syst�m cloud serveru je neplatn�.") \
	MDESC(c, zcc_resp, order_item_bad_voucher_code,													19,1,9,30032, "Slevov� kup�n nelze pou��t.") \
	MDESC(c, zcc_resp, order_item_transfer_failed,													19,1,9,30033, "Transfer se nepoda�ilo prov�st.") \
	MDESC(c, zcc_resp, anonymous_order_assigning_impossible,										19,1,9,30034, "P�i�azen� anonymn� objedn�vky nen� mo�n�.") \
	MDESC(c, zcc_resp, transfer_failed,																19,1,9,30035, "P�evod n�kter� dom�ny selhal.") \
	MDESC(c, zcc_resp, create_group_payment_failed,													19,1,9,30036, "Vytvo�en� hromadn� platby se nezda�ilo.") \
\
	MDESC(c, zcc_resp, mailbox_count_below_default,													19,1,10,30001, "Po�et po�tovn�ch schr�nek je ni��� ne� ur�uje varianta.") \
	MDESC(c, zcc_resp, operation_on_mailserver_failed,												19,1,10,30002, "Vykon�n� operace na po�tovn�m serveru selhalo.") \
	MDESC(c, zcc_resp, mail_quota_below_default,													19,1,10,30003, "Celkov� po�tovn� kv�ta je ni��� ne� ur�uje varianta.") \
\
	MDESC(c, zcc_resp, web_quota_below_default,														19,1,11,30001, "Webov� kv�ta je ni��� ne� ur�uje varianta.") \
	MDESC(c, zcc_resp, operation_on_webserver_failed,												19,1,11,30002, "Vykon�n� operace na webov�m serveru selhalo.") \
	MDESC(c, zcc_resp, web_quota_below_min,															19,1,11,30003, "Webov� kv�ta je ni��� ne� ur�uje minimum u varianty.") \
\
	MDESC(c, zcc_resp, mojeid_handle_check_failed,													19,1,12,30001, "Kontrola dostupnosti u�ivatelsk�ho jm�na mojeID identity selhala.") \
	MDESC(c, zcc_resp, mojeid_username_missing,														19,1,12,30002, "Chyb� u�ivatelsk� jm�no mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_username_max_length_exceeded,											19,1,12,30003, "U�ivatelsk� jm�no mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_first_name_missing,													19,1,12,30004, "Chyb� jm�no mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_first_name_max_length_exceeded,										19,1,12,30005, "Jm�no mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_last_name_missing,													19,1,12,30006, "Chyb� p��jmen� mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_last_name_max_length_exceeded,										19,1,12,30007, "P��jmen� mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_address_street_missing,												19,1,12,30008, "Chyb� ulice mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_street_max_length_exceeded,									19,1,12,30009, "Ulice mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_address_city_missing,													19,1,12,30010, "Chyb� m�sto mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_city_max_length_exceeded,										19,1,12,30011, "M�sto mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_address_postal_code_missing,											19,1,12,30012, "Chyb� PS� mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_postal_code_max_length_exceeded,								19,1,12,30013, "PS� mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_address_country_missing,												19,1,12,30014, "Chyb� zem� mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_address_country_max_length_exceeded,									19,1,12,30015, "Zem� mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_address_country_invalid,												19,1,12,30016, "Neplatn� zem� mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_email_missing,														19,1,12,30017, "Chyb� e-mail mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_email_max_length_exceeded,											19,1,12,30018, "E-mail mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_email_invalid,														19,1,12,30019, "Neplatn� e-mail mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_phone_number_missing,													19,1,12,30020, "Chyb� telefon mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_phone_number_max_length_exceeded,										19,1,12,30021, "Telefon mojeID identity p�ekra�uje povolenou d�lku.") \
	MDESC(c, zcc_resp, mojeid_phone_number_invalid,													19,1,12,30022, "Neplatn� telefon mojeID identity.") \
	MDESC(c, zcc_resp, mojeid_register_error,														19,1,12,30023, "Do�lo k protokol�rn� chyb�.") \
	MDESC(c, zcc_resp, mojeid_register_exception,													19,1,12,30024, "Do�lo k vyj�mce.") \
	MDESC(c, zcc_resp, mojeid_register_failure,														19,1,12,30025, "Do�lo k regstra�n� chyb�.") \
\
	MDESC(c, zcc_resp, ipv4_not_found,																19,1,13,30001, "IPv4 nebyla nalezena.") \
	MDESC(c, zcc_resp, dns_domain_name_invalid,														19,1,13,30002, "Dom�nov� jm�no nen� platn�.") \
	MDESC(c, zcc_resp, dns_ptr_record_not_found,													19,1,13,30003, "PTR z�znam nebyl nalezen.") \
	MDESC(c, zcc_resp, dns_host_name_invalid,														19,1,13,30004, "N�zev hosta nen� platn�.") \
	MDESC(c, zcc_resp, ipv4_invalid,																19,1,13,30005, "IPv4 nen� platn�.") \
	MDESC(c, zcc_resp, dns_alias_name_invalid,														19,1,13,30006, "N�zev aliasu nen� platn�.") \
	MDESC(c, zcc_resp, ipv6_invalid,																19,1,13,30007, "IPv6 nen� platn�.") \
	MDESC(c, zcc_resp, dns_mail_server_name_invalid,												19,1,13,30008, "N�zev po�tovn�ho serveru nen� platn�.") \
	MDESC(c, zcc_resp, dns_name_invalid,															19,1,13,30009, "N�zev slu�by, protokolu a p��padn� cel� dom�ny nen� platn�.") \
	MDESC(c, zcc_resp, dns_target_invalid,															19,1,13,30010, "N�zev c�lov� dom�ny nen� platn�.") \
	MDESC(c, zcc_resp, dns_zone_not_managed,														19,1,13,30011, "Z�na nen� spravov�na na serverech Zoneru.") \
	MDESC(c, zcc_resp, dns_ttl_invalid,																19,1,13,30012, "TTL nen� platn�.") \
	MDESC(c, zcc_resp, dns_record_already_exists,													19,1,13,30013, "Dns z�znam ji� existuje.") \
	MDESC(c, zcc_resp, is_dns_zone_managed_failed,													19,1,13,30014, "Ov��en�, �e dns z�na je spravov�na Zonerem selhalo.") \
\
	MDESC(c, zcc_resp, package_class_invalid,														19,1,14,30001, "Neplatn� t��da bal��ku.") \
	MDESC(c, zcc_resp, package_payment_period_invalid,												19,1,14,30002, "Neplatn� platebn� obdob� bal��ku.") \
	MDESC(c, zcc_resp, package_not_found,															19,1,14,30003, "Bal��ek nenalezen.") \
	MDESC(c, zcc_resp, package_already_initialized,													19,1,14,30004, "Bal��ek ji� zah�jen.") \
	MDESC(c, zcc_resp, package_not_initialized,														19,1,14,30005, "Bal��ek nebyl dosud zah�jen.") \
	MDESC(c, zcc_resp, package_invoice_request_not_found,											19,1,14,30006, "��dost k fakturaci bal��ku nenalezena.") \
	MDESC(c, zcc_resp, invoice_request_id_mismatch,													19,1,14,30007, "Identifik�tor ��dosti k fakturaci bal��ku nesouhlas�.") \
	MDESC(c, zcc_resp, payment_already_notified,													19,1,14,30008, "Ozn�men� o platb� bylo ji� zaznamen�no.") \
	MDESC(c, zcc_resp, package_subclass_invalid,													19,1,14,30009, "Neplatn� podt��da bal��ku.") \
	MDESC(c, zcc_resp, package_bound_servers_found,													19,1,14,30010, "Nalezeny servery sv�zan� s bal��kem.") \
\
	MDESC(c, zcc_resp, credentials_password_too_short,												19,1,16,30001, "Heslo je p��li� kr�tk�. Minimum je 6 znak�.") \
	MDESC(c, zcc_resp, credentials_password_too_long,												19,1,16,30002, "Heslo je p��li� dlouh�. Maximum je 50 znak�.") \
	MDESC(c, zcc_resp, credentials_password_invalid_chars,											19,1,16,30003, "Heslo obsahuje nepovolen� znaky.") \
	MDESC(c, zcc_resp, credentials_username_too_short,												19,1,16,30004, "Jm�no je p��li� kr�tk�. Minimum jsou 4 znaky.") \
	MDESC(c, zcc_resp, credentials_username_too_long,												19,1,16,30005, "Jm�no je p��li� dlouh�. Maximum je 50 znak�.") \
	MDESC(c, zcc_resp, credentials_username_invalid_chars,											19,1,16,30006, "Jm�no obsahuje nepovolen� znaky.") \
	MDESC(c, zcc_resp, alt_credentials_do_not_exist,												19,1,16,30007, "Tento ��et nem� nastaveny alternativn� p�ihla�ovac� �daje.") \
	MDESC(c, zcc_resp, credentials_username_already_exists,											19,1,16,30008, "Jm�no nelze pou��t, je ji� obsazen�.") \
	MDESC(c, zcc_resp, alt_credentials_already_exist,												19,1,16,30009, "Tento ��et m� ji� nastaveny alternativn� p�ihla�ovac� �daje.") \
	MDESC(c, zcc_resp, credentials_username_empty,													19,1,16,30010, "Jm�no nen� vypln�no.") \
	MDESC(c, zcc_resp, credentials_password_empty,													19,1,16,30011, "Heslo nen� vypln�no.") \
	MDESC(c, zcc_resp, alt_credentials_invalid,														19,1,16,30012, "Jm�no nebo heslo nesouhlas�.") \
	MDESC(c, zcc_resp, credentials_current_password_incorrect,										19,1,16,30013, "Nyn�j�� heslo je nespr�vn�.") \
	MDESC(c, zcc_resp, credentials_master_password_incorrect,										19,1,16,30014, "Hlavn� heslo je nespr�vn�.") \
\
	MDESC(c, zcc_resp, tld_fee_userid_invalid,														19,1,17,30001, "Neplatn� userId.") \
	MDESC(c, zcc_resp, tld_fee_category_invalid,													19,1,17,30002, "Neplatn� kategorie.") \
	MDESC(c, zcc_resp, tld_fee_tld_missing,															19,1,17,30003, "Tld nen� zad�no.") \
	MDESC(c, zcc_resp, tld_fee_period_out_of_bounds,												19,1,17,30004, "Hodnota period nen� v povolen�ch mez�ch.") \
	MDESC(c, zcc_resp, tld_fee_pbu_invalid,															19,1,17,30005, "Neplatn� pbu.") \
	MDESC(c, zcc_resp, tld_fee_amount_empty,														19,1,17,30006, "��stka nen� zad�na.") \
	MDESC(c, zcc_resp, tld_fee_amount_currency_invalid,												19,1,17,30007, "Neplatn� m�na.") \
	MDESC(c, zcc_resp, tld_fee_amount_limit_count_invalid,											19,1,17,30008, "Neplatn� hodnota limitCount.") \
	MDESC(c, zcc_resp, tld_fee_tld_invalid,															19,1,17,30009, "Neplatn� tld.") \
	MDESC(c, zcc_resp, tld_fee_create_failed,														19,1,17,30010, "Vytvo�en� nov� polo�ky v cen�ku dom�n selhalo, stejn� polo�ka ji� nejsp� existuje.") \
	MDESC(c, zcc_resp, tld_fee_delete_failed,														19,1,17,30011, "Zru�en� polo�ky v cen�ku dom�n selhalo.") \
	MDESC(c, zcc_resp, tld_fee_not_found,															19,1,17,30012, "Polo�ka v cen�ku dom�n nenalezena.") \
	MDESC(c, zcc_resp, tld_fee_delete_not_possible,													19,1,17,30013, "Zru�it polo�ku v cen�ku dom�n nelze.") \
	MDESC(c, zcc_resp, tld_fee_update_failed,														19,1,17,30014, "�prava ��sty u polo�ky v cen�ku dom�n selhala.") \
	MDESC(c, zcc_resp, pricelist_tld_create_failed,													19,1,17,30015, "P�id�n� nov� TLD do cen�ku dom�n selhalo.") \
	MDESC(c, zcc_resp, tld_fee_amount_under_purchase,												19,1,17,30016, "��stka mus� b�t vy��� ne� n�kupn� cena.") \
\
	MDESC(c, zcc_resp, payment_notified_before,														19,1,21,30001, "Ozn�men� o platb� bylo ji� u�in�no d��ve.") \
\
	MDESC(c, zcc_resp, domain_name_already_used,													19,1,22,30001, "Dom�nov� jm�no se ji� pou��v�.") \
	MDESC(c, zcc_resp, domain_name_invalid,															19,1,22,30002, "Dom�nov� jm�no nen� platn�.") \
	MDESC(c, zcc_resp, phone_invalid,																19,1,22,30003, "Telefonn� ��slo nen� platn�.") \
	MDESC(c, zcc_resp, email_invalid,																19,1,22,30004, "E-mail adresa nen� platn�.") \
	MDESC(c, zcc_resp, country_code_invalid,														19,1,22,30005, "K�d zem� nen� platn�.") \
	MDESC(c, zcc_resp, first_name_invalid,															19,1,22,30006, "Jm�no nen� platn�.") \
	MDESC(c, zcc_resp, last_name_invalid,															19,1,22,30007, "P��jmen� nen� platn�.") \
	MDESC(c, zcc_resp, new_password_invalid,														19,1,22,30008, "Heslo pro priv�tn� kl�� nelze pou��t.") \
	MDESC(c, zcc_resp, org_unit_invalid,															19,1,22,30009, "Organiza�n� jednotka nen� platn�.") \
	MDESC(c, zcc_resp, org_invalid,																	19,1,22,30010, "Organizace nen� platn�.") \
	MDESC(c, zcc_resp, state_invalid,																19,1,22,30011, "St�t nen� platn�.") \
	MDESC(c, zcc_resp, locality_invalid,															19,1,22,30012, "Lokalita nen� platn�.") \
	MDESC(c, zcc_resp, certificate_data_not_found,													19,1,22,30013, "Nejprve vlo�te data certifik�tu.") \
	MDESC(c, zcc_resp, certificate_expired,															19,1,22,30014, "Platnost certifik�tu ji� vypr�ela.") \
	MDESC(c, zcc_resp, certificate_not_usable,														19,1,22,30015, "Data certifik�tu nelze pou��t.") \
	MDESC(c, zcc_resp, exp_date_out_of_range,														19,1,22,30016, "Datum expirace je mimo povolen� rozsah.") \
\
	MDESC(c, zcc_resp, client_authenticated,														19,0,0,50001, "Cms klient �sp�n� p�ihl�en.") \
	MDESC(c, zcc_resp, user_authenticated,															19,0,0,50002, "U�ivatel �sp�n� p�ihl�en.") \
	MDESC(c, zcc_resp, sslmarket_user_identity_created,												19,0,0,50003, "Vytvo�en� nov� identity pro u�ivatele SSL market �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, general_search_succeeded,													19,0,1,50001, "V�eobecn� vyhled�v�n� �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, dns_snapshot_made,															19,1,0,50001, "Vytvo�en� snapshotu dns �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_snapshot_got,															19,1,0,50002, "Z�sk�n� snapshotu dns �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_snapshots_got,															19,1,0,50003, "Z�sk�n� seznamu po��zen�ch snapshot� dns �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, user_got,																	19,1,1,50001, "Z�sk�n� u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, hotline_request_sent,														19,1,1,50002, "Zasl�n� po�adavku na hotline �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_price_got,																19,1,1,50003, "Z�sk�n� ceny pro dan� TLD �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_profile_updated,														19,1,1,50004, "�prava kontaktn�ch �daj� u�ivatele �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, tld_prices_got,																19,1,1,50005, "Z�sk�n� seznamu cen pro dan� TLD �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_reg_prices_got,													19,1,1,50006, "Z�sk�n� seznamu TLD s cenou za ro�n� registraci �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_reg_common_prices_got,											19,1,1,50007, "Z�sk�n� seznamu TLD s b�nou cenou za ro�n� registraci �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, sms_notification_got,														19,1,1,50008, "Z�sk�n� �daj� pro SMS upozor�ov�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, sms_notification_subject_updated,											19,1,1,50009, "Nastaven� p�edm�tu SMS upozor�ov�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, sms_phone_updated,															19,1,1,50010, "Nastaven� telefonn�ho ��sla pro SMS upozor�ov�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, lost_credentials_sent,														19,1,1,50011, "Zasl�n� odkazu pro obnovu hesla �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_renew_prices_got,												19,1,1,50012, "Z�sk�n� seznamu TLD s cenou za ro�n� prodlou�en� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, idle_user_deleted,															19,1,1,50013, "Smaz�n� neaktivn�ho u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, idle_users_deleted,															19,1,1,50014, "Smaz�n� neaktivn�ch u�ivatel� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_created,																19,1,1,50015, "Vytvo�en� u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_note_created,															19,1,1,50016, "Vytvo�en� pozn�mky u u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_note_deleted,															19,1,1,50017, "Smaz�n� pozn�mky u u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_note_updated,															19,1,1,50018, "�prava pozn�mky u u�ivatele �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, user_note_got,																19,1,1,50019, "Z�sk�n� pozn�mky u u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_notes_got,																19,1,1,50020, "Z�sk�n� seznamu pozn�mek u u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, users_with_blocked_gpwebpay_got,												19,1,1,50021, "Z�sk�n� seznamu u�ivatel� se zablokovanou platbou kartami �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, gpwebpay_blockation_settings_updated,										19,1,1,50022, "�prava parametr� pro blokaci plateb kartami �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, tlds_and_1y_transfer_prices_got,												19,1,1,50023, "Z�sk�n� seznamu TLD s cenou za ro�n� p�evod �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tlds_and_1y_transfer_common_prices_got,										19,1,1,50024, "Z�sk�n� seznamu TLD s b�nou cenou za ro�n� p�evod �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tlds_specreg_prices_got,														19,1,1,50025, "Z�sk�n� seznamu TLD s cenou za speci�ln� registraci �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tlds_specreg_common_prices_got,												19,1,1,50026, "Z�sk�n� seznamu TLD s b�nou cenou za speci�ln� registraci �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_common_price_got,														19,1,1,50027, "Z�sk�n� b�n� ceny pro dan� TLD �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, complete_common_reg_prices_got,												19,1,1,50028, "Z�sk�n� kompletn�ho cen�ku b�n�ch cen za registrace �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, complete_reg_prices_got,														19,1,1,50029, "Z�sk�n� kompletn�ho cen�ku za registrace �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_common_prices_got,														19,1,1,50030, "Z�sk�n� seznamu b�n�ch cen pro dan� TLD �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, credit_account_active_notified,												19,1,1,50031, "Ozn�men� o aktivaci kreditn�ho ��tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_approved,																19,1,1,50032, "Schv�len� u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, server_audit_log_events_got,													19,1,1,50033, "Z�sk�n� historie u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tester_activated,															19,1,1,50034, "Aktivace testera �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, news_subscription_updated,													19,1,1,50035, "�prava p�ihl�en� k odb�ru novinek �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, email_message_created_and_sent,												19,1,1,50036, "Vytvo�en� a odesl�n� mailov� zpr�vy �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_delegations_got,														19,1,1,50037, "Z�sk�n� seznamu delegac� u�ivatele �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, unpaid_reqs_for_payment_got,													19,1,2,50001, "Z�sk�n� seznamu nezaplacen�ch v�zev k �hrad� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, req_for_payment_got,															19,1,2,50002, "Z�sk�n� v�zvy k �hrad� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, pay_debt_got,																19,1,2,50003, "Z�sk�n� �daj� pro �hradu pohled�vky �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, vs_for_first_payment_got,													19,1,2,50004, "Z�sk�n� vs pro �hradu prvn� pohled�vky �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, gpwebpay_shutdown_got,														19,1,2,50005, "Z�sk�n� datumu p��t� odst�vky syst�mu GPwebpay �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, credit_pay_ok,																19,1,2,50006, "Uhrazen� pohled�vky z kreditn�ho ��tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, view_of_req_for_payment_updated,												19,1,2,50007, "Zm�na viditelnosti pohled�vky �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, last_req_for_payment_got,													19,1,2,50008, "Z�sk�n� posledn� v�zvy k �hrad� �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, managed_domains_got,															19,1,3,50001, "Z�sk�n� seznamu dom�n, kde je Zoner registr�torem �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, domain_got,																	19,1,3,50002, "Z�sk�n� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, auto_renew_updated,															19,1,3,50003, "Nastaven� p��znaku pro automatick� prodlu�ov�n� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, domain_name_checked,															19,1,3,50004, "Zji�t�n� dostupnosti dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, top_level_domains_got,														19,1,3,50005, "Z�sk�n� seznamu top level dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, top_level_domain_got,														19,1,3,50006, "Z�sk�n� top level dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, top_level_domain_updated,													19,1,3,50007, "�prava top level dom�ny �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, domain_name_owner_got,														19,1,3,50008, "Z�sk�n� kontaktn�ch �daj� vlastn�ka dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, domain_name_contact_updated,													19,1,3,50009, "�prava �daj� kontaktu dom�ny �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, domain_name_contact_got,														19,1,3,50010, "Z�sk�n� kontaktn�ch �daj� kontaktu dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, reg_of_new_tld_started,														19,1,3,50011, "Zah�jen� registrac� nov�ho tld �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_determined,																19,1,3,50012, "Ur�en� tld �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, top_level_domain_last_change_got,											19,1,3,50013, "Z�sk�n� datumu posledn� zm�ny top level dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, premium_reg_price_got,														19,1,3,50014, "Z�sk�n� ceny za registraci pr�miv� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, registrars_got,																19,1,3,50015, "Z�sk�n� seznamu registr�tor� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, registrar_poll_made,															19,1,3,50016, "Zpracov�n� poll msg u registr�tora �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, auth_info_sent,																19,1,3,50017, "Posl�n� autoriza�n�ho k�du pro p�evod dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, cznic_registrant_email_got,													19,1,3,50018, "Z�sk�n� emailu dr�itele .cz dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, top_level_domains_counts_got,												19,1,3,50019, "Z�sk�n� po�tu spravovan�ch dom�n rozd�len�ch podle top level dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, top_level_domain_registrar_counts_got,										19,1,3,50020, "Z�sk�n� po�tu spravovan�ch dom�n rozd�len�ch podle registr�tora pro dan� tld �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, database_created,															19,1,4,50001, "Vytvo�en� datab�ze �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, database_got,																19,1,4,50002, "Z�sk�n� datab�ze �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, database_migrated,															19,1,4,50003, "Migrace datab�ze �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, database_assigned,															19,1,4,50004, "P�i�azen� datab�ze k dom�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, pooled_database_assigned,													19,1,4,50005, "P�i�azen� p�edvytvo�en� datab�ze k dom�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, database_deleted,															19,1,4,50006, "Smaz�n� datab�ze �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, database_server_got,															19,1,4,50007, "Z�sk�n� datab�zov�ho serveru pro danou datab�zi �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, database_size_changed,														19,1,4,50008, "Zm�na max. velikosti datab�ze �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, database_simplified_created,													19,1,4,50009, "Vytvo�en� datab�ze zjednodu�en� �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, service_got,																	19,1,5,50001, "Z�sk�n� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_main_account_got,													19,1,5,50002, "Z�sk�n� hlavn�ho ��tu dan� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, services_got,																19,1,5,50003, "Z�sk�n� seznamu slu�eb �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, activity_simulated,															19,1,5,50004, "Simulace �innosti �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, service_redirected,															19,1,5,50005, "P�esm�rov�n� dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_upgraded,															19,1,5,50006, "Pov��en� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, mail_created,																19,1,5,50007, "Vytvo�en� po�ty �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, mail_deleted,																19,1,5,50008, "Smaz�n� po�ty �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_ipv4_replaced,														19,1,5,50009, "V�m�na IP adresy u slu�by �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, own_ip_removed,																19,1,5,50010, "Odstran�n� vlastn� IP adresy �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, own_ip_added,																19,1,5,50011, "P�id�n� vlastn� IP adresy �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, permission_delegated,														19,1,5,50012, "Delegov�n� opr�vn�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, permission_undelegated,														19,1,5,50013, "Oddelegov�n� opr�vn�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_note_created,														19,1,5,50014, "Vytvo�en� pozn�mky u slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_note_deleted,														19,1,5,50015, "Smaz�n� pozn�mky u slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_note_updated,														19,1,5,50016, "Zm�na pozn�mky u slu�by �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, service_note_got,															19,1,5,50017, "Z�sk�n� pozn�mky u slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_notes_got,															19,1,5,50018, "Z�sk�n� seznamu pozn�mek u slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_permission_delegations_got,											19,1,5,50019, "Z�sk�n� seznamu opr�vn�n� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_chc_request_created,													19,1,5,50020, "Vytvo�en� ��dosti do CHC pro slu�bu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_name_checked,														19,1,5,50021, "Ov��en� dostupnosti n�zvu slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_application_pool_task_carried_out,									19,1,5,50022, "Proveden� �lohy na aplika�n�m poolu slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, installatron_available,														19,1,5,50023, "Installatron je pro slu�bu dostupn�.") \
	MDESC(c, zcc_resp, installatron_cleanup_site_ok,												19,1,5,50024, "Smaz�n� slu�by z installatronu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_third_level_domains_got,												19,1,5,50025, "Z�sk�n� dom�n t�et� �rovn� pro slu�bu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_data_deleted,														19,1,5,50027, "Smaz�n� dat slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_data_parked,															19,1,5,50028, "Zaparkov�n� dat slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_data_denied,															19,1,5,50029, "Odstaven� dat slu�by pro neplacen� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_parked,																19,1,5,50030, "Zaparkov�n� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_deleted,																19,1,5,50031, "Smaz�n� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, aliases_got,																	19,1,5,50032, "Z�sk�n� seznamu alias� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, alias_created,																19,1,5,50033, "Vytvo�en� aliasu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_features_got,														19,1,5,50034, "Z�sk�n� stav� z�mk� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, stats_locked,																19,1,5,50035, "Zamknut� statistiky slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, stats_unlocked,																19,1,5,50036, "Odemknut� statistiky slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_accounts_got,														19,1,5,50037, "Z�sk�n� seznamu ftp ��t� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, ftp_locked,																	19,1,5,50038, "Zamknut� ftp ��tu slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, ftp_unlocked,																19,1,5,50039, "Odemknut� ftp ��tu slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, ssh_locked,																	19,1,5,50040, "Zamknut� ssh ��tu slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, ssh_unlocked,																19,1,5,50041, "Odemknut� ssh ��tu slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_permission_granted_ok,												19,1,5,50042, "Ov��en� ud�len�ch pr�v ke slu�b� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, hosting_server_got,															19,1,5,50043, "Z�sk�n� hostingov�ho serveru pro danou slu�bu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, mail_server_got,																19,1,5,50044, "Z�sk�n� po�tovn�ho serveru pro danou slu�bu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, master_service_got,															19,1,5,50045, "Z�sk�n� master slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_third_level_domain_from_alias_got,									19,1,5,50046, "Z�sk�n� dom�ny t�et� �rovn� z aliasu na ni �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, domain_transfer_available_ok,												19,1,5,50047, "Zji�t�n� dostupnosti transferu dom�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, databases_got,																19,1,5,50048, "Z�sk�n� seznamu datab�z� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, database_server_deployments_got,												19,1,5,50049, "Z�sk�n� seznamu server� pro z�izov�n� jednotliv�ch typ� datab�z� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, free_database_name_got,														19,1,5,50050, "Z�sk�n� voln�ho n�zvu datab�ze odvozen�ho od n�zvu slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_db_quotas_got,														19,1,5,50051, "Z�sk�n� datab�zov�ch kv�t pro slu�bu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_db_quotas_upgraded,													19,1,5,50052, "Nav��en� datab�zov�ch kv�t pro slu�bu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_billing_info_got,													19,1,5,50053, "Z�sk�n� informac� pro fakturaci slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_delegations_got,														19,1,5,50054, "Z�sk�n� seznamu delegac� slu�by �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, services_searched,															19,1,5,50055, "Hled�n� mezi slu�bami �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_db_quotas_downgraded,												19,1,5,50056, "Pon�en� datab�zov�ch kv�t pro slu�bu �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, service_tasks_batch_created,													19,1,6,50001, "Vytvo�en� d�vky �loh �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_tasks_batch_got,														19,1,6,50002, "Z�sk�n� d�vky �loh �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_task_processed,														19,1,6,50003, "Zpracov�n� �lohy �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, service_dnssec_signed,														19,1,7,50001, "Podeps�n� z�ny DNSSEC �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, service_dnssec_unsigned,														19,1,7,50002, "Odpodeps�n� z�ny DNSSEC �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, user_domain_lists_got,														19,1,8,50001, "Z�sk�n� u�ivatelsk�ch seznam� dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_domain_list_created,													19,1,8,50002, "Vytvo�en� u�ivatelsk�ho seznamu dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_domain_list_got,														19,1,8,50003, "Z�sk�n� u�ivatelsk�ho seznamu dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, user_domain_list_updated,													19,1,8,50004, "�prava u�ivatelsk�ho seznamu dom�n �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, user_domain_list_deleted,													19,1,8,50005, "Zru�en� u�ivatelsk�ho seznamu dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, domain_added_to_user_domain_list,											19,1,8,50006, "P�id�n� dom�ny do u�ivatelsk�ho seznamu dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, domain_deleted_from_user_domain_list,										19,1,8,50007, "Zru�en� dom�ny z u�ivatelsk�ho seznamu dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, domain_is_on_user_domain_list_success,										19,1,8,50008, "Zji�t�n� zda je dom�na v u�ivatelsk�m seznamu dom�n �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, order_created,																19,1,9,50001, "Vytvo�en� objedn�vky �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, order_got,																	19,1,9,50002, "Z�sk�n� objedn�vky �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, order_item_processed,														19,1,9,50003, "Zpracov�n� polo�ky v objedn�vce �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, hosting_ordered,																19,1,9,50004, "Objedn�n� hostingu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, cloud_server_ordered,														19,1,9,50005, "Objedn�n� cloud serveru �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, anonymous_order_assigned,													19,1,9,50006, "P�i�azen� anonymn� objedn�vky �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, order_processed,																19,1,9,50007, "Zpracov�n� objedn�vky �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, order_group_payment_created,													19,1,9,50008, "Vytvo�en� hromadn� v�zvy pro objedn�vku �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, mailbox_count_changed,														19,1,10,50001, "Zm�na po�tu po�tovn�ch schr�nek �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, mail_quota_changed,															19,1,10,50002, "Zm�na celkov� po�tovn� kv�ty �sp�n� prob�hla.") \
\
	MDESC(c, zcc_resp, web_quota_changed,															19,1,11,50001, "Zm�na webov� kv�ty �sp�n� prob�hla.") \
\
	MDESC(c, zcc_resp, mojeid_handle_checked,														19,1,12,50001, "Kontrola dostupnosti u�ivatelsk�ho jm�na mojeID identity �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, mojeid_registered,															19,1,12,50002, "Registrace nov� mojeID identity �sp�n� prob�hla.") \
\
	MDESC(c, zcc_resp, zone_ipv6_updated,															19,1,13,50001, "Aktualizace z�ny dopln�n�m z�znam� IPv6 �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, zone_published,																19,1,13,50002, "P�enesen� dns z�znam� na produk�n� dns server �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, arecord_ipv6_added,															19,1,13,50003, "P�id�n� odpov�daj�c�ho z�znamu IPv6 do z�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, ipv6_activated,																19,1,13,50004, "Aktivace IPv4 ze Zoner rozsahu pro podporu IPv6 �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, dns_ip_ranges_got,															19,1,13,50005, "Z�sk�n� seznamu IP rozsah� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_ptr_records_got,															19,1,13,50006, "Z�sk�n� seznamu PTR z�znam� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_ptr_record_got,															19,1,13,50007, "Z�sk�n� PTR z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_ptr_record_updated,														19,1,13,50008, "�prava PTR z�znamu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, dns_reverse_zone_rewritten,													19,1,13,50009, "Vygenerov�n� reverzn� z�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_zone_got,																19,1,13,50010, "Z�sk�n� z�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, arecord_ipv6_deleted,														19,1,13,50011, "Odebr�n� odpov�daj�c�ho z�znamu IPv6 ze z�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, zone_deleted,																19,1,13,50012, "Smaz�n� z�ny z produk�n�ho dns serveru �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, zone_cleared,																19,1,13,50013, "Smaz�n� dns z�znam� z datab�ze �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_a_record_created,														19,1,13,50014, "Vytvo�en� A z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_cname_record_created,													19,1,13,50015, "Vytvo�en� CName z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_aaaa_record_created,														19,1,13,50016, "Vytvo�en� AAAA z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_txt_record_created,														19,1,13,50017, "Vytvo�en� TXT z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_mx_record_created,														19,1,13,50018, "Vytvo�en� MX z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_srv_record_created,														19,1,13,50019, "Vytvo�en� SRV z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, txt_records_deleted,															19,1,13,50020, "Smaz�n� TXT z�znam� s dan�m hostname �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_a_record_deleted,														19,1,13,50021, "Smaz�n� A z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, is_dns_zone_uptodate_got,													19,1,13,50022, "Zobrazen� aktu�lnosti dns z�ny �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_a_record_updated,														19,1,13,50023, "�prava A z�znamu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, dns_cname_record_deleted,													19,1,13,50024, "Smaz�n� CNAME z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_cname_record_updated,													19,1,13,50025, "�prava CNAME z�znamu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, dns_aaaa_record_deleted,														19,1,13,50026, "Smaz�n� AAAA z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_aaaa_record_updated,														19,1,13,50027, "�prava AAAA z�znamu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, dns_mx_record_deleted,														19,1,13,50028, "Smaz�n� MX z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_mx_record_updated,														19,1,13,50029, "�prava MX z�znamu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, is_dns_zone_managed_succeeded,												19,1,13,50030, "Ov��en�, �e dns z�na je spravov�na Zonerem �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, dns_txt_record_updated,														19,1,13,50031, "�prava TXT z�znamu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, dns_txt_record_deleted,														19,1,13,50032, "Smaz�n� TXT z�znamu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, mail_cname_records_converted,												19,1,13,50033, "P�eveden� po�tovn�ch CNAME z�znam� na zoner.com �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, package_got,																	19,1,14,50001, "Z�sk�n� bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, packages_got,																19,1,14,50002, "Z�sk�n� seznamu bal��k� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, package_init_success,														19,1,14,50003, "Zah�jen� bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, package_billing_update_notified,												19,1,14,50004, "Ozn�men� o zm�n� po��te�n�ho data fakturace bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, package_payment_made_notified,												19,1,14,50005, "Ozn�men� o proveden� platb� za bal��ek �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, packages_merged,																19,1,14,50006, "Slou�en� dvou bal��k� do jednoho �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, package_updated,																19,1,14,50007, "�prava bal��ku �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, package_created,																19,1,14,50008, "Vytvo�en� bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, package_deleted,																19,1,14,50009, "Zru�en� bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, server_to_package_added,														19,1,14,50010, "P�id�n� serveru do bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, server_from_package_removed,													19,1,14,50011, "Zru�en� serveru z bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, package_invoice_request_deleted,												19,1,14,50012, "Zru�en� po�adavku na fakturaci bal��ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, package_invoice_request_created,												19,1,14,50013, "Vytvo�en� po�adavku na fakturaci bal��ku �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, variant_got,																	19,1,15,50001, "Z�sk�n� varianty �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, variants_on_menu_got,														19,1,15,50002, "Z�sk�n� seznamu variant v nab�dce �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, variants_for_upgrade_got,													19,1,15,50003, "Z�sk�n� seznamu variant pro ugrade �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, all_variants_for_upgrade_got,												19,1,15,50004, "Z�sk�n� seznamu v�ech variant pro ugrade �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, all_variants_with_monthly_fee_got,											19,1,15,50005, "Z�sk�n� seznamu v�ech placen�ch variant �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, variant_config_got,															19,1,15,50006, "Z�sk�n� konfigurace varianty �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, variants_got,																19,1,15,50007, "Z�sk�n� seznamu variant �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, credentials_got,																19,1,16,50001, "Z�sk�n� p�ihla�ovac�ch �daj� k ��tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, credentials_updated,															19,1,16,50002, "Zm�na p�ihla�ovac�ch �daj� k ��tu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, alt_credentials_updated,														19,1,16,50003, "Zm�na alternativn�ch p�ihla�ovac�ch �daj� �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, alt_credentials_deleted,														19,1,16,50004, "Zru�en� alternativn�ch p�ihla�ovac�ch �daj� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, alt_credentials_created,														19,1,16,50005, "Vytvo�en� alternativn�ch p�ihla�ovac�ch �daj� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, alt_credentials_binded,														19,1,16,50006, "P�ipojen� alternativn�ch p�ihla�ovac�ch �daj� �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, tld_fee_tlds_got,															19,1,17,50001, "Z�sk�n� seznamu tld z cen�ku dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fees_for_users_got,														19,1,17,50002, "Z�sk�n� cen�ku dom�n pro vybran� u�ivatele �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fees_for_categories_got,													19,1,17,50003, "Z�sk�n� cen�ku dom�n pro u�ivatelsk� kategorie �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fees_for_branches_got,													19,1,17,50004, "Z�sk�n� cen�ku dom�n pro pobo�ky �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fee_created,																19,1,17,50005, "Vytvo�en� nov� polo�ky v cen�ku dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fee_deleted,																19,1,17,50006, "Zru�en� polo�ky v cen�ku dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fee_got,																	19,1,17,50007, "Z�sk�n� polo�ky v cen�ku dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fee_updated,																19,1,17,50008, "�prava ��stky u polo�ky v cen�ku dom�n �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, basic_tld_fees_for_branch_got,												19,1,17,50009, "Z�sk�n� z�kladn�ho cen�ku dom�n pro pobo�ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fee_extra_tlds_got,														19,1,17,50010, "Z�sk�n� seznamu tld z cen�ku dom�n, kter� maj� nastaveny individu�ln� ceny pro u�ivatele �i kategorie �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_pricelist_created,														19,1,17,50011, "P�id�n� nov� TLD do cen�ku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fee_amount_last_change_got,												19,1,17,50012, "Z�sk�n� datumu posledn� zm�ny v cen�ku dom�n �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_reg_czk,										19,1,17,50013, "N�kter� koncov� ceny pro poplatek reg v K� nejsou vy��� ne� nov� n�kupn� cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_renew_czk,									19,1,17,50014, "N�kter� koncov� ceny pro poplatek renew v K� nejsou vy��� ne� nov� n�kupn� cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_transfer_czk,									19,1,17,50015, "N�kter� koncov� ceny pro poplatek transfer v K� nejsou vy��� ne� nov� n�kupn� cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_reg_eur,										19,1,17,50016, "N�kter� koncov� ceny pro poplatek reg v � nejsou vy��� ne� nov� n�kupn� cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_renew_eur,									19,1,17,50017, "N�kter� koncov� ceny pro poplatek renew v � nejsou vy��� ne� nov� n�kupn� cena.") \
	MDESC(c, zcc_resp, tld_fee_amounts_under_purchase_transfer_eur,									19,1,17,50018, "N�kter� koncov� ceny pro poplatek transfer v � nejsou vy��� ne� nov� n�kupn� cena.") \
\
	MDESC(c, zcc_resp, end_report_message_box_updated,	 											19,1,18,50001, "�prava z�v�re�n� zpr�vy v message boxu �sp�n� prob�hla.") \
\
	MDESC(c, zcc_resp, cloud_server_deployed,			 											19,1,19,50001, "Nasazen� cloud serveru �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, server_got,						 											19,1,19,50002, "Z�sk�n� serveru �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, servers_got,						 											19,1,19,50003, "Z�sk�n� seznamu server� �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, invoice_request_cancelled_notified, 											19,1,20,50001, "Ozn�men� o zru�en� faktura�n�ho po�adavku �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, invoice_request_paid_notified, 												19,1,20,50002, "Ozn�men� o uhrazen� faktura�n�ho po�adavku �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, reward_old_invoicing_payment_notified, 										19,1,21,50001, "Ozn�men� pro syst�m odm�n o platb� ze star�ho faktura�n�ho syst�mu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, reward_new_invoicing_payment_notified, 										19,1,21,50002, "Ozn�men� pro syst�m odm�n o platb� z nov�ho faktura�n�ho syst�mu �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, certificates_got,					 										19,1,22,50001, "Z�sk�n� seznamu certifik�t� �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_created,					 										19,1,22,50002, "Vytvo�en� certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_got,						 										19,1,22,50003, "Z�sk�n� certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_private_key_got,			 										19,1,22,50004, "Z�sk�n� priv�tn�ho kl��e certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, symantec_post_request_sended,			 									19,1,22,50005, "Posl�n� POST ��dosti na Symantec �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_binding_for_service_got,		 									19,1,22,50006, "Z�sk�n� instalace certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_installed,		 												19,1,22,50007, "Instalace certifik�tu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, certificate_installation_possible_ok,										19,1,22,50008, "Ov��en� mo�nosti instalace certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_uninstalled,		 												19,1,22,50009, "OdiInstalace certifik�tu �sp�n� prob�hla.") \
	MDESC(c, zcc_resp, certificate_domains_got,		 												19,1,22,50010, "Z�sk�n� seznamu dom�n z certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_binding_got,		 												19,1,22,50011, "Z�sk�n� instalace certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_for_cn_got,				 										19,1,22,50012, "Z�sk�n� certifik�tu pro CN �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_pfx_got,				 											19,1,22,50013, "Z�sk�n� .pfx souboru certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, commercial_certificate_created,					 							19,1,22,50014, "Vytvo�en� komer�n�ho certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_inserted,							 							19,1,22,50015, "Vlo�en� certifik�tu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_installable_domains_got,				 							19,1,22,50016, "Z�sk�n� seznamu dom�n, pro kter� lze instalovat certifik�t �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, certificate_renewed,								 							19,1,22,50017, "Obnoven� certifik�tu �sp�n� prob�hlo.") \
\
	MDESC(c, zcc_resp, eet_bills_got,						 										19,1,23,50001, "Z�sk�n� seznamu EET ��tenek �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, credit_eet_bill_assigned,			 										19,1,23,50002, "P�i�azen� EET ��tenky z kreditn�ho syst�mu �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, eet_bill_info_got,					 										19,1,23,50003, "Z�sk�n� podrobnost� o EET ��tence �sp�n� prob�hlo.") \
	MDESC(c, zcc_resp, eet_bill_got,						 										19,1,23,50004, "Z�sk�n� EET ��tenky �sp�n� prob�hlo.") \

	
#define ZONERCONTROLCENTER_CMSM_WHS(c) \
	GROUP_WHS(c, zcc_module_mdesc, zcc_cmsm, client_authenticate)


#define ZONERCONTROLCENTER_MDESC_TABLE(c) \
	ZONERCONTROLCENTER_CMSM(c) \
	ZONERCONTROLCENTER_RESP(c) \
	ZONERCONTROLCENTER_CMSM_WHS(c)

// expand the declarations
CMS_NAMESPACE_START
ZONERCONTROLCENTER_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_ZONERCONTROLCENTER_MDESCS
