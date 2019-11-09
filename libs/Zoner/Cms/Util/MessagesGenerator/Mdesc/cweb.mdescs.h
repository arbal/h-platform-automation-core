// x64 OK

#ifndef __MOD_WEB_MDESCS
#define __MOD_WEB_MDESCS

#include "mdescs.h"

// web messages
#define WEB_CMSM(c) \
	MDESC(c,   web_cmsm,  create_site,                   5,0,0,1,         "Nelze vytvo�it novou site.")  \
	MDESC(c,   web_cmsm,  get_quota,                     5,0,0,2,         "Nelze zjistit diskovou kv�tu.")  \
	MDESC(c,   web_cmsm,  set_quota,                     5,0,0,3,         "Nelze nastavit diskovou kv�tu.")  \
	MDESC(c,   web_cmsm,  create_vhost,                  5,0,0,4,         "Nelze vytvo�it nov� vhost.")  \
	MDESC(c,   web_cmsm,  stop_site_www,                 5,0,0,5,         "Nelze zastavit WWW slu�bu dan� site.")  \
	MDESC(c,   web_cmsm,  start_site_www,                5,0,0,6,         "Nelze spustit WWW slu�bu dan� site.")  \
	MDESC(c,   web_cmsm,  lock_vhost_stats,              5,0,0,7,         "Nelze zamknout statistiky dan�ho vhostu.")  \
	MDESC(c,   web_cmsm,  unlock_vhost_stats,            5,0,0,8,         "Nelze odemknout statistiky dan�ho vhostu.")  \
	MDESC(c,   web_cmsm,  update_vhost_stats_locking,    5,0,0,9,         "Nelze aktualizovat zam�en� dan�ho vhostu.")  \
	MDESC(c,   web_cmsm,  create_vhost_alias,            5,0,0,10,        "Nelze vytvo�it alias k dan�mu vhostu.")  \
	MDESC(c,   web_cmsm,  remove_vhost_alias,            5,0,0,11,        "Nelze odstranit alias dan�mu vhostu.")  \
	MDESC(c,   web_cmsm,  create_ftp_account,            5,0,0,12,        "Nelze p�idat FTP ��et.")  \
	MDESC(c,   web_cmsm,  remove_ftp_account,            5,0,0,13,        "Nelze odstranit FTP ��et.")  \
	MDESC(c,   web_cmsm,  update_htauth_password_file,   5,0,0,14,        "Nelze aktualizovat soubor s htauth hesly.")  \
	MDESC(c,   web_cmsm,  update_htauth_locking,         5,0,0,15,        "Nelze aktualizovat htauth z�mky adres���.")  \
	MDESC(c,   web_cmsm,  remove_htauth_locking,         5,0,0,16,        "Nelze odstranit htauth z�mek adres��e.")  \
	MDESC(c,   web_cmsm,  update_site_permissions,       5,0,0,17,        "Nelze zregenerovat p��stupov� pr�va site.") \
	MDESC(c,   web_cmsm,  get_clid_from_site_name,       5,0,0,18,        "Nelze zjistit ID site z jej�ho n�zvu.") \
	MDESC(c,   web_cmsm,  get_vsid_from_vs_name,         5,0,0,19,        "Nelze zjistit ID virtu�ln�ho serveru z jeho n�zvu.") \
	MDESC(c,   web_cmsm,  update_vhost_config,           5,0,0,20,        "Nelze p�egenerovat konfigura�n� soubor vhostu.")  \
	MDESC(c,   web_cmsm,  send_top_traffic_report,       5,0,0,21,        "Nelze odeslat p�ehled o slu�b�ch s nejvy���m trafficem.")  \
	MDESC(c,   web_cmsm,  get_top_traffic_report,        5,0,0,22,        "Nelze vytvo�it p�ehled o slu�b�ch s nejvy���m trafficem.") \
	MDESC(c,   web_cmsm,  vs_ips_on_same_machine,        5,0,0,23,        "Nelze zjistit zda jsou dan� virtu�ln� servery na stejn�m fyzick�m stroji.") \
	MDESC(c,   web_cmsm,  remove_zombie_on_machine,      5,0,0,24,        "Nelze odstranit zombii site z dan�ho serveru.") \
	MDESC(c,   web_cmsm,  get_expired_zombies,           5,0,0,25,        "Nelze na��st seznam zombies k odstran�n�.") \
	MDESC(c,   web_cmsm,  get_expired_shadow_vhosts,     5,0,0,26,        "Nelze na��st seznam expirovan�ch shadow vhost�.") \
	MDESC(c,   web_cmsm,  update_site_vhost_config,      5,0,0,27,        "Nelze p�egenerovat konfigura�n� soubor site.")  \
	MDESC(c,   web_cmsm,  find_vhosts_with_server_admin_email, 5,0,0,28,  "Nelze nal�zt vhosty s dan�m emailem spr�vce." ) \
	MDESC(c,   web_cmsm,  create_vhost_alias_by_name,    5,0,0,29,        "Nelze vytvo�it alias k dan�mu vhostu.")  \
	MDESC(c,   web_cmsm,  get_machines_list,             5,0,0,30,        "Nelze vr�tit seznam v�ech webserver�.")  \
	\
	MDESC(c,   web_cmsm,  ccc_create_main_domain,        5,1,0,1,         "Nelze vytvo�it hlavn� dom�nu.")  \
	MDESC(c,   web_cmsm,  ccc_stop_www,                  5,1,0,2,         "Nelze zastavit WWW slu�bu servisu.")  \
	MDESC(c,   web_cmsm,  ccc_start_www,                 5,1,0,3,         "Nelze spustit WWW slu�bu servisu.")  \
	MDESC(c,   web_cmsm,  ccc_lock_main_stats,           5,1,0,4,         "Nelze zamknout statistiky hlavn� dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_main_stats,         5,1,0,5,         "Nelze odemknout statistiky hlavn� dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_create_alias,              5,1,0,6,         "Nelze vytvo�it nov� alias hlavn� dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_remove_alias,              5,1,0,7,         "Nelze odstranit alias hlavn� dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_lock_vhost_stats,          5,1,0,8,         "Nelze zamknout statistiky vhostu.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_vhost_stats,        5,1,0,9,         "Nelze odemknout statistiky vhostu.")  \
	MDESC(c,   web_cmsm,  ccc_create_3rdlv_domain,       5,1,0,10,        "Nelze vytvo�it dom�nu t�et� �rovn�.")  \
	MDESC(c,   web_cmsm,  ccc_remove_3rdlv_domain,       5,1,0,11,        "Nelze odstranit dom�nu t�et� �rovn�.")  \
	MDESC(c,   web_cmsm,  ccc_destroy_main_domain,       5,1,0,12,        "Nelze nen�vratn� zlikvidovat hlavn� dom�nu.")  \
	MDESC(c,   web_cmsm,  ccc_upload_primary_vhost_data, 5,1,0,13,        "Nelze p�en�st data dom�ny z po�adovan�ho m�sta.")  \
	MDESC(c,   web_cmsm,  ccc_remove_main_domain,        5,1,0,14,        "Nelze odstranit hlavn� dom�nu.")  \
	MDESC(c,   web_cmsm,  ccc_change_ftp_password,       5,1,0,15,        "Nelze zm�nit heslo FTP ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_lock_ftp_account,          5,1,0,16,        "Nelze zamknout FTP ��et.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_ftp_account,        5,1,0,17,        "Nelze odemknout FTP ��et.")  \
	MDESC(c,   web_cmsm,  ccc_get_id_service_from_site_name, 5,1,0,18,        "Nelze zjistit ID servisu na z�klad� jm�na site.")  \
	MDESC(c,   web_cmsm,  ccc_get_quota,                 5,1,0,19,        "Nelze zjistit diskovou kv�tu.")  \
	MDESC(c,   web_cmsm,  ccc_set_quota,                 5,1,0,20,        "Nelze nastavit diskovou kv�tu.")  \
	MDESC(c,   web_cmsm,  ccc_set_site_vhosts_language,  5,1,0,21,        "Nelze jazyk vhost� dan� site.")  \
	MDESC(c,   web_cmsm,  ccc_get_primary_vhost_language,5,1,0,22,        "Nelze zjistit jazyk prim�rn�ho vhosta dan� site.")  \
	MDESC(c,   web_cmsm,  ccc_set_error_document,        5,1,0,23,        "Nelze nastavit u�ivatelskou chybovou str�nku dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_remove_error_document,     5,1,0,24,        "Nelze odstranit nastaven� u�ivatelsk� chybov� str�nky dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_unpack_old_hosting_data,   5,1,0,25,        "Nelze rozbalit data site ze star�ho hostingu.")  \
	MDESC(c,   web_cmsm,  ccc_create_ftp_account,        5,1,0,26,        "Nelze p�idat nov� FTP ��et.")  \
	MDESC(c,   web_cmsm,  ccc_remove_ftp_account,        5,1,0,27,        "Nelze odebrat FTP ��et.")  \
	MDESC(c,   web_cmsm,  ccc_migrate_domain_stage1,     5,1,0,28,        "Nelze prov�st prvn� f�zi migrace dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_migrate_domain_stage2,     5,1,0,29,        "Nelze prov�st druhou f�zi migrace dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_change_domain_variant,     5,1,0,30,        "Nelze prov�st zm�nu varianty dom�ny.")  \
	MDESC(c,   web_cmsm,  ccc_unpack_win_hosting_data,   5,1,0,31,        "Nelze rozbalit data site ze hostingu na Windows.")  \
	MDESC(c,   web_cmsm,  ccc_enable_google_sitemaps,    5,1,0,32,        "Nelze zapnout/vypnout Google sitemapy.")  \
	MDESC(c,   web_cmsm,  ccc_generate_google_sitemaps,  5,1,0,33,        "Nelze vygenerovat Google sitemapy.")  \
	MDESC(c,   web_cmsm,  ccc_get_google_sitemaps,       5,1,0,34,        "Nelze zjistit nastaven� Google sitemap.")  \
	MDESC(c,   web_cmsm,  ccc_enable_google_sitemaps_cron, 5,1,0,35,      "Nelze zapnout/vypnout periodickou aktualizaci Google sitemapy.")  \
	MDESC(c,   web_cmsm,  ccc_upload_dba_database_backup,  5,1,0,36,      "Nelze st�hnout kopii datab�ze do u�ivatelsk�ho prostoru site.")  \
	MDESC(c,   web_cmsm,  ccc_update_site_permissions,   5,1,0,37,        "Nelze zregenerovat p��stupov� pr�va site.") \
	MDESC(c,   web_cmsm,  ccc_add_ftp_account,           5,1,0,38,        "Nelze p�idat nov� FTP ��et.")  \
	MDESC(c,   web_cmsm,  ccc_delete_ftp_account,        5,1,0,39,        "Nelze odebrat FTP ��et.")  \
	MDESC(c,   web_cmsm,  ccc_set_server_admin_email,    5,1,0,40,        "Nelze nastavit emailovou adresu spr�vce vhosta.")  \
	MDESC(c,   web_cmsm,  ccc_get_server_admin_email,    5,1,0,41,        "Nelze zjistit emailovou adresu spr�vce vhosta.")  \
	MDESC(c,   web_cmsm,  ccc_mail_set_site_limits,      5,1,0,42,        "Nelze nastavit limity odeslan�ch email�.") \
	MDESC(c,   web_cmsm,  ccc_mail_get_site_limits,      5,1,0,43,        "Nelze zjistit limity odeslan�ch email�.") \
	MDESC(c,   web_cmsm,  ccc_mail_reload_site_limits,   5,1,0,44,        "Nelze vydat p��kaz k aktualizaci limit� odeslan�ch email�.") \
	MDESC(c,   web_cmsm,  ccc_mail_get_current_counts,   5,1,0,45,        "Nelze zjistit aktu�ln� po�ty odeslan�ch email�.") \
	MDESC(c,   web_cmsm,  ccc_mail_decrease_hour_count,  5,1,0,46,        "Nelze sn�it po�et odeslan�ch mail�.") \
	MDESC(c,   web_cmsm,  ccc_backup_customer_site_data, 5,1,0,47,        "Nelze vytvo�it u�ivatelskou z�lohu site.") \
	MDESC(c,   web_cmsm,  ccc_get_site_information,      5,1,0,48,        "Nelze zjistit informace o dan� site.")  \
	MDESC(c,   web_cmsm,  ccc_check_ftp_password,        5,1,0,49,        "Nelze ov��it heslo FTP ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_lock_ssh_account,          5,1,0,50,        "Nelze zamknout SSH p��stup dan�mu ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_ssh_account,        5,1,0,51,        "Nelze odemknout SSH p��stup dan�mu ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_get_ssh_account_status,    5,1,0,52,        "Nelze zjistit stav SSH p��stupu dan�ho ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_get_vhost_ip,              5,1,0,53,        "Nelze zjistit IP adresu dan�ho vhosta.")  \
	MDESC(c,   web_cmsm,  ccc_get_php_admin_value,       5,1,0,56,        "Chyba p�i zji��ov�n� php_admin_value parametru.")  \
	MDESC(c,   web_cmsm,  ccc_set_php_admin_value,       5,1,0,57,        "Chyba p�i nastaven� php_admin_value parametru.")  \
	MDESC(c,   web_cmsm,  ccc_lock_smb_account,          5,1,0,58,        "Nelze zamknout SMB p��stup dan�mu ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_unlock_smb_account,        5,1,0,59,        "Nelze odemknout SMB p��stup dan�mu ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_get_smb_account_status,    5,1,0,60,        "Nelze zjistit stav SMB p��stupu dan�ho ��tu.")  \
	MDESC(c,   web_cmsm,  ccc_enable_iapp_ftp_account,   5,1,0,61,        "Nelze povolit FTP ��et pro instalace aplikac�.")  \
	MDESC(c,   web_cmsm,  ccc_disable_iapp_ftp_account,  5,1,0,62,        "Nelze zak�zat FTP ��et pro instalace aplikac�.")  \
	MDESC(c,   web_cmsm,  ccc_ssl_set_vhost_certificate, 5,1,0,63,        "Nelze nastavit SSL certifik�t vhosta.") \
	MDESC(c,   web_cmsm,  ccc_ssl_remove_vhost_certificate, 5,1,0,64,     "Nelze odstranit SSL certifik�t vhosta.") \
	MDESC(c,   web_cmsm,  ccc_set_site_vhosts_ip,        5,1,0,65,        "Nelze nastavit IP adresu vhost�m dan� site.") \

// web responses
#define WEB_RESP(c) \
	MDESC(c,   web_resp,  db_error,                      5,0,0,30001,     "Chyba p�i p��stupu k datab�zi.") \
	MDESC(c,   web_resp,  perl_error,                    5,0,0,30002,     "Chyba p�i vol�n� embedded perlu.") \
	MDESC(c,   web_resp,  missing_site_name,             5,0,0,30003,     "Chyb� jm�no site.") \
	MDESC(c,   web_resp,  site_already_exists,           5,0,0,30004,     "Site ji� existuje.") \
	MDESC(c,   web_resp,  missing_clid,                  5,0,0,30005,     "Chyb� identifik�tor klienta.") \
	MDESC(c,   web_resp,  invalid_clid,                  5,0,0,30006,     "Neplatn� identifik�tor klienta.") \
	MDESC(c,   web_resp,  missing_mcid,                  5,0,0,30007,     "Chyb� identifik�tor fyzick�ho serveru.") \
	MDESC(c,   web_resp,  invalid_mcid,                  5,0,0,30008,     "Neplatn� identifik�tor fyzick�ho serveru.") \
	MDESC(c,   web_resp,  site_not_found,                5,0,0,30009,     "Site nenalezena.") \
	MDESC(c,   web_resp,  machine_not_found,             5,0,0,30010,     "Fyzick� server neexistuje.") \
	MDESC(c,   web_resp,  invalid_quota_limit_order,     5,0,0,30011,     "Chybn� po�ad� velikosti limit� kv�ty (soft limit nesm� b�t v�t�� ne� hard limit).") \
	MDESC(c,   web_resp,  missing_has_quota,             5,0,0,30012,     "Chyb� p��znak zda m� klient kv�tu.") \
	MDESC(c,   web_resp,  invalid_has_quota,             5,0,0,30013,     "Neplatn� p��znak zda m� klient kv�tu.") \
	MDESC(c,   web_resp,  missing_hard_limit,            5,0,0,30014,     "Chyb� hard limit kv�ty.") \
	MDESC(c,   web_resp,  invalid_hard_limit,            5,0,0,30015,     "Neplatn� hard limit kv�ty.") \
	MDESC(c,   web_resp,  missing_soft_limit,            5,0,0,30016,     "Chyb� soft limit kv�ty.") \
	MDESC(c,   web_resp,  invalid_soft_limit,            5,0,0,30017,     "Neplatn� soft limit kv�ty.") \
	MDESC(c,   web_resp,  request_expired,               5,0,0,30018,     "Po�adavek na server byl zru�en z d�vodu vypr�en� timeoutu.") \
	MDESC(c,   web_resp,  request_failed,                5,0,0,30019,     "Po�adavek na server skon�il s chybou.") \
	MDESC(c,   web_resp,  request_failed_commit_stage,   5,0,0,30020,     "Po�adavek na server skon�il s chybou, commit f�ze po�adavku na serveru skon�ila s chybou.") \
	MDESC(c,   web_resp,  unsupported_request_action,    5,0,0,30021,     "Po�adavek na server skon�il s chybou, serveru nepodporuje danou akci.") \
	MDESC(c,   web_resp,  etc_passwd_not_found,          5,0,0,30022,     "Po�adavek na server skon�il s chybou, soubor s klientsk�mi ��ty nenalezen.") \
	MDESC(c,   web_resp,  vhost_alias_exists_as_vhost,   5,0,0,30023,     "Dan� alias ji� existuje jako samostatn� vhost.") \
	MDESC(c,   web_resp,  vhost_alias_exists_as_alias,   5,0,0,30024,     "Dan� alias ji� existuje jako alias k n�kter�mu vhostu.") \
	MDESC(c,   web_resp,  vhost_alias_not_found,         5,0,0,30025,     "Alias nenalezen.") \
	MDESC(c,   web_resp,  missing_index_template,        5,0,0,30026,     "Sch�z� parametr index_template.") \
	MDESC(c,   web_resp,  invalid_index_template,        5,0,0,30027,     "Chybn� hodnota parametru index_template.") \
	MDESC(c,   web_resp,  missing_vsid,                  5,0,0,30028,     "Sch�z� identifik�tor virtu�ln�ho serveru.") \
	MDESC(c,   web_resp,  invalid_vsid,                  5,0,0,30029,     "Chybn� identifik�tor virtu�ln�ho serveru.") \
	MDESC(c,   web_resp,  missing_vhost_ip,              5,0,0,30030,     "Sch�z� IP adresa vhostu.") \
	MDESC(c,   web_resp,  invalid_vhost_ip,              5,0,0,30031,     "Chybn� IP adresa vhostu.") \
	MDESC(c,   web_resp,  reldir_empty,                  5,0,0,30032,     "Parametr reldir je pr�zdn�.") \
	MDESC(c,   web_resp,  reldir_is_absolute,            5,0,0,30033,     "Parametr reldir obsahuje absolutn� cestu.") \
	MDESC(c,   web_resp,  missing_domain,                5,0,0,30034,     "Sch�z� dom�na.") \
	MDESC(c,   web_resp,  invalid_domain,                5,0,0,30035,     "Chybn� n�zev dom�ny.") \
	MDESC(c,   web_resp,  missing_reldir,                5,0,0,30036,     "Sch�z� parametr reldir.") \
	MDESC(c,   web_resp,  virtual_server_ip_not_found,   5,0,0,30037,     "Nelze zjistit IP adresu virtu�ln�ho serveru.") \
	MDESC(c,   web_resp,  domain_exists_as_vhost,        5,0,0,30038,     "Dom�na ji� existuje jako samostatn� vhost.") \
	MDESC(c,   web_resp,  domain_exists_as_alias,        5,0,0,30039,     "Dom�na ji� existuje jako alias k n�kter�mu vhostu.") \
	MDESC(c,   web_resp,  vhost_not_found,               5,0,0,30040,     "Vhost nenalezen.") \
	MDESC(c,   web_resp,  missing_vhid,                  5,0,0,30041,     "Sch�z� identifik�tor vhosta.") \
	MDESC(c,   web_resp,  invalid_vhid,                  5,0,0,30042,     "Chybn� form�t identifik�toru vhosta.") \
	MDESC(c,   web_resp,  missing_alias,                 5,0,0,30043,     "Sch�z� alias.") \
	MDESC(c,   web_resp,  invalid_alias,                 5,0,0,30044,     "Chybn� alias.") \
	MDESC(c,   web_resp,  ftp_username_already_exists,   5,0,0,30045,     "FTP ��et s t�mto u�ivatelsk�m jm�nem ji� existuje.") \
	MDESC(c,   web_resp,  missing_password,              5,0,0,30046,     "Sch�z� heslo.") \
	MDESC(c,   web_resp,  invalid_password,              5,0,0,30047,     "Chybn� form�t hesla.") \
	MDESC(c,   web_resp,  missing_user_name,             5,0,0,30048,     "Sch�z� u�ivatelsk� jm�no.") \
	MDESC(c,   web_resp,  invalid_user_name,             5,0,0,30049,     "Chybn� form�t u�ivatelsk�ho jm�na.") \
	MDESC(c,   web_resp,  ftp_account_not_found,         5,0,0,30050,     "FTP ��et nenalezen.") \
	MDESC(c,   web_resp,  ftp_account_instance_not_found,5,0,0,30051,     "Instance FTP ��tu nenalezena.") \
	MDESC(c,   web_resp,  missing_admin_email,           5,0,0,30052,     "Chyb� parametr admin_email.") \
	MDESC(c,   web_resp,  invalid_admin_email,           5,0,0,30053,     "Chybn� form�t parametru admin_email.") \
	MDESC(c,   web_resp,  missing_upload_source,         5,0,0,30054,     "Chyb� parametr upload_source.") \
	MDESC(c,   web_resp,  invalid_upload_source,         5,0,0,30055,     "Chybn� hodnota parametru upload_source.") \
	MDESC(c,   web_resp,  missing_owr_system_dirs,       5,0,0,30056,     "Chyb� parametr owr_system_dirs.") \
	MDESC(c,   web_resp,  invalid_owr_system_dirs,       5,0,0,30057,     "Chybn� hodnota parametru owr_system_dirs.") \
	MDESC(c,   web_resp,  invalid_upload_source_format,  5,0,0,30058,     "Chybn� specifikace zdroje p�enosu dat.") \
	MDESC(c,   web_resp,  unsupported_upload_feature,    5,0,0,30059,     "N�kter� vlastnost p�enosu dat nen� podporovan�.") \
	MDESC(c,   web_resp,  ftp_transfer_failed,           5,0,0,30060,     "Do�lo k chyb� p�i FTP p�enosu.") \
	MDESC(c,   web_resp,  no_matching_ftp_account,       5,0,0,30061,     "Odpov�daj�c� FTP ��et nenalezen.") \
	MDESC(c,   web_resp,  multiple_matching_ftp_accounts,5,0,0,30062,     "Nalezen v�ce ne� jeden odpov�daj�c� FTP ��et.") \
	MDESC(c,   web_resp,  ftp_password_change_failed,    5,0,0,30063,     "Zm�na hesla FTP ��tu selhala.") \
	MDESC(c,   web_resp,  htauth_haid_dir_not_found,     5,0,0,30064,     "Chr�n�n� htauth adres�� s danou hodnotou haid nenalezen." ) \
	MDESC(c,   web_resp,  missing_haid,                  5,0,0,30065,     "Sch�z� parametr haid." ) \
	MDESC(c,   web_resp,  invalid_haid,                  5,0,0,30066,     "Chybn� hodnota parametru haid." ) \
	MDESC(c,   web_resp,  missing_update_pwd_file,       5,0,0,30067,     "Sch�z� parametr update_pwd_file. ") \
	MDESC(c,   web_resp,  invalid_update_pwd_file,       5,0,0,30068,     "Chybn� hodnota parametru update_pwd_file. ") \
	MDESC(c,   web_resp,  vhost_exists_as_vhost,         5,0,0,30069,     "Vhost s dan�m dom�nov�m jm�nem ji� existuje.") \
	MDESC(c,   web_resp,  vhost_exists_as_alias,         5,0,0,30070,     "Dan� dom�nov� jm�no ji� existuje jako alias k n�kter�mu vhostu.") \
	MDESC(c,   web_resp,  site_name_not_found,           5,0,0,30071,     "Site s dan�m jm�nem nenalezena.") \
	MDESC(c,   web_resp,  vs_name_not_found,             5,0,0,30072,     "Virtu�ln� server s dan�m jm�nem nenalezen.") \
	MDESC(c,   web_resp,  missing_vs_name,               5,0,0,30073,     "Sch�z� parametr vs_name.") \
	MDESC(c,   web_resp,  invalid_vs_name,               5,0,0,30074,     "Chyb� hodnota parametru vs_name.") \
	MDESC(c,   web_resp,  domain_not_found,              5,0,0,30075,     "Dom�nov� jm�no nenalezeno.") \
	MDESC(c,   web_resp,  invalid_reldir,                5,0,0,30076,     "Chybn� hodnota parametru reldir.") \
	MDESC(c,   web_resp,  vhost_uses_htauth_stats_locking, 5,0,0,30077,   "Vhost pou��v� zamyk�n� statistik na b�zi htauth") \
	MDESC(c,   web_resp,  chdir_is_absolute,             5,0,0,30078,     "Parametr chdir obsahuje absolutn� cestu.") \
	MDESC(c,   web_resp,  invalid_chdir,                 5,0,0,30079,     "Chybn� hodnota parametru chdir.") \
	MDESC(c,   web_resp,  missing_year,                  5,0,0,30080,     "Chyb� parametr year.") \
	MDESC(c,   web_resp,  invalid_year,                  5,0,0,30081,     "Chybn� hodnota parametru year.") \
	MDESC(c,   web_resp,  missing_month,                 5,0,0,30082,     "Chyb� parametr month.") \
	MDESC(c,   web_resp,  invalid_month,                 5,0,0,30083,     "Chybn� hodnota parametru month.") \
	MDESC(c,   web_resp,  missing_top_sites_count,       5,0,0,30084,     "Chyb� parametr top_sites_count.") \
	MDESC(c,   web_resp,  invalid_top_sites_count,       5,0,0,30085,     "Chybn� hodnota parametru top_sites_count.") \
	MDESC(c,   web_resp,  missing_emails,                5,0,0,30086,     "Chyb� parametr emails.") \
	MDESC(c,   web_resp,  invalid_email_address,         5,0,0,30087,     "Chybn� form�t emailov� adresy.") \
	MDESC(c,   web_resp,  no_email_addresses,            5,0,0,30088,     "Nebyla zad�na ��dn� emailov� adresa.") \
	MDESC(c,   web_resp,  invalid_min_mbytes,            5,0,0,30089,     "Chybn� hodnota parametru min_bytes.") \
	MDESC(c,   web_resp,  send_email_failed,             5,0,0,30090,     "Do�lo k chyb� p�i odes�l�n� emailu.") \
	MDESC(c,   web_resp,  primary_vhost_not_found,       5,0,0,30091,     "Prim�rn� vhost dan� site nenalezen." ) \
	MDESC(c,   web_resp,  missing_language,              5,0,0,30092,     "Chyb� parametr language." ) \
	MDESC(c,   web_resp,  empty_language,                5,0,0,30093,     "Parametr language je pr�zdn�." ) \
	MDESC(c,   web_resp,  invalid_language,              5,0,0,30094,     "Chybn� hodnota parametru language." ) \
	MDESC(c,   web_resp,  missing_error_code,            5,0,0,30095,     "Chyb� parametr error_code." ) \
	MDESC(c,   web_resp,  invalid_error_code,            5,0,0,30096,     "Chybn� hodnota parametru error_code." ) \
	MDESC(c,   web_resp,  missing_error_document,        5,0,0,30097,     "Chyb� parametr error_document." ) \
	MDESC(c,   web_resp,  empty_error_document,          5,0,0,30098,     "Parametr error_document je pr�zdn�." ) \
	MDESC(c,   web_resp,  missing_report_email,          5,0,0,30099,     "Chyb� parametr report_email." ) \
	MDESC(c,   web_resp,  invalid_report_email,          5,0,0,30100,     "Chybn� hodnota parametru report_email." ) \
	MDESC(c,   web_resp,  missing_verify_migration,      5,0,0,30101,     "Chyb� parametr verify_migration." ) \
	MDESC(c,   web_resp,  invalid_verify_migration,      5,0,0,30102,     "Chybn� hodnota parametru verify_migration." ) \
	MDESC(c,   web_resp,  missing_src_ip,                5,0,0,30103,     "Chyb� parametr src_ip." ) \
	MDESC(c,   web_resp,  invalid_src_ip,                5,0,0,30104,     "Chybn� hodnota parametru src_ip." ) \
	MDESC(c,   web_resp,  missing_dst_ip,                5,0,0,30105,     "Chyb� parametr dst_ip." ) \
	MDESC(c,   web_resp,  invalid_dst_ip,                5,0,0,30106,     "Chybn� hodnota parametru dst_ip." ) \
	MDESC(c,   web_resp,  unknown_src_ip_address,        5,0,0,30107,     "Nezn�m� zdrojov� IP adresa." ) \
	MDESC(c,   web_resp,  unknown_dst_ip_address,        5,0,0,30108,     "Nezn�m� c�lov� IP adresa." ) \
	MDESC(c,   web_resp,  database_inconsistency,        5,0,0,30109,     "Nekonzistence v tabulk�ch datab�ze." ) \
	MDESC(c,   web_resp,  vhost_with_own_ip_address_found, 5,0,0,30110,   "Mezi migrovan�mi vhosty je minim�ln� jeden vhost s vlastn� IP adresou." )\
	MDESC(c,   web_resp,  no_vhosts_on_virtual_server,   5,0,0,30111,     "Na dan�m virtual_serveru neexistuj� ��dn� vhosty dan� site.") \
	MDESC(c,   web_resp,  invalid_migration_flags,       5,0,0,30112,     "Chybn� kombinace p��znak� migrace." ) \
	MDESC(c,   web_resp,  missing_f_copy_data,           5,0,0,30113,     "Chyb� parametr f_copy_data" ) \
	MDESC(c,   web_resp,  invalid_f_copy_data,           5,0,0,30114,     "Chybn� hodnota parametru f_copy_data" ) \
	MDESC(c,   web_resp,  missing_f_realize,             5,0,0,30115,     "Chyb� parametr f_realize" ) \
	MDESC(c,   web_resp,  invalid_f_realize,             5,0,0,30116,     "Chybn� hodnota parametru f_realize" ) \
	MDESC(c,   web_resp,  missing_f_unpack_data,         5,0,0,30117,     "Chyb� parametr f_unpack_data" ) \
	MDESC(c,   web_resp,  invalid_f_unpack_data,         5,0,0,30118,     "Chybn� hodnota parametru f_unpack_data" ) \
	MDESC(c,   web_resp,  site_not_being_migrated,       5,0,0,30119,     "Neprob�h� migrace dan� site.")\
	MDESC(c,   web_resp,  migration_record_not_found,    5,0,0,30120,     "Nebyl nalezen z�znam o prob�haj�c� migraci site." )\
	MDESC(c,   web_resp,  nonmatching_source_machines,   5,0,0,30121,     "Fyzick� server (mcid) neodpov�d� o�ek�van�mu serveru." )\
	MDESC(c,   web_resp,  nonmatching_source_vs,         5,0,0,30122,     "Zdrojov� virtu�ln� server neodpov�d� o�ek�van�mu virtu�ln�mu serveru." )\
	MDESC(c,   web_resp,  nonmatching_dest_vs,           5,0,0,30123,     "C�lov� virtu�ln� server neodpov�d� o�ek�van�mu virtu�ln�mu serveru." ) \
	MDESC(c,   web_resp,  unexpected_migration_status,   5,0,0,30124,     "Neo�ek�van�/nep��pustn� stav migrace." )\
	MDESC(c,   web_resp,  site_archive_not_found,        5,0,0,30125,     "Arch�v se zabalen�mi daty site nenalezen." ) \
	MDESC(c,   web_resp,  sitehome_already_exists,       5,0,0,30126,     "Hlavn� adres�� site ji� existuje." ) \
	MDESC(c,   web_resp,  missing_f_must_not_exist,      5,0,0,30127,     "Chyb� parametr f_must_not_exist." ) \
	MDESC(c,   web_resp,  invalid_f_must_not_exist,      5,0,0,30128,     "Chybn� hodnota parametru f_must_not_exist." ) \
	MDESC(c,   web_resp,  site_is_being_migrated,        5,0,0,30129,     "Prob�h� migrace site." ) \
	MDESC(c,   web_resp,  zombie_on_dest_machine,        5,0,0,30130,     "Na c�lov�m serveru jsou evidov�ny poz�statky (zombie) t�e site." ) \
	MDESC(c,   web_resp,  site_has_references_to_machine,5,0,0,30131,     "Na dan� server existuj� aktivn� odkazy (vhosty, FTP ��ty, ...) z dan� site." ) \
	MDESC(c,   web_resp,  no_zombie_migration_record,    5,0,0,30132,     "Neexistuje z�znam o migraci, kter� by zanechala zombie na dan�m serveru." ) \
	MDESC(c,   web_resp,  zombie_not_expired_yet,        5,0,0,30133,     "Zombie site je je�t� p��li� �erstv�." ) \
	MDESC(c,   web_resp,  unsupported_migration,         5,0,0,30134,     "Nepodporovan� typ migrace." ) \
	MDESC(c,   web_resp,  missing_spec_quota,            5,0,0,30135,     "Chyb� parametr spec_quota" ) \
	MDESC(c,   web_resp,  invalid_spec_quota,            5,0,0,30136,     "Chybn� hodnota parametru spec_quota" ) \
	MDESC(c,   web_resp,  missing_enable,                5,0,0,30137,     "Chyb� parametr 'enable'." ) \
	MDESC(c,   web_resp,  invalid_enable,                5,0,0,30138,     "Chybn� hodnota parametru 'enable'." ) \
	MDESC(c,   web_resp,  missing_test_only,             5,0,0,30139,     "Chyb� parametr 'test_only'." ) \
	MDESC(c,   web_resp,  invalid_test_only,             5,0,0,30140,     "Chybn� hodnota parametru 'test_only'." ) \
	MDESC(c,   web_resp,  google_sitemaps_not_enabled,   5,0,0,30141,     "Google sitemaps nejsou povoleny." ) \
	MDESC(c,   web_resp,  missing_create_sample,         5,0,0,30142,     "Chyb� parametr 'create_sample'." ) \
	MDESC(c,   web_resp,  invalid_create_sample,         5,0,0,30143,     "Chybn� hodnota parametru 'create_sample'." ) \
	MDESC(c,   web_resp,  google_sitemap_config_not_found, 5,0,0,30144,   "Konfigura�n� soubor Google sitemaps nenalezen." ) \
	MDESC(c,   web_resp,  google_sitemap_gen_failed,     5,0,0,30145,     "Gener�tor Google sitemapy skon�il s chybou." ) \
	MDESC(c,   web_resp,  missing_copy_rotation,         5,0,0,30146,     "Chyb� parametr 'copy_rotation'." ) \
	MDESC(c,   web_resp,  invalid_copy_rotation,         5,0,0,30147,     "Chybn� hodnota parametru 'copy_rotation'." ) \
	MDESC(c,   web_resp,  missing_ds_ip_must_match,      5,0,0,30148,     "Chyb� parametr 'ds_ip_must_match'." ) \
	MDESC(c,   web_resp,  invalid_ds_ip_must_match,      5,0,0,30149,     "Chybn� hodnota parametru 'ds_ip_must_match'." ) \
	MDESC(c,   web_resp,  missing_ds_ip,                 5,0,0,30150,     "Chyb� parametr 'ds_ip'." ) \
	MDESC(c,   web_resp,  invalid_ds_ip,                 5,0,0,30151,     "Chybn� hodnota parametru 'ds_ip'." ) \
	MDESC(c,   web_resp,  invalid_create_ftp_dir,        5,0,0,30152,     "Chybn� hodnota parametru 'create_ftp_dir'." ) \
	MDESC(c,   web_resp,  cannot_create_ftp_dir_inside_system_dirs, 5,0,0,30153,     "C�lov� adres�� FTP ��tu nelze vytvo�it, proto�e ukazuje dovnit� syst�mov�ch adres��� site." ) \
	MDESC(c,   web_resp,  ftp_dir_already_exists_as_nondir, 5,0,0,30154,  "C�lov� adres�� FTP ��tu nelze vytvo�it, proto�e ji� existuje a p�itom se nejedn� o adres��." ) \
	MDESC(c,   web_resp,  backend_ftp_download_file_connect_failed, 5,0,0,30155, "Chyba p�i stahov�n� vzd�len�ho souboru na webov� server, nelze se p�ipojit k FTP serveru." ) \
	MDESC(c,   web_resp,  backend_ftp_download_file_transfer_failed, 5,0,0,30156, "Chyba p�i stahov�n� vzd�len�ho souboru na webov� server, soubor neexistuje nebo do�lo k chyb� p�i p�enosu." ) \
	MDESC(c,   web_resp,  zombie_getifaddrs_error,       5,0,0,30157,     "Nelze odstranit zombie, chyba p�i zji��ov�n� s�ov�ch rozhran� na serveru." ) \
	MDESC(c,   web_resp,  zombie_dnsip_check_error,      5,0,0,30158,     "Nelze odstranit zombie, nepoda�ilo se jednozna�n� prov��it �e dom�na v DNS neodkazuje na data zombie." ) \
	MDESC(c,   web_resp,  domain_dns_points_to_zombie,   5,0,0,30159,     "Nelze odstranit zombie, byla nalezena dom�na dan� site kter� pravd�podobn� odkazuje na data zombie." ) \
	MDESC(c,   web_resp,  ftp_directory_path_too_long,   5,0,0,30160,     "C�lov� adres�� FTP ��tu je p��li� dlouh�." ) \
	MDESC(c,   web_resp,  ftp_chdir_path_too_long,       5,0,0,30161,     "Chdir adres�� FTP ��tu je p��li� dlouh�." ) \
	MDESC(c,   web_resp,  missing_db_name,               5,0,0,30162,     "Chyb� parametr 'db_name'." ) \
	MDESC(c,   web_resp,  invalid_db_name,               5,0,0,30163,     "Chybn� hodnota parametru 'db_name'." ) \
	MDESC(c,   web_resp,  missing_minute_limit,          5,0,0,30164,     "Chyb� parametr 'minute_limit'." ) \
	MDESC(c,   web_resp,  invalid_minute_limit,          5,0,0,30165,     "Chybn� hodnota parametru 'minute_limit'." ) \
	MDESC(c,   web_resp,  missing_month_limit,           5,0,0,30166,     "Chyb� parametr 'month_limit'." ) \
	MDESC(c,   web_resp,  invalid_month_limit,           5,0,0,30167,     "Chybn� hodnota parametru 'month_limit'." ) \
	MDESC(c,   web_resp,  missing_recursive,             5,0,0,30168,     "Chyb� parametr 'recursive'." ) \
	MDESC(c,   web_resp,  invalid_recursive,             5,0,0,30169,     "Chybn� hodnota parametru 'recursive'." ) \
	MDESC(c,   web_resp,  missing_hour_count,            5,0,0,30170,     "Chyb� parametr 'hour_count'." ) \
	MDESC(c,   web_resp,  invalid_hour_count,            5,0,0,30171,     "Chybn� hodnota parametru 'hour_count'." ) \
	MDESC(c,   web_resp,  over_quota,                    5,0,0,30172,     "Diskov� kv�ta site je vy�erp�na." ) \
	MDESC(c,   web_resp,  ftp_account_does_not_belong_to_site, 5,0,0,30173, "FTP ��et nen�le�� k dan� site." ) \
	MDESC(c,   web_resp,  ssh_account_not_found,         5,0,0,30174,     "SSH ��et nenalezen.") \
	MDESC(c,   web_resp,  ssh_account_instance_not_found,5,0,0,30175,     "Instance SSH ��tu nenalezena.") \
	MDESC(c,   web_resp,  missing_from_zwm,              5,0,0,30176,     "Chyb� parametr 'from_zwm'." ) \
	MDESC(c,   web_resp,  invalid_from_zwm,              5,0,0,30177,     "Chybn� hodnota parametru 'from_zwm'." ) \
	MDESC(c,   web_resp,  missing_restart_action,        5,0,0,30178,     "Chyb� parametr 'restart_action'." ) \
	MDESC(c,   web_resp,  invalid_restart_action,        5,0,0,30179,     "Chybn� hodnota parametru 'restart_action'." ) \
	MDESC(c,   web_resp,  php_admin_value_not_found,     5,0,0,30180,     "PHP admin direktiva vhosta neexistuje." ) \
	MDESC(c,   web_resp,  missing_php_directive,         5,0,0,30181,     "Chyb� parametr 'php_directive'." ) \
	MDESC(c,   web_resp,  invalid_php_directive,         5,0,0,30182,     "Chybn� hodnota parametru 'php_directive'." ) \
	MDESC(c,   web_resp,  missing_php_value,             5,0,0,30183,     "Chyb� parametr 'php_value'." ) \
	MDESC(c,   web_resp,  invalid_php_value,             5,0,0,30184,     "Chybn� hodnota parametru 'php_value'." ) \
	MDESC(c,   web_resp,  smb_account_not_found,         5,0,0,30185,     "SMB ��et nenalezen.") \
	MDESC(c,   web_resp,  smb_account_instance_not_found,5,0,0,30186,     "Instance SMB ��tu nenalezena.") \
	MDESC(c,   web_resp,  missing_iapp_token,            5,0,0,30187,     "Chyb� parametr 'iapp_token'.") \
	MDESC(c,   web_resp,  cannot_generate_password,      5,0,0,30188,     "Nelze vygenerovat heslo.") \
	MDESC(c,   web_resp,  missing_key_data,              5,0,0,30189,     "Chyb� parametr 'key_data'." ) \
	MDESC(c,   web_resp,  invalid_key_data,              5,0,0,30190,     "Chybn� hodnota parametru 'key_data'." ) \
	MDESC(c,   web_resp,  missing_cert_data,             5,0,0,30191,     "Chyb� parametr 'cert_data'." ) \
	MDESC(c,   web_resp,  invalid_cert_data,             5,0,0,30192,     "Chybn� hodnota parametru 'cert_data'." ) \
	MDESC(c,   web_resp,  missing_ca_data,               5,0,0,30193,     "Chyb� parametr 'ca_data'." ) \
	MDESC(c,   web_resp,  invalid_ca_data,               5,0,0,30194,     "Chybn� hodnota parametru 'ca_data'." ) \
	MDESC(c,   web_resp,  ssl_slave_request_not_queued,  5,0,0,30195,     "SSL po�adavek nebyl za�azen do fronty po�adavk�." ) \
	MDESC(c,   web_resp,  ssl_slave_wait_for_response_failed,  5,0,0,30196,  "�ek�n� na odpov�d na SSL po�adavek selhalo." ) \
	MDESC(c,   web_resp,  ssl_slave_request_failed,      5,0,0,30197,     "SSL po�adavek selhal." ) \
	MDESC(c,   web_resp,  ssl_slave_request_timeout,     5,0,0,30198,     "SSL po�adavek vytimeoutoval." ) \
	MDESC(c,   web_resp,  invalid_copy_from_domain,      5,0,0,30199,     "Chybn� hodnota parametru 'copy_from_domain'." ) \
\
	MDESC(c,   web_resp,  ccc_ip_server_not_found,       5,1,0,30001,     "Virtu�ln� server s danou IP adresou nenalezen.") \
	MDESC(c,   web_resp,  ccc_var_code_not_found,        5,1,0,30002,     "Varianta s dan�m ��slem neexistuje.") \
	MDESC(c,   web_resp,  ccc_missing_id_service,        5,1,0,30003,     "Sch�z� identifik�tor servisu.") \
	MDESC(c,   web_resp,  ccc_invalid_id_service,        5,1,0,30004,     "Chybn� form�t identifik�toru servisu.") \
	MDESC(c,   web_resp,  ccc_missing_var_code,          5,1,0,30005,     "Sch�z� k�d varianty.") \
	MDESC(c,   web_resp,  ccc_invalid_var_code,          5,1,0,30006,     "Chybn� form�t k�du varianty.") \
	MDESC(c,   web_resp,  ccc_missing_ip_service,        5,1,0,30007,     "Sch�z� IP adresa servisu.") \
	MDESC(c,   web_resp,  ccc_invalid_ip_service,        5,1,0,30008,     "Chybn� form�t IP adresy servisu.") \
	MDESC(c,   web_resp,  ccc_missing_ip_server,         5,1,0,30009,     "Sch�z� IP adresa serveru.") \
	MDESC(c,   web_resp,  ccc_invalid_ip_server,         5,1,0,30010,     "Chybn� form�t IP adresy serveru.") \
	MDESC(c,   web_resp,  ccc_id_service_not_found,      5,1,0,30011,     "Servis s dan�m identifik�torem nenalezen.") \
	MDESC(c,   web_resp,  ccc_vhost_not_found,           5,1,0,30012,     "Vhost nenalezen.") \
	MDESC(c,   web_resp,  ccc_unmatched_id_service,      5,1,0,30013,     "Neodpov�daj�c� identifik�tor servisu.") \
	MDESC(c,   web_resp,  ccc_cannot_remove_unused_site, 5,1,0,30014,     "Nelze odstranit pr�zdnou site.") \
	MDESC(c,   web_resp,  ccc_id_service_already_exists, 5,1,0,30015,     "Dan� id servisu je ji� namapov�no na existuj�c� site.") \
	MDESC(c,   web_resp,  ccc_invalid_site_relative_reldir, 5,1,0,30016,  "Chybn� hodnota parametru site_relative_reldir.") \
	MDESC(c,   web_resp,  ccc_domain_is_primary_vhost,   5,1,0,30017,     "Dom�na je prim�rn�m vhostem cel� site.") \
	MDESC(c,   web_resp,  ccc_service_name_does_not_match_id_service, 5,1,0,30018, "P�edlo�en� jm�no site neodpov�d� jm�nu site zji�t�n�mu podle id servisu." ) \
	MDESC(c,   web_resp,  ccc_mig2n_archive_not_found,   5,1,0,30019,     "Arch�v se zabalen�mi daty site ze star�ho hostingu nenalezen." ) \
	MDESC(c,   web_resp,  ccc_migration_between_in_situ_stages, 5,1,0,30020, "Byla detekov�na neo�ek�van� migrace site spu�t�n� uprost�ed dvou f�z� in-situ migrace.") \
	MDESC(c,   web_resp,  ccc_cannot_remember_stage1_done, 5,1,0,30021,   "Do�lo k chyb� p�i zaznamen�v�n� �sp�n�ho dokon�en� prvn� f�ze migrace site." ) \
	MDESC(c,   web_resp,  ccc_site_on_multiple_machines, 5,1,0,30022,     "Dom�na m� vhosty na n�kolika fyzick�ch serverech." ) \
	MDESC(c,   web_resp,  ccc_migration_without_realization, 5,1,0,30023, "Nen� dovoleno m�nit variantu dom�ny uprost�ed migrace, kter� nebude prov�d�t realizaci dom�ny na c�lov�m serveru." ) \
	MDESC(c,   web_resp,  ccc_site_mapping_not_found,    5,1,0,30024,     "Nenalezeno mapov�n� site na identifik�tor z Centra." ) \
	MDESC(c,   web_resp,  ccc_dba_module_not_found,      5,1,0,30025,     "Datab�zov� modul CMS nenalezen." ) \
	MDESC(c,   web_resp,  ccc_dba_database_not_found,    5,1,0,30026,     "Po�adovan� datab�ze nenalezena." ) \
	MDESC(c,   web_resp,  ccc_dba_database_ip_does_not_match, 5,1,0,30027, "IP adresa datab�zov�ho serveru neodpov�da IP adrese na kter� eviduje danou databazi modul Dba." ) \
	MDESC(c,   web_resp,  ccc_create_ftp_account_rollback_failed, 5,1,0,30028, "Zotavov�n� z chyby p�i vyt��en� FTP ��tu selhalo." ) \
\
	MDESC(c,   web_resp,  success,                       5,0,0,50000,     "Operace byla �sp�n� dokon�ena.") \
	MDESC(c,   web_resp,  site_created,                  5,0,0,50001,     "Site �sp�n� vytvo�ena.") \
	MDESC(c,   web_resp,  quota,                         5,0,0,50002,     "Kv�ta �sp�n� zji�t�na.") \
	MDESC(c,   web_resp,  request_queued,                5,0,0,50003,     "Po�adavek byl za�azen do fronty pro zpracov�n� na p��slu�n�m serveru.") \
	MDESC(c,   web_resp,  quota_set,                     5,0,0,50004,     "Kv�ta �sp�n� nastavena.") \
	MDESC(c,   web_resp,  vhost_created,                 5,0,0,50005,     "Vhost �sp�n� vytvo�en.") \
	MDESC(c,   web_resp,  site_www_stopped,              5,0,0,50006,     "WWW slu�ba dan� site byla �sp�n� zastavena.") \
	MDESC(c,   web_resp,  site_www_started,              5,0,0,50007,     "WWW slu�ba dan� site byla �sp�n� spu�t�na.") \
	MDESC(c,   web_resp,  vhost_stats_locked,            5,0,0,50008,     "Statistiky vhosta �sp�n� zam�eny.") \
	MDESC(c,   web_resp,  vhost_stats_unlocked,          5,0,0,50009,     "Statistiky vhosta �sp�n� odem�eny.") \
	MDESC(c,   web_resp,  vhost_stats_locking_updated,   5,0,0,50010,     "Zam�en� statistik vhosta �sp�n� aktualizov�no.") \
	MDESC(c,   web_resp,  vhost_alias_created,           5,0,0,50011,     "Alias k vhostu �sp�n� p�id�n.") \
	MDESC(c,   web_resp,  vhost_alias_removed,           5,0,0,50012,     "Alias vhostu �sp�n� odstran�n.") \
	MDESC(c,   web_resp,  ftp_account_created,           5,0,0,50013,     "FTP ��et byl �sp�n� vytvo�en.") \
	MDESC(c,   web_resp,  ftp_account_locks_updated,     5,0,0,50014,     "Z�mky z�visej�c� na FTP ��tu byly �sp�n� aktualizov�ny.") \
	MDESC(c,   web_resp,  ftp_account_removed,           5,0,0,50015,     "FTP ��et byl �sp�n� odstran�n.") \
	MDESC(c,   web_resp,  htauth_password_file_updated,  5,0,0,50016,     "Soubor s hesly pro chr�n�n� p��stup k adres���m �sp�n� aktualizov�n.") \
	MDESC(c,   web_resp,  htauth_locking_updated,        5,0,0,50017,     "Chr�n�n� p��stup k adres��i(�m) �sp�n� aktualizov�n.") \
	MDESC(c,   web_resp,  htauth_locking_removed,        5,0,0,50018,     "Chr�n�n� p��stup k adres��i �sp�n� odstran�n.") \
	MDESC(c,   web_resp,  site_permissions_updated,      5,0,0,50019,     "P��stupov� pr�va k site �sp�n� p�egenerov�na.") \
	MDESC(c,   web_resp,  clid_of_site_name,             5,0,0,50020,     "ID site �sp�n� ur�eno ze jm�na site.") \
	MDESC(c,   web_resp,  vsid_of_vs_name,               5,0,0,50021,     "ID virtu�ln�ho serveru �sp�n� ur�eno z jeho jm�na.") \
	MDESC(c,   web_resp,  vhost_config_updated,          5,0,0,50022,     "Konfigurace vhostu byla �sp�n� p�egenerov�na.") \
	MDESC(c,   web_resp,  top_traffic_report_empty,      5,0,0,50023,     "P�ehled slu�eb s nejvy���m trafficem je pr�zdn�.") \
	MDESC(c,   web_resp,  top_traffic_report_sent,       5,0,0,50024,     "P�ehled slu�eb s nejvy���m trafficem �sp�n� odesl�n.") \
	MDESC(c,   web_resp,  top_traffic_report,            5,0,0,50025,     "P�ehled slu�eb s nejvy���m trafficem.") \
	MDESC(c,   web_resp,  vs_ips_on_same_machine_result, 5,0,0,50026,     "V�sledek detekce zda IP adresy virtu�ln�ch server� ukazuj� na stejn� fyzick� stroj.")\
	MDESC(c,   web_resp,  zombie_removed,                5,0,0,50027,     "Zombie site byla �sp�n� odstran�na.")\
	MDESC(c,   web_resp,  expired_zombies,               5,0,0,50028,     "Seznam zombie sites ur�en�ch k odstran�n�.")\
	MDESC(c,   web_resp,  expired_shadow_vhosts,         5,0,0,50029,     "Seznam shadow vhost� ur�en�ch k odstran�n�.")\
	MDESC(c,   web_resp,  google_sitemaps_enabled,       5,0,0,50030,     "Google sitemaps byly povoleny.")\
	MDESC(c,   web_resp,  google_sitemaps_disabled,      5,0,0,50031,     "Google sitemaps byly zak�z�ny.")\
	MDESC(c,   web_resp,  google_sitemaps_generated,     5,0,0,50032,     "Google sitemapa byla �sp�n� vygenerov�na.")\
	MDESC(c,   web_resp,  google_sitemaps,               5,0,0,50033,     "Informace o nastaven� Google sitemap.")\
	MDESC(c,   web_resp,  google_sitemaps_cron_enabled,  5,0,0,50034,     "Periodick� aktualizace Google sitemaps byla povolena.")\
	MDESC(c,   web_resp,  google_sitemaps_cron_disabled, 5,0,0,50035,     "Periodick� aktualizace Google sitemaps byla zak�z�na.")\
	MDESC(c,   web_resp,  vhosts_with_server_admin_email,5,0,0,50036,     "Seznam vhost� s dan�m emailem spr�vce dom�ny." ) \
	MDESC(c,   web_resp,  machines,                      5,0,0,50037,     "Seznam server�." ) \
	\
	MDESC(c,   web_resp,  ccc_main_domain_created,       5,1,0,50001,     "Hlavn� dom�na �sp�n� vytvo�ena.") \
	MDESC(c,   web_resp,  ccc_www_stopped,               5,1,0,50002,     "WWW slu�ba servisu �sp�n� zastavena.") \
	MDESC(c,   web_resp,  ccc_www_started,               5,1,0,50003,     "WWW slu�ba servisu �sp�n� spu�t�na.") \
	MDESC(c,   web_resp,  ccc_main_stats_locked,         5,1,0,50004,     "Statistiky hlavn� dom�ny �sp�n� zam�eny.") \
	MDESC(c,   web_resp,  ccc_main_stats_unlocked,       5,1,0,50005,     "Statistiky hlavn� dom�ny �sp�n� odem�eny.") \
	MDESC(c,   web_resp,  ccc_alias_created,             5,1,0,50006,     "Alias k hlavn� dom�n� �sp�n� vytvo�en.") \
	MDESC(c,   web_resp,  ccc_alias_removed,             5,1,0,50007,     "Alias k hlavn� dom�n� �sp�n� odstran�n.") \
	MDESC(c,   web_resp,  ccc_vhost_stats_locked,        5,1,0,50008,     "Statistiky vhostu �sp�n� zam�eny.") \
	MDESC(c,   web_resp,  ccc_vhost_stats_unlocked,      5,1,0,50009,     "Statistiky vhostu �sp�n� odem�eny.") \
	MDESC(c,   web_resp,  ccc_3rdlv_domain_created,      5,1,0,50010,     "Dom�na t�et� �rovn� vytvo�ena.") \
	MDESC(c,   web_resp,  ccc_3rdlv_domain_removed,      5,1,0,50011,     "Dom�na t�et� �rovn� odstran�na.") \
	MDESC(c,   web_resp,  ccc_main_domain_destroyed,     5,1,0,50012,     "Hlavn� dom�na �sp�n� a nen�vratn� zlikvidov�na.") \
	MDESC(c,   web_resp, ccc_primary_vhost_data_uploaded,5,1,0,50013,     "Data prim�rn�ho vhostu �sp�n� zkop�rov�na.") \
	MDESC(c,   web_resp,  ccc_main_domain_removed,       5,1,0,50014,     "Hlavn� dom�na �sp�n� odstran�na.") \
	MDESC(c,   web_resp,  ccc_ftp_password_changed,      5,1,0,50015,     "Heslo FTP �sp�n� zm�n�no.") \
	MDESC(c,   web_resp,  ccc_ftp_account_locked,        5,1,0,50016,     "FTP ��et �sp�n� zam�en.") \
	MDESC(c,   web_resp,  ccc_ftp_account_unlocked,      5,1,0,50017,     "FTP ��et �sp�n� odem�en.") \
	MDESC(c,   web_resp,  ccc_id_service_of_site_name,   5,1,0,50018,     "ID servisu �sp�n� zji�t�no z n�zvu site.") \
	MDESC(c,   web_resp,  ccc_quota,                     5,1,0,50019,     "Diskov� kv�ta servisu �sp�n� zji�t�na.") \
	MDESC(c,   web_resp,  ccc_quota_set,                 5,1,0,50020,     "Diskov� kv�ta servisu �sp�n� nastavena.") \
	MDESC(c,   web_resp,  ccc_site_vhosts_language_set,  5,1,0,50021,     "Jazyk v�ech vhost� site �sp�n� zm�n�n." ) \
	MDESC(c,   web_resp,  ccc_primary_vhost_language,    5,1,0,50022,     "Jazyk prim�rn�ho vhosta site �sp�n� zji�t�n." ) \
	MDESC(c,   web_resp,  ccc_error_document_set,        5,1,0,50023,     "U�ivatelsk� chybov� str�nka byla �sp�n� nastavena." ) \
	MDESC(c,   web_resp,  ccc_error_document_removed,    5,1,0,50024,     "U�ivatelsk� chybov� str�nka byla �sp�n� odstran�na." ) \
	MDESC(c,   web_resp,  ccc_old_hosting_data_unpacked, 5,1,0,50025,     "Data site ze star�ho hostingu byla �sp�n� rozbalena." ) \
	MDESC(c,   web_resp,  ccc_ftp_account_created,       5,1,0,50026,     "FTP ��et �sp�n� vytvo�en." ) \
	MDESC(c,   web_resp,  ccc_ftp_account_removed,       5,1,0,50027,     "FTP ��et �sp�n� odstran�n." ) \
	MDESC(c,   web_resp,  ccc_domain_migrated,           5,1,0,50028,     "Dom�na byla �sp�n� p�emigrov�na." ) \
	MDESC(c,   web_resp,  ccc_migration_stage1_done,     5,1,0,50029,     "Prvn� f�ze migrace dom�ny byla dokon�ena." ) \
	MDESC(c,   web_resp,  ccc_domain_variant_changed,    5,1,0,50030,     "Varianta dom�ny byla �sp�n� zm�n�na." ) \
	MDESC(c,   web_resp,  ccc_win_hosting_data_unpacked, 5,1,0,50031,     "Data site z Windows hostingu byla �sp�n� rozbalena." ) \
	MDESC(c,   web_resp,  ccc_dba_database_backup_uploaded, 5,1,0,50032,  "Z�lo�n� kopie datab�ze byla �sp�n� p�enesena do u�ivatelsk�ho prostoru." ) \
	MDESC(c,   web_resp,  ccc_server_admin_email_set,    5,1,0,50033,     "Email spr�vce vhostu byl �sp�n� nastaven." ) \
	MDESC(c,   web_resp,  ccc_server_admin_email,        5,1,0,50034,     "Email spr�vce vhostu." ) \
	MDESC(c,   web_resp,  ccc_mail_site_limits_set,      5,1,0,50035,     "Limity odeslan�ch mail� site byly �sp�n� nastaveny." ) \
	MDESC(c,   web_resp,  ccc_mail_site_limits,          5,1,0,50036,     "Limity odeslan�ch mail� site." ) \
	MDESC(c,   web_resp,  ccc_mail_site_limits_reload_issued, 5,1,0,50037,"P��kaz na aktualizaci limit� odeslan�ch mail� dan� site byl �sp�n� nastaven." ) \
	MDESC(c,   web_resp,  ccc_mail_current_counts,       5,1,0,50038,     "Aktu�ln� po�ty odeslan�ch mail� site." ) \
	MDESC(c,   web_resp,  ccc_mail_hour_count_decreased, 5,1,0,50039,     "Po�et odeslan�ch mail� byl �sp�n� sn�en." ) \
	MDESC(c,   web_resp,  ccc_customer_site_data_backup_done, 5,1,0,50040, "U�ivatelsk� z�loha site byla �sp�n� provedena." ) \
	MDESC(c,   web_resp,  ccc_site_information,          5,1,0,50041,     "Informace o dan� site." ) \
	MDESC(c,   web_resp,  ccc_ftp_password_checked,      5,1,0,50042,     "Kontrola FTP hesla byla provedena.")\
	MDESC(c,   web_resp,  ccc_ssh_account_locked,        5,1,0,50043,     "SSH p��stup dan�ho ��tu byl �sp�n� zak�z�n.") \
	MDESC(c,   web_resp,  ccc_ssh_account_unlocked,      5,1,0,50044,     "SSH p��stup dan�ho ��tu byl �sp�n� povolen.") \
	MDESC(c,   web_resp,  ccc_ssh_account_status,        5,1,0,50045,     "Stav SSH p��stupu dan�ho ��tu.") \
	MDESC(c,   web_resp,  ccc_vhost_ip,                  5,1,0,50046,     "IP adresa dan�ho vhosta.") \
	MDESC(c,   web_resp,  ccc_php_admin_value,           5,1,0,50049,     "Hodnota PHP admin direktivy.") \
	MDESC(c,   web_resp,  ccc_php_admin_value_set,       5,1,0,50050,     "Hodnota PHP admin direktivy �sp�n� nastavena.") \
	MDESC(c,   web_resp,  ccc_smb_account_locked,        5,1,0,50051,     "SMB p��stup dan�ho ��tu byl �sp�n� zak�z�n.") \
	MDESC(c,   web_resp,  ccc_smb_account_unlocked,      5,1,0,50052,     "SMB p��stup dan�ho ��tu byl �sp�n� povolen.") \
	MDESC(c,   web_resp,  ccc_smb_account_status,        5,1,0,50053,     "Stav SMB p��stupu dan�ho ��tu.") \
	MDESC(c,   web_resp,  ccc_iapp_ftp_account_enabled,  5,1,0,50054,     "FTP ��et pro instalaci aplikac� povolen.") \
	MDESC(c,   web_resp,  ccc_iapp_ftp_account_disabled, 5,1,0,50055,     "FTP ��et pro instalaci aplikac� zak�z�n.") \
	MDESC(c,   web_resp,  ccc_ssl_vhost_certificate_set, 5,1,0,50056,     "SSL certifik�t vhosta �sp�n� nastaven.") \
	MDESC(c,   web_resp,  ccc_ssl_vhost_certificate_removed, 5,1,0,50057, "SSL certifik�t vhosta �sp�n� odstran�n.") \
	MDESC(c,   web_resp,  ccc_site_vhosts_ip_set,        5,1,0,50058,     "IP adresa vhost� dan� site �sp�n� zm�n�na.") \


#define WEB_CMSM_WHS(c) \
	GROUP_WHS(c, web_module_mdesc, web_cmsm, create_site)	\
	GROUP_WHS(c, web_module_ccc_mdesc, web_cmsm, ccc_create_main_domain)	

#define WEB_MDESC_TABLE(c) \
	WEB_CMSM(c) \
	WEB_RESP(c) \
	WEB_CMSM_WHS(c)
	
	
// expand the declarations
CMS_NAMESPACE_START
WEB_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // __MOD_WEB_MDESCS
