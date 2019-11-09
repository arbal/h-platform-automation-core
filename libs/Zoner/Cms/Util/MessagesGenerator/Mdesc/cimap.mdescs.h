// x64 OK

#ifndef __MOD_CIMAP_MDESCS
#define __MOD_CIMAP_MDESCS

#include "mdescs.h"

// cimap messages
#define CIMAP_CMSM(c) \
	MDESC(c,   cimap_cmsm,  get_domain_mailbox_count,              2,0,0,1,     "Nelze zjistit po�et mailbox� dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_domain_mailboxes,                  2,0,0,2,     "Nelze na��st seznam mailbox� dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_max_mailbox_count,                 2,0,0,3,     "Nelze zjistit maxim�ln� po�et mailbox� dom�ny.")  \
	MDESC(c,   cimap_cmsm,  set_max_mailbox_count,                 2,0,0,4,     "Nelze zm�nit maxilm�ln� po�et mailbox� dom�ny.")     \
	MDESC(c,   cimap_cmsm,  get_user_password__obsolete,           2,0,0,5,     "Nelze zjistit heslo mailboxu.")  \
	MDESC(c,   cimap_cmsm,  set_user_password__obsolete,           2,0,0,6,     "Nelze zm�nit heslo mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_domains,                           2,0,0,7,     "Nelze na��st seznam dom�n.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_aliases,                   2,0,0,8,     "Nelze na��st seznam alias� mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_forwards,                  2,0,0,9,     "Nelze na��st seznam p�esm�rov�n� mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_fwd_local_copy,            2,0,0,10,    "Nelze zjistit stav p��znaku lok�ln� kopie p�i p�esm�rov�n� zpr�v z mailboxu.") \
	MDESC(c,   cimap_cmsm,  create_alias,                          2,0,0,11,    "Nelze vytvo�it alias.") \
	MDESC(c,   cimap_cmsm,  delete_alias,                          2,0,0,12,    "Nelze odstranit alias.") \
	MDESC(c,   cimap_cmsm,  add_forward,                           2,0,0,13,    "Nelze p�idat p�esm�rov�n�.") \
	MDESC(c,   cimap_cmsm,  delete_forward,                        2,0,0,14,    "Nelze odstranit p�esm�rov�n� z mailboxu.") \
	MDESC(c,   cimap_cmsm,  set_mailbox_fwd_local_copy,            2,0,0,15,    "Nelze zm�nit p��znak lok�ln� kopie p�i p�esm�rov�n� zpr�v z mailboxu.") \
	MDESC(c,   cimap_cmsm,  get_domain_catchall,                   2,0,0,16,    "Nelze zjistit nastaven� dom�nov�ho ko�e.") \
	MDESC(c,   cimap_cmsm,  set_domain_catchall,                   2,0,0,17,    "Nelze zm�nit nastaven� dom�nov�ho ko�e.") \
	MDESC(c,   cimap_cmsm,  remove_domain_catchall,                2,0,0,18,    "Nelze odstranit dom�nov� ko�.") \
	MDESC(c,   cimap_cmsm,  delete_mailbox,                        2,0,0,19,    "Nelze odstranit mailbox.") \
	MDESC(c,   cimap_cmsm,  delete_mailbox_ex,                     2,0,0,20,    "Nelze odstranit mailbox.") \
	MDESC(c,   cimap_cmsm,  create_mailbox,                        2,0,0,21,    "Nelze vytvo�it nov� mailbox.") \
	MDESC(c,   cimap_cmsm,  create_domain,                         2,0,0,22,    "Nelze vytvo�it novou dom�nu.") \
	MDESC(c,   cimap_cmsm,  delete_domain,                         2,0,0,23,    "Nelze odstranit danou dom�nu.") \
	MDESC(c,   cimap_cmsm,  create_domain_alias,                   2,0,0,24,    "Nelze vytvo�it dom�nov� alias.") \
	MDESC(c,   cimap_cmsm,  get_domain_aliases,                    2,0,0,25,    "Nelze na��st seznam dom�nov�ch alias�.") \
	MDESC(c,   cimap_cmsm,  delete_domain_alias,                   2,0,0,26,    "Nelze odstranit dom�nov� alias.") \
	MDESC(c,   cimap_cmsm,  get_domain_mailboxes_with_pwd,         2,0,0,27,    "Nelze na��st seznam mailbox� dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_domain_nameservers,                2,0,0,28,    "Nelze zjistit seznam nameserver� dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_domain_mx_records,                 2,0,0,29,    "Nelze zjistit MX z�znamy dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_domain_transport,                  2,0,0,30,    "Nelze zjistit c�lov� po�tovn� server dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_domain_changelog,                  2,0,0,31,    "Nelze na��st historii zm�n po�ty dan� dom�ny.")  \
	MDESC(c,   cimap_cmsm,  migrate_virtual_users_table,           2,0,0,32,    "Nelze p�emigrovat datab�zi u�ivatel� po�ty.")  \
	MDESC(c,   cimap_cmsm,  set_quota__obsolete,                   2,0,0,33,    "Nelze zm�nit nastaven� kv�ty.")  \
	MDESC(c,   cimap_cmsm,  get_quota,                             2,0,0,34,    "Nelze zjistit nastaven� kv�ty.")  \
	MDESC(c,   cimap_cmsm,  get_domain_usage,                      2,0,0,35,    "Nelze zjistit obsazen� prostor dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_usage,                     2,0,0,36,    "Nelze zjistit obsazen� prostor mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_accounts,                  2,0,0,37,    "Chyba p�i zji��ov�n� ��t� k mailboxu.")  \
	MDESC(c,   cimap_cmsm,  set_mailbox_account_password,          2,0,0,38,    "Chyba p�i zm�n� hesla ��tu.")  \
	MDESC(c,   cimap_cmsm,  set_my_mailbox_account_password,       2,0,0,39,    "Chyba p�i zm�n� hesla ��tu.")  \
	MDESC(c,   cimap_cmsm,  set_postmaster_account_password,       2,0,0,40,    "Chyba p�i zm�n� hesla ��tu postmastera.")  \
	MDESC(c,   cimap_cmsm,  get_postmaster_account_password,       2,0,0,41,    "Nelze zjistit heslo ��tu postmastera.")  \
	MDESC(c,   cimap_cmsm,  get_domain_notes,                      2,0,0,42,    "Nelze na��st pozn�mky k dan� dom�n�.")  \
	MDESC(c,   cimap_cmsm,  add_domain_note,                       2,0,0,43,    "Nelze p�idat pozn�mku k dan� dom�n�.")  \
	MDESC(c,   cimap_cmsm,  delete_domain_note,                    2,0,0,44,    "Nelze odstranit pozn�mku k dan� dom�n�.")  \
	MDESC(c,   cimap_cmsm,  change_domain_note,                    2,0,0,45,    "Nelze zm�nit pozn�mku k dan� dom�n�.")  \
	MDESC(c,   cimap_cmsm,  nonstandard_domain,                    2,0,0,46,    "Nelze zjistit, m�-li dom�na n�jak� nestandardy.")  \
	MDESC(c,   cimap_cmsm,  get_max_mailbox_usage,                 2,0,0,47,    "Nelze zjistit kv�tu dom�ny a/nebo nejv�ce zapln�n� mailbox.")  \
	MDESC(c,   cimap_cmsm,  check_mailbox_password,                2,0,0,48,    "Nelze ov��it heslo mailboxu.")  \
	MDESC(c,   cimap_cmsm,  get_domain_changelog_del,              2,0,0,49,    "Nelze na��st historii zm�n po�ty dan� dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_domain_type,                       2,0,0,50,    "Nelze zjistit typ dom�ny.")  \
	MDESC(c,   cimap_cmsm,  search_in_domain,                      2,0,0,51,    "Hled�n� v dom�n� selhalo.")  \
	MDESC(c,   cimap_cmsm,  set_domain_transport,                  2,0,0,52,    "Nelze nastavit transport po�ty pro danou dom�nu.")  \
	MDESC(c,   cimap_cmsm,  migrate_domain_data,                   2,0,0,53,    "P�esun obsahu mailbox� dom�ny skon�il ne�sp�n�.")  \
	MDESC(c,   cimap_cmsm,  remove_domain_transport,               2,0,0,54,    "Nelze odstranit transport po�ty pro danou dom�nu.")  \
	MDESC(c,   cimap_cmsm,  add_relay_user,                        2,0,0,55,    "Nelze p�idat u�ivatele relaye.")  \
	MDESC(c,   cimap_cmsm,  remove_relay_user,                     2,0,0,56,    "Nelze odebrat u�ivatele relaye.")  \
	MDESC(c,   cimap_cmsm,  get_mail_servers,                      2,0,0,57,    "Nelze zjistit seznam po�tovn�ch server�.")  \
	MDESC(c,   cimap_cmsm,  get_domain_mail_server,                2,0,0,58,    "Nelze zjistit po�tovn� server dom�ny.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_account_password,          2,0,0,59,    "Nelze zjistit heslo k ��tu mailboxu.")  \
	MDESC(c,   cimap_cmsm,  migrate_domain_structure,              2,0,0,60,    "Nelze prov�st migraci struktury mailbox� dom�ny." ) \
	MDESC(c,   cimap_cmsm,  inject_email,                          2,0,0,61,    "Nelze vlo�it email do mailboxu." ) \
	MDESC(c,   cimap_cmsm,  remove_migrated_zombies,               2,0,0,62,    "Nelze odstranit zombie odmigrovan�ch mailbox�." ) \
	MDESC(c,   cimap_cmsm,  check_mailbox_quota,                   2,0,0,63,    "Nelze prov��it kv�tu a obsazen� mailboxu." ) \
	MDESC(c,   cimap_cmsm,  check_domain_quotas,                   2,0,0,64,    "Nelze prov��it kv�ty a obsazen� mailbox� dom�ny." ) \
	MDESC(c,   cimap_cmsm,  check_domain_quotas_bulk,              2,0,0,65,    "Prov��ov�n� kv�ty a obsazen� mailbox� dom�n selhalo." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_domain_counts,         2,0,0,66,    "Nelze zjistit po�ty dom�n na mailserverech." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_all_domain_counts,     2,0,0,67,    "Nelze zjistit celkov� po�ty dom�n s po�tou na mailserverech." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_domain_transport_counts, 2,0,0,68,  "Nelze zjistit celkov� po�ty dom�n s transportem na mailservery." ) \
	MDESC(c,   cimap_cmsm,  block_mailbox_incoming_emails,         2,0,0,69,    "Nelze zablokovat/odblokovat p��jem po�ty pro dan� mailbox." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_status_flags,              2,0,0,70,    "Nelze zjistit stavov� p��znaky dan�ho mailboxu." ) \
	MDESC(c,   cimap_cmsm,  block_domain_incoming_emails,          2,0,0,71,    "Nelze zablokovat/odblokovat p��jem po�ty pro danou dom�nu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_rbl_policy,                 2,0,0,72,    "Nelze zapnout/vypnout RBL kontrolu p��choz� po�ty pro danou dom�nu." ) \
	MDESC(c,   cimap_cmsm,  get_domain_status_flags,               2,0,0,73,    "Nelze zjistit stavov� p��znaky dan� dom�ny." ) \
	MDESC(c,   cimap_cmsm,  check_overquota_mailboxes_bulk,        2,0,0,74,    "Prov��en� obsazen� overquota mailbox� selhalo." ) \
	MDESC(c,   cimap_cmsm,  disable_mailbox_oq_blocking,           2,0,0,75,    "Nelze zapnout/vypnout blokov�n� p��jmu po�ty z d�vodu p�ekro�en� kv�ty mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_quota_type,                 2,0,0,76,    "Nelze zm�nit typ kv�ty dom�ny." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_quota_limit,               2,0,0,77,    "Nelze zm�nit velikost kv�ty mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_mailboxes_with_quota_info,         2,0,0,78,    "Nelze zjistit seznam mailbox� s jejich nastaven�m kv�t a obsazen�ho prostoru." ) \
	MDESC(c,   cimap_cmsm,  set_default_mailbox_quota_limit,       2,0,0,79,    "Nelze zm�nit defaultn� velikost nov� z�izovan�ch mailbox� dom�ny." ) \
	MDESC(c,   cimap_cmsm,  get_domain_quotawarn_settings,         2,0,0,80,    "Nelze zjistit nastaven� hl�dan� obsazen�ho prostoru pro danou dom�nu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_quotawarn_settings,         2,0,0,81,    "Nelze upravit nastaven� hl�dan� obsazen�ho prostoru pro danou dom�nu." ) \
	MDESC(c,   cimap_cmsm,  get_mailboxes_with_quotawarn_settings, 2,0,0,82,    "Nelze zjistit seznam mailbox� s jejich nastaven�m hl�d�n� obsazen�ho prostoru." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_quotawarn_settings,        2,0,0,83,    "Nelze upravit nastaven� hl�dan� obsazen�ho prostoru pro dan� mailbox." ) \
	MDESC(c,   cimap_cmsm,  get_domain_language,                   2,0,0,84,    "Nelze zjistit nastaven� jazyka dom�ny." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_language,                  2,0,0,85,    "Nelze zjistit nastaven� jazyka mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_domain_language,                   2,0,0,86,    "Nelze nastavit jazyk dom�ny." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_language,                  2,0,0,87,    "Nelze nastavit jazyk mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_domain_aliases_with_transport,     2,0,0,88,    "Nelze na��st seznam dom�nov�ch alias� s jejich transporty." ) \
	MDESC(c,   cimap_cmsm,  stop_domain,                           2,0,0,89,    "Nelze zastavit provoz dom�ny." ) \
	MDESC(c,   cimap_cmsm,  start_domain,                          2,0,0,90,    "Nelze spustit provoz dom�ny." ) \
	MDESC(c,   cimap_cmsm,  get_webmail_mailbox_flags,             2,0,0,91,    "Nelze na��st p��znaky mailboxu pro webmail." ) \
	MDESC(c,   cimap_cmsm,  get_mail_server_mailbox_counts,        2,0,0,92,    "Nelze zjistit po�ty mailbox� na mailserverech." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_quota_info,                2,0,0,93,    "Nelze zjistit informace o kv�t� a stavu prostoru mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_users_can_edit_mailbox_aliases,    2,0,0,94,    "Nelze povolit/zak�zat b�n�m u�ivatel�m �pravy mailboxov�ch alias�." ) \
	MDESC(c,   cimap_cmsm,  get_users_can_edit_mailbox_aliases,    2,0,0,95,    "Nelze zjistit zda m� b�n� u�ivatel mo�nost �prav mailboxov�ch alias�." ) \
	MDESC(c,   cimap_cmsm,  clone_mailbox_to_domain,               2,0,0,96,    "Nelze naklonovat mailbox do jin� dom�ny." ) \
	MDESC(c,   cimap_cmsm,  search_in_server_logs,                 2,0,0,97,    "Chyba p�i vyhled�v�n� v log souborech po�tovn�ch server�.") \
	MDESC(c,   cimap_cmsm,  get_domain_lists,                      2,0,0,98,    "Nelze vr�tit p�ehled seznam� dom�n.") \
	MDESC(c,   cimap_cmsm,  get_mailbox_quotawarn_settings,        2,0,0,99,    "Nelze zjistit nastaven� hl�d�n� obsazen�ho prostoru dan�ho mailboxu." ) \
	MDESC(c,   cimap_cmsm,  list_mailbox_folders,                  2,0,0,100,   "Nelze vylistovat slo�ky dan�ho mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_domains_ex,                        2,0,0,101,   "Nelze na��st seznam dom�n s roz���en�mi informacemi.")  \
	MDESC(c,   cimap_cmsm,  get_domain_transports_to_server,       2,0,0,102,   "Nelze na��st seznam transport� na dan� server.")  \
	MDESC(c,   cimap_cmsm,  reupdate_mailbox_quota,                2,0,0,103,   "Nelze p�eaktualizovat diskovou kv�tu mailboxu na IMAP serveru.")  \
	MDESC(c,   cimap_cmsm,  save_broken_password,                  2,0,0,104,   "Nelze zaznamenat prolomen� heslo schr�nky.")  \
	MDESC(c,   cimap_cmsm,  get_smtp_blocking_settings,            2,0,0,105,   "Nelze vr�tit nastaven� blokov�n� SMTP dan� schr�nky.")  \
	MDESC(c,   cimap_cmsm,  set_smtp_blocking_settings,            2,0,0,106,   "Nelze zm�nit nastaven� blokov�n� SMTP dan� schr�nky.")  \
	MDESC(c,   cimap_cmsm,  check_my_broken_password,              2,0,0,107,   "Nelze ov��it zda je heslo schr�nky prolomen�.")  \
	MDESC(c,   cimap_cmsm,  check_broken_password,                 2,0,0,108,   "Nelze ov��it zda je heslo schr�nky prolomen�.")  \
	MDESC(c,   cimap_cmsm,  set_sender_forgery_forbidden_flag,     2,0,0,109,   "Nelze zm�nit p��znak z�kazu podvr�en� dom�ny odes�latele.")  \
	MDESC(c,   cimap_cmsm,  learn_spam,                            2,0,0,110,   "Nelze za�adit email k nau�en� jako spam.")  \
	MDESC(c,   cimap_cmsm,  set_mailbox_login_password,            2,0,0,111,   "Chyba p�i zm�n� hesla ��tu.")  \
	MDESC(c,   cimap_cmsm,  set_postmaster_mailbox_login_password, 2,0,0,112,   "Chyba p�i zm�n� hesla ��tu postmastera.")  \
\
	MDESC(c,   cimap_cmsm,  set_mailbox_trash_autoclear,           2,1,0,1,      "Nelze zm�nit nastaven� automatick�ho vysyp�v�n� ko�e.")  \
	MDESC(c,   cimap_cmsm,  get_mailbox_trash_autoclear,           2,1,0,2,      "Nelze zjistit nastaven� automatick�ho vysyp�v�n� ko�e.")  \
	MDESC(c,   cimap_cmsm,  set_bfu_antispam_level,                2,1,0,3,      "Nelze nastavit antispamov� opat�en�.") \
	MDESC(c,   cimap_cmsm,  get_bfu_antispam_level,                2,1,0,4,      "Nelze zjistit nastaven� antispamov�ch opat�en�.") \
	MDESC(c,   cimap_cmsm,  set_mailbox_folder_autoclear,          2,1,0,5,      "Nelze zm�nit nastaven� automatick�ho vysyp�v�n� slo�ky.") \
	MDESC(c,   cimap_cmsm,  get_mailbox_folder_autoclear,          2,1,0,6,      "Nelze zjistit nastaven� automatick�ho vysyp�v�n� slo�ky.") \
	MDESC(c,   cimap_cmsm,  copy_avelsieve_filters,                2,1,0,7,      "Nelze zkop�rovat nastaven� filtra�n�ch pravidel.") \
	MDESC(c,   cimap_cmsm,  merge_avelsieve_filters,               2,1,0,8,      "Nelze slou�it nastaven� filtra�n�ch pravidel.") \
	MDESC(c,   cimap_cmsm,  mailbox_autoclear_bulk,                2,1,0,9,      "D�vkov� automatick� �i�t�n� mailbox� selhalo." ) \
\
	MDESC(c,   cimap_cmsm,  batch_create_domain_backup,            2,2,0,1,      "Nelze vytvo�it z�lo�n� kopii nastaven� dom�ny.")  \
\
	MDESC(c,   cimap_cmsm,  get_mailbox_folders_acls,              2,4,0,1,      "Nelze vylistovat ACLs slo�ek dan�ho mailboxu." ) \
	MDESC(c,   cimap_cmsm,  get_mailbox_folder_acl,                2,4,0,2,      "Nelze vylistovat ACL dan� slo�ky mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_folder_acl,                2,4,0,3,      "Nelze zm�nit ACL z�znam slo�ky dan�ho mailboxu." ) \
	MDESC(c,   cimap_cmsm,  set_mailbox_folder_anyone_acl,         2,4,0,4,      "Nelze zm�nit 'anyone' ACL z�znam slo�ky dan�ho mailboxu." ) \
	MDESC(c,   cimap_cmsm,  subscribe_shared_mailbox_folder_to_grantee, 2,4,0,5,      "Nelze p�ihl�sit u�ivatele k odb�ru sd�len� slo�ky." ) \
	MDESC(c,   cimap_cmsm,  unsubscribe_shared_mailbox_folder_from_grantee, 2,4,0,6,  "Nelze odhl�sit u�ivatele z odb�ru sd�len� slo�ky." ) \
\
	MDESC(c,   cimap_cmsm,  set_dkim,                              2,5,0,1,      "Nelze nastavit DKIM podepisov�n� dom�ny." ) \
	MDESC(c,   cimap_cmsm,  get_dkim,                              2,5,0,2,      "Nelze zjistit stav DKIM podepisov�n� dom�ny." ) \


// cimap responses
#define CIMAP_RESP(c) \
	MDESC(c,   cimap_resp,  invalid_domain_name,            2,0,0,30001,      "Chybn� form�t jm�na dom�ny.") \
	MDESC(c,   cimap_resp,  missing_domain_name,            2,0,0,30002,      "Chyb� jm�no dom�ny.") \
	MDESC(c,   cimap_resp,  domain_not_found,               2,0,0,30003,      "Dom�na neexistuje.") \
	MDESC(c,   cimap_resp,  db_error,                       2,0,0,30004,      "Chyba p�i p��stupu k datab�zi.") \
	MDESC(c,   cimap_resp,  invalid_user_name,              2,0,0,30005,      "Chybn� form�t u�ivatelsk�ho jm�na (n�zvu mailboxu).") \
	MDESC(c,   cimap_resp,  missing_user_name,              2,0,0,30006,      "Chyb� u�ivatelsk� jm�no (n�zev mailboxu)") \
	MDESC(c,   cimap_resp,  max_mailbox_count_not_found,    2,0,0,30007,      "Maxim�ln� po�et mailbox� dom�ny nenalezen.") \
	MDESC(c,   cimap_resp,  missing_max_mailbox_count,      2,0,0,30008,      "Chyb� maxim�ln� po�et mailbox� dom�ny.") \
	MDESC(c,   cimap_resp,  invalid_max_mailbox_count,      2,0,0,30009,      "Chybn� form�t hodnoty maxim�ln�ho po�tu mailbox� dom�ny.") \
	MDESC(c,   cimap_resp,  username_not_found,             2,0,0,30010,      "U�ivatelsk� jm�no (n�zev mailboxu) nenalezeno.") \
	MDESC(c,   cimap_resp,  password_not_found,             2,0,0,30011,      "Heslo nenalezeno.") \
	MDESC(c,   cimap_resp,  password_not_set,               2,0,0,30012,      "Heslo nen� nastaveno.") \
	MDESC(c,   cimap_resp,  missing_password,               2,0,0,30013,      "Chyb� heslo.") \
	MDESC(c,   cimap_resp,  invalid_password,               2,0,0,30014,      "Chybn� form�t hesla.") \
	MDESC(c,   cimap_resp,  mailbox_count_not_found,        2,0,0,30015,      "Po�et mailbox� nezn�m�.") \
	MDESC(c,   cimap_resp,  missing_alias,                  2,0,0,30016,      "Chyb� alias.") \
	MDESC(c,   cimap_resp,  invalid_alias,                  2,0,0,30017,      "Chybn� form�t aliasu.") \
	MDESC(c,   cimap_resp,  alias_exists_as_mailbox,        2,0,0,30018,      "Dan� alias u� existuje jako mailbox.") \
	MDESC(c,   cimap_resp,  alias_not_found,                2,0,0,30019,      "Alias nenalezen.") \
	MDESC(c,   cimap_resp,  missing_forward,                2,0,0,30020,      "Chyb� p�esm�rov�n�.") \
	MDESC(c,   cimap_resp,  invalid_forward,                2,0,0,30021,      "Chybn� form�t p�esm�rov�n�.") \
	MDESC(c,   cimap_resp,  forward_not_found,              2,0,0,30022,      "P�esm�rov�n� nenalezeno.") \
	MDESC(c,   cimap_resp,  unable_to_set_forward_local_copy, 2,0,0,30023,    "Nastaven� p��znaku lok�ln� kopie p�i p�esm�rov�n� z mailboxu selhalo.") \
	MDESC(c,   cimap_resp,  invalid_fwd_local_copy,         2,0,0,30024,      "Chybn� form�t p��znaku lok�ln� kopie p�i p�esm�rov�n�.") \
	MDESC(c,   cimap_resp,  missing_fwd_local_copy,         2,0,0,30025,      "Chyb� p��znak lok�ln� kopie p�i p�esm�rov�n�.") \
	MDESC(c,   cimap_resp,  perl_error,                     2,0,0,30026,      "Chyba p�i vol�n� embedded perlu.") \
	MDESC(c,   cimap_resp,  cannot_delete_postmaster_mailbox, 2,0,0,30027,    "Odstran�n� mailboxu 'postmaster' nen� dovoleno.") \
	MDESC(c,   cimap_resp,  username_already_exists,        2,0,0,30028,      "Dan� u�ivatelsk� jm�no (n�zev mailboxu) ji� existuje.") \
	MDESC(c,   cimap_resp,  too_many_mailboxes,             2,0,0,30029,      "P��li� mnoho mailbox�, byl dosa�en maxim�ln� po�et mailbox� pro danou dom�nu.") \
	MDESC(c,   cimap_resp,  domain_already_exists,          2,0,0,30030,      "Dan� dom�na ji� existuje.") \
	MDESC(c,   cimap_resp,  cannot_create_postmaster_mailbox, 2,0,0,30031,    "Chyba p�i vytv��en� mailboxu 'postmaster'.") \
	MDESC(c,   cimap_resp,  cannot_delete_user_mailboxes,   2,0,0,30032,      "Nelze odstranit jeden �i v�ce mailbox�.") \
	MDESC(c,   cimap_resp,  domain_alias_already_exists_as_domain, 2,0,0,30033, "Dom�na stejn�ho jm�na jako dom�nov� alias ji� existuje.") \
	MDESC(c,   cimap_resp,  invalid_domain_alias_name,      2,0,0,30034,      "Chybn� form�t jm�na dom�nov�ho aliasu.") \
	MDESC(c,   cimap_resp,  missing_domain_alias_name,      2,0,0,30035,      "Chyb� jm�no dom�nov�ho aliasu.") \
	MDESC(c,   cimap_resp,  invalid_auto_password_value,    2,0,0,30036,      "Chybn� hodnota parametru auto_password.") \
	MDESC(c,   cimap_resp,  domain_alias_exists_as_domain,  2,0,0,30037,      "Dom�na tohoto jm�na nen� dom�nov� alias.") \
	MDESC(c,   cimap_resp,  ns_dns_query_failed,            2,0,0,30038,      "Do�lo k chyb� p�i dotazu na NS z�znamy dom�ny v DNS.") \
	MDESC(c,   cimap_resp,  mx_dns_query_failed,            2,0,0,30039,      "Do�lo k chyb� p�i dotazu na MX z�znamy dom�ny v DNS.") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_new_failed,    2,0,0,30040,      "Chyba p�i vytv��en� spojen� s IMAP serverem (nelze vytvo�it objekt spojen�).") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_connect_failed, 2,0,0,30041,     "Chyba p�i vytv��en� spojen� s IMAP serverem (nelze otev��t spojen� se serverem).") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_auth_failed,   2,0,0,30042,      "Chyba p�i vytv��en� spojen� s IMAP serverem (autentizace selhala).") \
	MDESC(c,   cimap_resp,  cyrus_imap_admin_not_connected, 2,0,0,30043,      "Spojen� s IMAP serverem nebylo nav�z�no nebo bylo n�sledn� p�eru�eno.") \
	MDESC(c,   cimap_resp,  perl_internal_error_rcnt1,      2,0,0,30044,      "Vnit�n� chyba v CMS serveru (CImap perl, vnit�n� identifikace chyby: 'rcnt1').") \
	MDESC(c,   cimap_resp,  perl_create_mailbox_failed,     2,0,0,30045,      "Chyba p�i vytv��en� fyzick�ho mailboxu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  perl_internal_error_rcnt2,      2,0,0,30046,      "Vnit�n� chyba v CMS serveru (CImap perl, vnit�n� identifikace chyby: 'rcnt2').") \
	MDESC(c,   cimap_resp,  perl_internal_error_mimpu,      2,0,0,30047,      "Vnit�n� chyba v CMS serveru (CImap perl, vnit�n� identifikace chyby: 'mimpu').") \
	MDESC(c,   cimap_resp,  perl_delete_mailbox_setacl_failed, 2,0,0,30048,   "Nelze zm�nit p��stupov� pr�va (ACL) k fyzick�mu mailboxu p�ed jeho odstran�n�m.") \
	MDESC(c,   cimap_resp,  perl_delete_mailbox_failed,     2,0,0,30049,      "Chyba p�i odstra�ov�n� fyzick�ho mailboxu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  perl_apg_failed,                2,0,0,30050,      "Gener�tor n�hodn�ch hesel selhal.") \
	MDESC(c,   cimap_resp,  perl_apg_returned_empty_pwd,    2,0,0,30051,      "Gener�tor n�hodn�ch hesel vr�til pr�zdn� heslo.") \
	MDESC(c,   cimap_resp,  alias_domain_mismatch,          2,0,0,30052,      "Dom�na aliasu neodpov�d� dom�n� c�lov�ho mailboxu.") \
	MDESC(c,   cimap_resp,  missing_quota_type,             2,0,0,30053,      "Sch�z� typ kv�ty.") \
	MDESC(c,   cimap_resp,  invalid_quota_type,             2,0,0,30054,      "Chybn� form�t typu kv�ty.") \
	MDESC(c,   cimap_resp,  missing_quota,                  2,0,0,30055,      "Sch�z� kv�ta.") \
	MDESC(c,   cimap_resp,  invalid_quota,                  2,0,0,30056,      "Chybn� form�t kv�ty.") \
	MDESC(c,   cimap_resp,  quota_not_found,                2,0,0,30057,      "Kv�ta nenalezena.") \
	MDESC(c,   cimap_resp,  perl_quota_command_failed,      2,0,0,30058,      "Chyba p�i zji��ov�n� stavu kv�ty na IMAP serveru.") \
	MDESC(c,   cimap_resp,  perl_quotaroot_not_found,       2,0,0,30059,      "Ko�en kv�ty na IMAP serveru nenalezen.") \
	MDESC(c,   cimap_resp,  perl_setquota_command_failed,   2,0,0,30060,      "Chyba p�i nastavov�n� kv�ty na IMAP serveru.") \
	MDESC(c,   cimap_resp,  account_not_found,              2,0,0,30061,      "��et nenalezen.") \
	MDESC(c,   cimap_resp,  missing_uid,                    2,0,0,30062,      "Chyb� ��slo u�ivatelsk�ho ��tu.") \
	MDESC(c,   cimap_resp,  invalid_uid,                    2,0,0,30063,      "Chybn� form�t ��sla u�ivatelsk�ho ��tu.") \
	MDESC(c,   cimap_resp,  postmaster_account_not_found,   2,0,0,30064,      "P�ihla�ovac� ��et postmastera dom�ny nenalezen.") \
	MDESC(c,   cimap_resp,  quota_type_change_unsupported,  2,0,0,30065,      "Nepodporovan� typ zm�ny kv�ty.") \
	MDESC(c,   cimap_resp,  cannot_delete_special_alias,    2,0,0,30066,      "Speci�ln� aliasy (root, abuse) nelze odstranit.") \
	MDESC(c,   cimap_resp,  cannot_change_special_alias,    2,0,0,30067,      "Speci�ln� aliasy (root, abuse) nelze zm�nit.") \
	MDESC(c,   cimap_resp,  alias_already_exists,           2,0,0,30068,      "Alias ji� existuje a odkazuje na jin� mailbox.") \
	MDESC(c,   cimap_resp,  plain_pwd_not_available,        2,0,0,30069,      "Heslo v ne�ifrovan�m tvaru nen� k dispozici.") \
	MDESC(c,   cimap_resp,  domain_note_not_found,          2,0,0,30070,      "Pozn�mka k dom�n� nenalezena.") \
	MDESC(c,   cimap_resp,  missing_note_type,              2,0,0,30071,      "Sch�z� typ pozn�mky.") \
	MDESC(c,   cimap_resp,  invalid_note_type,              2,0,0,30072,      "Chybn� form�t typu pozn�mky.") \
	MDESC(c,   cimap_resp,  missing_note,                   2,0,0,30073,      "Sch�z� pozn�mka.") \
	MDESC(c,   cimap_resp,  missing_ntid,                   2,0,0,30074,      "Sch�z� identifik�tor pozn�mky.") \
	MDESC(c,   cimap_resp,  invalid_ntid,                   2,0,0,30075,      "Chybn� form�t identifik�toru pozn�mky.") \
	MDESC(c,   cimap_resp,  missing_search_param,           2,0,0,30076,      "Sch�z� parametr vyhled�v�n�.") \
	MDESC(c,   cimap_resp,  sm_delete_mailbox_incomplete,   2,0,0,30077,      "Odstran�n� mailboxu nebylo zcela dokon�eno, mailbox nen� v konzistentn�m stavu.") \
	MDESC(c,   cimap_resp,  sm_delete_domain_incomplete,    2,0,0,30078,      "Odstran�n� dom�ny nebylo zcela dokon�eno, dom�na nen� v konzistentn�m stavu.") \
	MDESC(c,   cimap_resp,  sm_create_mailbox_incomplete,   2,0,0,30079,      "Vytvo�en� mailboxu nebylo zcela dokon�eno, mailbox nen� v konzistentn�m stavu.") \
	MDESC(c,   cimap_resp,  sm_create_mailbox_rollbacked,   2,0,0,30080,      "Vytvo�en� mailboxu opakovan� selhalo.") \
	MDESC(c,   cimap_resp,  sm_create_domain_incomplete,    2,0,0,30081,      "Vytvo�en� dom�ny nebylo zcela dokon�eno, dom�na nen� v konzistentn�m stavu.") \
	MDESC(c,   cimap_resp,  sm_create_domain_rollbacked,    2,0,0,30082,      "Vytvo�en� dom�ny opakovan� selhalo.") \
	MDESC(c,   cimap_resp,  randpass_failed,                2,0,0,30083,      "Gener�tor n�hodn�ch hesel selhal.") \
	MDESC(c,   cimap_resp,  migr_cannot_connect_to_src_imap, 2,0,0,30084,      "Nelze se p�ihl�sit k v�choz�mu IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_connect_to_dst_imap, 2,0,0,30085,      "Nelze se p�ihl�sit k c�lov�mu IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_general_error,             2,0,0,30086,      "Nespecifikovan� chyba p�i migraci mailboxu.") \
	MDESC(c,   cimap_resp,  migr_cannot_fetch_folders,      2,0,0,30087,      "Nelze zjistit seznam slo�ek mailboxu z IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_select_folder,      2,0,0,30088,      "Nelze vybrat slo�ku mailboxu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_folder_migration_failed,   2,0,0,30089,      "Do�lo k chyb� p�i kop�rov�n� dat na c�lov� IMAP server.") \
	MDESC(c,   cimap_resp,  migr_incomplete_mailboxe,       2,0,0,30090,      "Do�lo k chyb� p�i kop�rov�n� dat na c�lov� IMAP server, ��st dat mailboxu v�ak ji� byla p�esunuta a jejich odstran�n� selhalo.") \
	MDESC(c,   cimap_resp,  migr_incompatible_imap_seps,    2,0,0,30091,      "Konvence n�zv� slo�ek na IMAP serverech nejsou kompatibiln�.") \
	MDESC(c,   cimap_resp,  missing_mail_server,            2,0,0,30092,      "Chyb� c�lov� mailserver.") \
	MDESC(c,   cimap_resp,  mail_server_not_found,          2,0,0,30093,      "C�lov� mailserver nebyl nalezen.") \
	MDESC(c,   cimap_resp,  invalid_mail_server,            2,0,0,30094,      "Chybn� form�t c�lov�ho mailserveru.") \
	MDESC(c,   cimap_resp,  missing_src_imap,               2,0,0,30095,      "Chyb� v�choz� IMAP server.") \
	MDESC(c,   cimap_resp,  invalid_src_imap,               2,0,0,30096,      "Chybn� form�t v�choz�ho IMAP serveru.") \
	MDESC(c,   cimap_resp,  invalid_dst_imap,               2,0,0,30097,      "Chybn� form�t c�lov�ho IMAP serveru.") \
	MDESC(c,   cimap_resp,  cannot_exec_migr_process,       2,0,0,30098,      "Neze spustit proces migrace mailbox�.") \
	MDESC(c,   cimap_resp,  migr_process_error,             2,0,0,30099,      "Chyba procesu migrace mailbox�.") \
	MDESC(c,   cimap_resp,  migr_process_output_error,      2,0,0,30100,      "Chyba ve v�stupu procesu migrace mailbox�.") \
	MDESC(c,   cimap_resp,  migr_process_finished_with_errors, 2,0,0,30101,   "Proces migrace mailbox� skon�il s chybami.") \
	MDESC(c,   cimap_resp,  migr_mailbox_error,             2,0,0,30102,      "Migrace mailboxu selhala.") \
	MDESC(c,   cimap_resp,  invalid_override_param,         2,0,0,30103,      "Chybn� hodnota parametru override.") \
	MDESC(c,   cimap_resp,  transport_not_found,            2,0,0,30104,      "Transport po�ty pro danou dom�nu nenalezen.") \
	MDESC(c,   cimap_resp,  forward_alias_loop,             2,0,0,30105,      "P�esm�rov�n� ukazuje na alias k v�choz�mu mailboxu.") \
	MDESC(c,   cimap_resp,  relay_user_not_found,           2,0,0,30106,      "U�ivatel relaye nenalezen.") \
	MDESC(c,   cimap_resp,  missing_relay_user,             2,0,0,30107,      "Sch�z� parametr u�ivatele relaye.") \
	MDESC(c,   cimap_resp,  invalid_relay_user,             2,0,0,30108,      "Chybn� form�t u�ivatele relaye.") \
	MDESC(c,   cimap_resp,  invalid_relay_all,              2,0,0,30109,      "Chybn� form�t parametru relay_all.") \
	MDESC(c,   cimap_resp,  imap_client_connect_failed,     2,0,0,30110,      "Nelze se p�ihl�sit k IMAP serveru.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_create_folder, 2,0,0,30111,    "Nelze vytvo�it po�adovanou slo�ku v mailboxu.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_logout,      2,0,0,30112,      "Nelze se odhl�sit od IMAP serveru.") \
	MDESC(c,   cimap_resp,  missing_dst_imap,               2,0,0,30113,      "Chyb� parametr c�lov�ho IMAP serveru.") \
	MDESC(c,   cimap_resp,  domain_mail_server_not_found,   2,0,0,30114,      "Nenalezen mailserver na kter�m le�� dan� dom�na.") \
	MDESC(c,   cimap_resp,  invalid_mail_server_ip_route,   2,0,0,30115,      "Chybn� nastaven� server_map.server_route pro dan� mailserver.") \
	MDESC(c,   cimap_resp,  invalid_mail_server_ip_address, 2,0,0,30116,      "Chybn� IP adresa v server_map.server_route pro dan� mailserver.") \
	MDESC(c,   cimap_resp,  missing_mail_server_name,       2,0,0,30117,      "Chyb� jm�no po�tovn�ho serveru.") \
	MDESC(c,   cimap_resp,  invalid_mail_server_name,       2,0,0,30118,      "Chybn� form�t jm�na po�tovn�ho serveru.") \
	MDESC(c,   cimap_resp,  missing_local_mail_servers,     2,0,0,30119,      "Chyb� parametr local_mail_servers.") \
	MDESC(c,   cimap_resp,  invalid_local_mail_servers,     2,0,0,30120,      "Chybn� hodnota parametru local_mail_servers.") \
	MDESC(c,   cimap_resp,  missing_folder_param,           2,0,0,30121,      "Chyb� parametr folder.") \
	MDESC(c,   cimap_resp,  empty_folder_param,             2,0,0,30122,      "Parametr folder je pr�zdn�.") \
	MDESC(c,   cimap_resp,  migr_cannot_create_dst_folder,  2,0,0,30123,      "Nelze vytvo�it slo�ku mailboxu na c�lov�m IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_subscribe_folder,   2,0,0,30124,      "Nelze se p�ihl�sit k slo�ce mailboxu na c�lov�m IMAP serveru.") \
	MDESC(c,   cimap_resp,  migr_cannot_select_dst_folder,  2,0,0,30125,      "Nelze vybrat slo�ku mailboxu na c�lov�m IMAP serveru.") \
	MDESC(c,   cimap_resp,  alias_too_long,                 2,0,0,30126,      "Alias je p��li� dlouh�.") \
	MDESC(c,   cimap_resp,  invalid_src_user_name,          2,0,0,30127,      "Chybn� form�t zdrojov�ho u�ivatelsk�ho jm�na (n�zvu mailboxu).") \
	MDESC(c,   cimap_resp,  missing_src_user_name,          2,0,0,30128,      "Chyb� zdrojov� u�ivatelsk� jm�no (n�zev mailboxu).") \
	MDESC(c,   cimap_resp,  src_username_not_found,         2,0,0,30129,      "Zdrojov� u�ivatelsk� jm�no (n�zev mailboxu) nenalezeno.") \
	MDESC(c,   cimap_resp,  src_imap_does_not_match,        2,0,0,30130,      "Zdrojov� IMAP server neodpov�d� serveru ze kter�ho prob�h� migrace." ) \
	MDESC(c,   cimap_resp,  dst_imap_does_not_match,        2,0,0,30131,      "C�lov� IMAP server neodpov�d� serveru na kter� prob�h� migrace.") \
	MDESC(c,   cimap_resp,  invalid_migration_status,       2,0,0,30132,      "Nep��pustn� stav migrace.") \
	MDESC(c,   cimap_resp,  data_migration_not_possible,    2,0,0,30133,      "Migrace dat nen� mo�n�.") \
	MDESC(c,   cimap_resp,  domain_migration_info_not_found,2,0,0,30134,      "Informace o stavu migrace nenalezeny.") \
	MDESC(c,   cimap_resp,  source_and_dest_mail_servers_are_the_same, 2,0,0,30135,  "C�lov� mailserver je toto�n� se zdrojov�m mailserverem.") \
	MDESC(c,   cimap_resp,  domain_is_being_migrated,       2,0,0,30136,      "Dom�na je pr�v� migrov�na." ) \
	MDESC(c,   cimap_resp,  dest_mail_server_contains_zombie_mailboxes, 2,0,0,30137, "C�lov� mailserver obsahuje zombie mailbox� t�e dom�ny z d��v�j��ch migrac�.") \
	MDESC(c,   cimap_resp,  cannot_inject_email,            2,0,0,30138,      "Nepoda�ilo se vlo�it email do c�lov�ho mailboxu.") \
	MDESC(c,   cimap_resp,  invalid_email_data,             2,0,0,30139,      "Chybn� data emailu.") \
	MDESC(c,   cimap_resp,  missing_email_data,             2,0,0,30140,      "Chyb� data emailu.") \
	MDESC(c,   cimap_resp,  missing_email_body_bindata,     2,0,0,30141,      "Chyb� bin�rn� data s t�lem emailu.") \
	MDESC(c,   cimap_resp,  invalid_email_body_bindata,     2,0,0,30142,      "Chybn� bin�rn� data s t�lem emailu.") \
	MDESC(c,   cimap_resp,  missing_raw_email_param,        2,0,0,30143,      "Sch�z� parametr raw_email.") \
	MDESC(c,   cimap_resp,  invalid_raw_email_param,        2,0,0,30144,      "Chybn� hodnota parametru raw_email.") \
	MDESC(c,   cimap_resp,  missing_from,                   2,0,0,30145,      "Sch�z� parametr from.") \
	MDESC(c,   cimap_resp,  invalid_from,                   2,0,0,30146,      "Chybn� hodnota parametru from.") \
	MDESC(c,   cimap_resp,  missing_subject,                2,0,0,30147,      "Sch�z� parametr subject.") \
	MDESC(c,   cimap_resp,  invalid_subject,                2,0,0,30148,      "Chybn� hodnota parametru subject.") \
	MDESC(c,   cimap_resp,  domain_is_not_being_migrated,   2,0,0,30149,      "Podle z�znam� v databazi neprob�h� migrace t�to dom�ny.") \
	MDESC(c,   cimap_resp,  remove_migrated_zombies_already_running, 2,0,0,30150, "Odstra�ov�n� zombies odmigrovan�ch mailbox� pr�v� prob�h� a nen� mo�n� jej spustit dvakr�t.") \
	MDESC(c,   cimap_resp,  perl_delete_mailbox_not_found,  2,0,0,30151,      "Chyba p�i odstra�ov�n� fyzick�ho mailboxu na IMAP serveru - mailbox nenalezen.") \
	MDESC(c,   cimap_resp,  domain_has_zombies_on_mail_server, 2,0,0,30152,   "Dom�na m� zombie mailboxy na c�lov�m mailserveru.") \
	MDESC(c,   cimap_resp,  invalid_expect_overquota,        2,0,0,30153,      "Chybn� hodnota parametru expect_overquota.") \
	MDESC(c,   cimap_resp,  missing_expect_overquota,        2,0,0,30154,      "Chyb� parametr expect_overquota.") \
	MDESC(c,   cimap_resp,  perl_rmquota_command_failed,     2,0,0,30155,      "Chyba p�i ru�en� kv�ty na IMAP serveru.") \
	MDESC(c,   cimap_resp,  missing_msid,                    2,0,0,30156,      "Sch�z� parametr msid.") \
	MDESC(c,   cimap_resp,  invalid_msid,                    2,0,0,30157,      "Chybn� hodnota parametru msid.") \
	MDESC(c,   cimap_resp,  missing_bulk_size,               2,0,0,30158,      "Sch�z� parametr bulk_size.") \
	MDESC(c,   cimap_resp,  invalid_bulk_size,               2,0,0,30159,      "Chybn� hodnota parametru bulk_size.") \
	MDESC(c,   cimap_resp,  missing_last_domain,             2,0,0,30160,      "Sch�z� parametr last_domain.") \
	MDESC(c,   cimap_resp,  invalid_last_domain,             2,0,0,30161,      "Chybn� hodnota parametru last_domain.") \
	MDESC(c,   cimap_resp,  msid_not_found,                  2,0,0,30162,      "Mail server s dan�m identifik�torem msid nenalezen.") \
	MDESC(c,   cimap_resp,  mailbox_record_not_found,        2,0,0,30163,      "Nenalezen p��slu�n� z�znam v tabulce mailboxes.") \
	MDESC(c,   cimap_resp,  missing_block,                   2,0,0,30164,      "Chyb� parametr 'block'.") \
	MDESC(c,   cimap_resp,  invalid_block,                   2,0,0,30165,      "Chybn� hodnota parametru 'block'.") \
	MDESC(c,   cimap_resp,  missing_enable_rbl,              2,0,0,30166,      "Chyb� parametr 'enable_rbl'.") \
	MDESC(c,   cimap_resp,  invalid_enable_rbl,              2,0,0,30167,      "Chybn� hodnota parametru 'enable_rbl'.") \
	MDESC(c,   cimap_resp,  missing_disable_blocking,        2,0,0,30168,      "Chyb� parametr 'disable_blocking'.") \
	MDESC(c,   cimap_resp,  invalid_disable_blocking,        2,0,0,30169,      "Chybn� hodnota parametru 'disable_blocking'.") \
	MDESC(c,   cimap_resp,  invalid_domain_alias_virtual_map_entry, 2,0,0,30170, "Chybn� z�znam dom�nov�ho aliasu ve virtu�ln�ch map�ch.") \
	MDESC(c,   cimap_resp,  invalid_alias_virtual_map_entry, 2,0,0,30171,      "Chybn� z�znam aliasu ve virtu�ln�ch map�ch.") \
	MDESC(c,   cimap_resp,  unsupported_quota_type,          2,0,0,30172,      "Nepodporovan� typ kv�ty." ) \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_not_found,   2,0,0,30173,      "Individu�ln� kv�ta mailboxu nenalezena." ) \
	MDESC(c,   cimap_resp,  invalid_quota_mb_min_max_limits, 2,0,0,30174,      "Neplatn� limity minim�ln� a maxim�ln� velikosti kv�ty mailboxu." ) \
	MDESC(c,   cimap_resp,  invalid_quota_mb_def_limit,      2,0,0,30175,      "Neplatn� limit defaultn� kv�ty mailboxu." ) \
	MDESC(c,   cimap_resp,  missing_quota_mb_min,            2,0,0,30176,      "Chyb� parametr 'quota_mb_min'.") \
	MDESC(c,   cimap_resp,  invalid_quota_mb_min,            2,0,0,30177,      "Chybn� hodnota parametru 'quota_mb_min'.") \
	MDESC(c,   cimap_resp,  missing_quota_mb_max,            2,0,0,30178,      "Chyb� parametr 'quota_mb_max'.") \
	MDESC(c,   cimap_resp,  invalid_quota_mb_max,            2,0,0,30179,      "Chybn� hodnota parametru 'quota_mb_max'.") \
	MDESC(c,   cimap_resp,  missing_quota_mb_def,            2,0,0,30180,      "Chyb� parametr 'quota_mb_def'.") \
	MDESC(c,   cimap_resp,  invalid_quota_mb_def,            2,0,0,30181,      "Chybn� hodnota parametru 'quota_mb_def'.") \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_over_mb_max, 2,0,0,30182,      "Kv�ta dan�ho mailboxu je vy��� ne� maxim�ln� limit pro danou dom�nu." ) \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_under_mb_min, 2,0,0,30183,     "Kv�ta dan�ho mailboxu je ni��� ne� minim�ln� limit pro danou dom�nu." ) \
	MDESC(c,   cimap_resp,  mailboxes_violate_domain_quota_restrictions, 2,0,0,30184, "Jeden nebo v�ce mailbox� poru�uje limity omezen� kv�t pro danou dom�nu." ) \
	MDESC(c,   cimap_resp,  mailboxes_over_quota_total,      2,0,0,30185,      "Sou�et kv�t mailbox� p�ekra�uje celkovou kv�tu dom�ny." ) \
	MDESC(c,   cimap_resp,  missing_quota_total,             2,0,0,30186,      "Chyb� parametr 'quota_total'.") \
	MDESC(c,   cimap_resp,  invalid_quota_total,             2,0,0,30187,      "Chybn� hodnota parametru 'quota_total'.") \
	MDESC(c,   cimap_resp,  missing_quota_limit,             2,0,0,30188,      "Chyb� parametr 'quota_limit'.") \
	MDESC(c,   cimap_resp,  invalid_quota_limit,             2,0,0,30189,      "Chybn� hodnota parametru 'quota_limit'.") \
	MDESC(c,   cimap_resp,  mailbox_quota_ex_not_found,      2,0,0,30190,      "Nenalezeny informace o nastaven� kv�ty dan�ho mailboxu." ) \
	MDESC(c,   cimap_resp,  missing_qw_check,                2,0,0,30191,      "Chyb� parametr 'qw_check'.") \
	MDESC(c,   cimap_resp,  invalid_qw_check,                2,0,0,30192,      "Chybn� hodnota parametru 'qw_check'.") \
	MDESC(c,   cimap_resp,  missing_relay_all,               2,0,0,30193,      "Chyb� parametr 'relay_all'.") \
	MDESC(c,   cimap_resp,  missing_qw_udelay,               2,0,0,30194,      "Chyb� parametr 'qw_udelay'.") \
	MDESC(c,   cimap_resp,  invalid_qw_udelay,               2,0,0,30195,      "Chybn� hodnota parametru 'qw_udelay'.") \
	MDESC(c,   cimap_resp,  missing_qw_adelay,               2,0,0,30196,      "Chyb� parametr 'qw_adelay'.") \
	MDESC(c,   cimap_resp,  invalid_qw_adelay,               2,0,0,30197,      "Chybn� hodnota parametru 'qw_adelay'.") \
	MDESC(c,   cimap_resp,  missing_qw_llim,                 2,0,0,30198,      "Chyb� parametr 'qw_llim'.") \
	MDESC(c,   cimap_resp,  invalid_qw_llim,                 2,0,0,30199,      "Chybn� hodnota parametru 'qw_llim'.") \
	MDESC(c,   cimap_resp,  missing_qw_hlim,                 2,0,0,30200,      "Chyb� parametr 'qw_hlim'.") \
	MDESC(c,   cimap_resp,  invalid_qw_hlim,                 2,0,0,30201,      "Chybn� hodnota parametru 'qw_hlim'.") \
	MDESC(c,   cimap_resp,  missing_qw_xlim,                 2,0,0,30202,      "Chyb� parametr 'qw_xlim'.") \
	MDESC(c,   cimap_resp,  invalid_qw_xlim,                 2,0,0,30203,      "Chybn� hodnota parametru 'qw_xlim'.") \
	MDESC(c,   cimap_resp,  missing_admin_email,             2,0,0,30204,      "Chyb� parametr 'admin_email'.") \
	MDESC(c,   cimap_resp,  invalid_admin_email,             2,0,0,30205,      "Chybn� hodnota parametru 'admin_email'.") \
	MDESC(c,   cimap_resp,  invalid_mailbox_quotawarn_limits,2,0,0,30206,      "Chybn� limity hl�dan� obsazen�ho prostoru mailboxu." ) \
	MDESC(c,   cimap_resp,  invalid_domain_quotawarn_limits, 2,0,0,30207,      "Chybn� limity hl�dan� obsazen�ho prostoru dom�ny." ) \
	MDESC(c,   cimap_resp,  mailboxes_violate_quotawarn_restrictions, 2,0,0,30208, "Jeden nebo v�ce mailbox� poru�uje pravidla limit� hl�dan� obsazen�ho prostoru pro danou dom�nu." ) \
	MDESC(c,   cimap_resp,  missing_qw_email,                2,0,0,30209,      "Chyb� parametr 'qw_email'.") \
	MDESC(c,   cimap_resp,  invalid_qw_email,                2,0,0,30210,      "Chybn� hodnota parametru 'qw_email'.") \
	MDESC(c,   cimap_resp,  missing_language,                2,0,0,30211,      "Chyb� parametr 'language'.") \
	MDESC(c,   cimap_resp,  invalid_language,                2,0,0,30212,      "Chybn� hodnota parametru 'language'.") \
	MDESC(c,   cimap_resp,  missing_effective,               2,0,0,30213,      "Chyb� parametr 'effective'.") \
	MDESC(c,   cimap_resp,  invalid_effective,               2,0,0,30214,      "Chybn� hodnota parametru 'effective'.") \
	MDESC(c,   cimap_resp,  domain_is_stopped,               2,0,0,30215,      "Dom�na m� zastaven� po�tovn� slu�by." ) \
	MDESC(c,   cimap_resp,  missing_can_edit,                2,0,0,30216,      "Sch�z� parametr 'can_edit'.") \
	MDESC(c,   cimap_resp,  invalid_can_edit,                2,0,0,30217,      "Chybn� hodnota parametru 'can_edit'.") \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_below_usage, 2,0,0,30218,      "Diskov� kv�ta mailboxu je ni��� ne� jeho aktu�ln� obsazen� prostor.") \
	MDESC(c,   cimap_resp,  domains_must_differ,             2,0,0,30219,      "Dom�ny mus� b�t r�zn�.") \
	MDESC(c,   cimap_resp,  src_domain_not_found,            2,0,0,30220,      "Zdrojov� dom�na neexistuje.") \
	MDESC(c,   cimap_resp,  dst_domain_not_found,            2,0,0,30221,      "C�lov� dom�na neexistuje.") \
	MDESC(c,   cimap_resp,  missing_src_domain,              2,0,0,30222,      "Sch�z� parametr 'src_domain'.") \
	MDESC(c,   cimap_resp,  invalid_src_domain,              2,0,0,30223,      "Chybn� hodnota parametru 'src_domain'.") \
	MDESC(c,   cimap_resp,  missing_dst_domain,              2,0,0,30224,      "Sch�z� parametr 'dst_domain'.") \
	MDESC(c,   cimap_resp,  invalid_dst_domain,              2,0,0,30225,      "Chybn� hodnota parametru 'dst_domain'.") \
	MDESC(c,   cimap_resp,  missing_merge,                   2,0,0,30226,      "Sch�z� parametr 'merge'.") \
	MDESC(c,   cimap_resp,  invalid_merge,                   2,0,0,30227,      "Chybn� hodnota parametru 'merge'.") \
	MDESC(c,   cimap_resp,  log_server_mcid_not_found,       2,0,0,30228,      "Nenalezeno mcid serveru s logy (chybn� nebo neexistuj�c� n�zev serveru s logy?).") \
	MDESC(c,   cimap_resp,  missing_log_filter,              2,0,0,30229,      "Sch�z� parametr 'log_filter'.") \
	MDESC(c,   cimap_resp,  invalid_log_filter,              2,0,0,30230,      "Chybn� hodnota parametru 'log_filter'.") \
	MDESC(c,   cimap_resp,  missing_report_email,            2,0,0,30231,      "Sch�z� parametr 'report_email'.") \
	MDESC(c,   cimap_resp,  invalid_report_email,            2,0,0,30232,      "Chybn� hodnota parametru 'report_email'.") \
	MDESC(c,   cimap_resp,  missing_find_email,              2,0,0,30233,      "Sch�z� parametr 'find_email'.") \
	MDESC(c,   cimap_resp,  invalid_find_email,              2,0,0,30234,      "Chybn� hodnota parametru 'find_email'.") \
	MDESC(c,   cimap_resp,  missing_start_date,              2,0,0,30235,      "Sch�z� parametr 'start_date'.") \
	MDESC(c,   cimap_resp,  invalid_start_date,              2,0,0,30236,      "Chybn� hodnota parametru 'start_date'.") \
	MDESC(c,   cimap_resp,  missing_end_date,                2,0,0,30237,      "Sch�z� parametr 'end_date'.") \
	MDESC(c,   cimap_resp,  invalid_end_date,                2,0,0,30238,      "Chybn� hodnota parametru 'end_date'.") \
	MDESC(c,   cimap_resp,  invalid_domain_list,             2,0,0,30239,      "Neplatn� seznam dom�n.") \
	MDESC(c,   cimap_resp,  missing_dlid,                    2,0,0,30240,      "Chyb� parametr 'dlid'.") \
	MDESC(c,   cimap_resp,  invalid_dlid,                    2,0,0,30241,      "Chybn� hodnota parametru 'dlid'.") \
	MDESC(c,   cimap_resp,  domain_alias_already_exists_as_domain_alias, 2,0,0,30242, "Dom�nov� alias stejn�ho jm�na ji� existuje.") \
	MDESC(c,   cimap_resp,  domain_already_exists_as_domain_alias, 2,0,0,30243, "Dom�na stejn�ho jm�na ji� existuje jako dom�nov� alias.") \
	MDESC(c,   cimap_resp,  domain_alias_is_equal_to_domain, 2,0,0,30244,      "Dom�nov� alias je toto�n� s dom�nov�m jm�nem.") \
	MDESC(c,   cimap_resp,  slave_imap_command_not_found,    2,0,0,30245,      "Po�adovan� slave imap p��kaz nenalezen.") \
	MDESC(c,   cimap_resp,  slave_imap_command_exception,    2,0,0,30246,      "Po�adovan� slave imap p��kaz skon�il v�jimkou.") \
	MDESC(c,   cimap_resp,  slave_request_not_queued,        2,0,0,30247,      "Za�azen� slave po�adavku do fronty bylo odm�tnuto.") \
	MDESC(c,   cimap_resp,  slave_wait_for_response_failed,  2,0,0,30248,      "�ek�n� na vy��zen� slave po�adavku selhalo.") \
	MDESC(c,   cimap_resp,  slave_request_failed,            2,0,0,30249,      "Slave po�adavek selhal.") \
	MDESC(c,   cimap_resp,  slave_imap_connect_failed,       2,0,0,30250,      "Slave po�adavek selhal p�i p�ipojov�n� k IMAP serveru.") \
	MDESC(c,   cimap_resp,  slave_no_command_result,         2,0,0,30251,      "Slave po�adavek nevr�til ��dn� v�sledek slave p��kazu.") \
	MDESC(c,   cimap_resp,  slave_nonnumeric_command_result, 2,0,0,30252,      "V�sledek slave p��kazu nelze p�ev�st na numerickou hodnotu.") \
	MDESC(c,   cimap_resp,  missing_qw_lflags,               2,0,0,30253,      "Chyb� parametr 'qw_lflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_lflags,               2,0,0,30254,      "Chybn� hodnota parametru 'qw_lflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_hflags,               2,0,0,30255,      "Chyb� parametr 'qw_hflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_hflags,               2,0,0,30256,      "Chybn� hodnota parametru 'qw_hflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_xflags,               2,0,0,30257,      "Chyb� parametr 'qw_xflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_xflags,               2,0,0,30258,      "Chybn� hodnota parametru 'qw_xflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_dflags,               2,0,0,30259,      "Chyb� parametr 'qw_dflags'.") \
	MDESC(c,   cimap_resp,  invalid_qw_dflags,               2,0,0,30260,      "Chybn� hodnota parametru 'qw_dflags'.") \
	MDESC(c,   cimap_resp,  missing_qw_specified,            2,0,0,30261,      "Chyb� parametr 'qw_specified'.") \
	MDESC(c,   cimap_resp,  invalid_qw_specified,            2,0,0,30262,      "Chybn� hodnota parametru 'qw_specified'.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_list_folders, 2,0,0,30263,      "Nelze vylistovat slo�ky p��slu�n� schr�nky na IMAP serveru.") \
	MDESC(c,   cimap_resp,  imap_client_cannot_stat_folder,  2,0,0,30264,      "Nelze zjistit stav n�kter� slo�ky p��slu�n� schr�nky na IMAP serveru.") \
	MDESC(c,   cimap_resp,  imap_client_invalid_folder_status, 2,0,0,30265,    "Chybn� stav n�kter� slo�ky p��slu�n� schr�nky na IMAP serveru.") \
	MDESC(c,   cimap_resp,  folder_info_format_error,        2,0,0,30266,      "Chybn� form�t informac� o slo�ce mailboxu vr�cen� z backendu." ) \
	MDESC(c,   cimap_resp,  username_already_exists_as_alias,2,0,0,30267,      "Dan� u�ivatelsk� jm�no (n�zev mailboxu) ji� existuje jako alias." ) \
	MDESC(c,   cimap_resp,  cannot_subscribe_folder,         2,0,0,30268,      "Nelze se p�ihl�sit ke slo�ce mailboxu.") \
	MDESC(c,   cimap_resp,  cannot_unsubscribe_folder,       2,0,0,30269,      "Nelze zru�it odb�r slo�ky mailboxu.") \
	MDESC(c,   cimap_resp,  missing_fix_forwards,            2,0,0,30270,      "Chyb� parametr 'fix_forwards'.") \
	MDESC(c,   cimap_resp,  invalid_fix_forwards,            2,0,0,30271,      "Chybn� hodnota parametru 'fix_forwards'.") \
	MDESC(c,   cimap_resp,  domain_dlid_mismatch,            2,0,0,30272,      "Nesouhlas� o�ek�van� a skute�n� seznam dom�n." ) \
	MDESC(c,   cimap_resp,  illegal_username,                2,0,0,30273,      "Nedovolen� u�ivatelsk� jm�no." ) \
	MDESC(c,   cimap_resp,  missing_smtp_block_reason,       2,0,0,30274,      "Chyb� parametr 'smtp_block_reason'." ) \
	MDESC(c,   cimap_resp,  invalid_smtp_block_reason,       2,0,0,30275,      "Chybn� parametr 'smtp_block_reason'." ) \
	MDESC(c,   cimap_resp,  missing_sender_forgery_forbidden,2,0,0,30276,      "Chyb� parametr 'sender_forgery_forbidden'." ) \
	MDESC(c,   cimap_resp,  invalid_sender_forgery_forbidden,2,0,0,30277,      "Chybn� parametr 'sender_forgery_forbidden'." ) \
	MDESC(c,   cimap_resp,  password_is_broken,              2,0,0,30278,      "Dan� heslo bylo v minulosti zneu�it�." ) \
\
	MDESC(c,   cimap_resp,  folder_autoclear_rule_not_found, 2,1,0,30001,      "Pravidlo automatick�ho mazan� pro danou slo�ku neexistuje.") \
	MDESC(c,   cimap_resp,  zero_check_interval,             2,1,0,30002,      "Interval kontroly nesm� b�t nulov�.") \
	MDESC(c,   cimap_resp,  quota_percents_invalid,          2,1,0,30003,      "Chybn� hodnoty horn�ho a doln�ho limitu procet kv�ty.") \
	MDESC(c,   cimap_resp,  quota_percents_order,            2,1,0,30004,      "Chybn� po�ad� horn�ho a doln�ho limitu procet kv�ty.") \
	MDESC(c,   cimap_resp,  zero_mail_age,                   2,1,0,30005,      "St��� mazan�ch mail� mus� b�t minim�ln� jeden den.") \
	MDESC(c,   cimap_resp,  missing_active_param,            2,1,0,30006,      "Chyb� parametr 'active'.") \
	MDESC(c,   cimap_resp,  invalid_active_param,            2,1,0,30007,      "Chybn� hodnota parametru 'active'.") \
	MDESC(c,   cimap_resp,  missing_recursive_param,         2,1,0,30008,      "Chyb� parametr 'recursive'.") \
	MDESC(c,   cimap_resp,  invalid_recursive_param,         2,1,0,30009,      "Chybn� hodnota parametru 'recursive'.") \
	MDESC(c,   cimap_resp,  missing_mail_age_used_param,     2,1,0,30010,      "Chyb� parametr 'mail_age_used'.") \
	MDESC(c,   cimap_resp,  invalid_mail_age_used_param,     2,1,0,30011,      "Chybn� hodnota parametru 'mail_age_used'.") \
	MDESC(c,   cimap_resp,  missing_quota_percent_used_param,2,1,0,30012,      "Chyb� parametr 'quota_percent_used'.") \
	MDESC(c,   cimap_resp,  invalid_quota_percent_used_param,2,1,0,30013,      "Chybn� hodnota parametru 'quota_percent_used'.") \
	MDESC(c,   cimap_resp,  missing_check_interval_param,    2,1,0,30014,      "Chyb� parametr 'check_interval'.") \
	MDESC(c,   cimap_resp,  invalid_check_interval_param,    2,1,0,30015,      "Chybn� hodnota parametru 'check_interval'.") \
	MDESC(c,   cimap_resp,  missing_mail_age_param,          2,1,0,30016,      "Chyb� parametr 'mail_age'.") \
	MDESC(c,   cimap_resp,  invalid_mail_age_param,          2,1,0,30017,      "Chybn� hodnota parametru 'mail_age'.") \
	MDESC(c,   cimap_resp,  missing_quota_percent_hi_param,  2,1,0,30018,      "Chyb� parametr 'quota_percent_hi'.") \
	MDESC(c,   cimap_resp,  invalid_quota_percent_hi_param,  2,1,0,30019,      "Chybn� hodnota parametru 'quota_percent_hi'.") \
	MDESC(c,   cimap_resp,  missing_quota_percent_lo_param,  2,1,0,30020,      "Chyb� parametr 'quota_percent_lo'.") \
	MDESC(c,   cimap_resp,  invalid_quota_percent_lo_param,  2,1,0,30021,      "Chybn� hodnota parametru 'quota_percent_lo'.") \
	MDESC(c,   cimap_resp,  avels_script_gen_parse_error,    2,1,0,30022,      "Chyba p�i rozboru popisu st�vaj�c�ch filtrovac�ch pravidel.") \
	MDESC(c,   cimap_resp,  avels_script_version_not_found,  2,1,0,30023,      "Chyba p�i rozboru popisu st�vaj�c�ch filtrovac�ch pravidel, nenalezena verze avelsieve.") \
	MDESC(c,   cimap_resp,  avels_script_created_not_found,  2,1,0,30024,      "Chyba p�i rozboru popisu st�vaj�c�ch filtrovac�ch pravidel, nenalezeno datum a �as vytvo�en�.") \
	MDESC(c,   cimap_resp,  avels_script_modified_not_found,  2,1,0,30025,     "Chyba p�i rozboru popisu st�vaj�c�ch filtrovac�ch pravidel, nenalezeno datum a �as posledn� modifikace.") \
	MDESC(c,   cimap_resp,  avels_script_missing_if_before_rule,  2,1,0,30026, "Chyba p�i rozboru popisu st�vaj�c�ch filtrovac�ch pravidel, chyb� 'if' p�ed pravidlem.") \
	MDESC(c,   cimap_resp,  avels_script_wr_missing_version, 2,1,0,30027, "Chyba p�i z�pisu filtrovac�ch pravidel, chyb� verze avelsieve.") \
	MDESC(c,   cimap_resp,  avels_script_wr_missing_require, 2,1,0,30028, "Chyba p�i z�pisu filtrovac�ch pravidel, chyb� ��dek 'require'.") \
	MDESC(c,   cimap_resp,  missing_antispam_level_param,    2,1,0,30029,      "Chyb� parametr 'antispam_level'.") \
	MDESC(c,   cimap_resp,  invalid_antispam_level_param,    2,1,0,30030,      "Chybn� hodnota parametru 'antispam_level'.") \
	MDESC(c,   cimap_resp,  missing_antispam_action_param,   2,1,0,30031,      "Chyb� parametr 'antispam_action'.") \
	MDESC(c,   cimap_resp,  invalid_antispam_action_param,   2,1,0,30032,      "Chybn� hodnota parametru 'antispam_action'.") \
	MDESC(c,   cimap_resp,  amavis_policy_name_not_found,    2,1,0,30033,      "Pravidlo politiky amavisu s po�adovan�m n�zvem nenalezeno.") \
	MDESC(c,   cimap_resp,  cannot_connect_to_timsieved,     2,1,0,30034,      "Nen� mo�n� se p�ipojit na vzd�len�ho sieve d�mona 'timsieved'.") \
	MDESC(c,   cimap_resp,  cannot_list_sieve_scripts,       2,1,0,30035,      "Chyba p�i zji��ov�n� seznamu sieve skript�.") \
	MDESC(c,   cimap_resp,  cannot_download_sieve_script,    2,1,0,30036,      "Chyba p�i stahov�n� sieve skriptu z IMAP serveru.") \
	MDESC(c,   cimap_resp,  cannot_upload_sieve_script,      2,1,0,30037,      "Chyba p�i p�en�en� sieve skriptu na IMAP server.") \
	MDESC(c,   cimap_resp,  cimap_client_perl_internal_error, 2,1,0,30038,     "Vnit�n� chyba v perlov�m skriptu CImapClient.pm.") \
	MDESC(c,   cimap_resp,  cimap_php_unserialize_parse_error, 2,1,0,30039,    "Chyba p�i parsingu avelsieve filtru (php_unserialize).") \
	MDESC(c,   cimap_resp,  cannot_activate_sieve_script,    2,1,0,30040,      "Chyba p�i aktivaci sieve skriptu na IMAP serveru.") \
	MDESC(c,   cimap_resp,  missing_last_rule_id,            2,1,0,30041,      "Chyb� parametr 'last_rule_id'.") \
	MDESC(c,   cimap_resp,  invalid_last_rule_id,            2,1,0,30042,      "Chybn� hodnota parametru 'last_rule_id'.") \
\
	MDESC(c,   cimap_resp,  batch_domain_backup_dir_is_not_dir, 2,2,0,30001,   "Adres�� z�loh struktury dom�ny nen� adres��em.") \
	MDESC(c,   cimap_resp,  batch_cannot_create_domain_backup_dir, 2,2,0,30002, "Nelze vytvo�it adres�� z�loh struktury dom�ny.") \
	MDESC(c,   cimap_resp,  batch_cannot_create_domain_backup_file, 2,2,0,30003, "Nelze vytvo�it soubor pro z�lohu struktury dom�ny.") \
	MDESC(c,   cimap_resp,  batch_cannot_write_domain_backup_file, 2,2,0,30004, "Chyba p�i z�pisu souboru z�lohy struktury dom�ny.") \
\
	MDESC(c,   cimap_resp,  brq_unknown_action,             2,3,0,30001,      "Nezn�m� akce (brq)." ) \
	MDESC(c,   cimap_resp,  brq_backend_error,              2,3,0,30003,      "Chyba p�i prov�d�n� vzd�len� akce na serveru (brq).") \
	MDESC(c,   cimap_resp,  brq_no_relay_log_files_match,   2,3,0,30004,      "Nejsou k dispozici ��dn� log soubory relay�, kter� by odpov�daly zadan�m krit�ri�m (brq).") \
	MDESC(c,   cimap_resp,  brq_no_imap_log_files_match,    2,3,0,30005,      "Nejsou k dispozici ��dn� log soubory imap server�, kter� by odpov�daly zadan�m krit�ri�m (brq).") \
	MDESC(c,   cimap_resp,  brq_no_smtp_log_files_match,    2,3,0,30006,      "Nejsou k dispozici ��dn� log soubory smtp server�, kter� by odpov�daly zadan�m krit�ri�m (brq).") \
\
	MDESC(c,   cimap_resp,  cannot_parse_imap_folders_acls,  2,4,0,30001,      "Chyba p�i parsingu IMAP ACL z�znam�." ) \
	MDESC(c,   cimap_resp,  grant_username_not_found,        2,4,0,30002,      "Mailbox kter�mu maj� b�t poskytnuta pr�va neexistuje." ) \
	MDESC(c,   cimap_resp,  missing_acl_rights,              2,4,0,30003,      "Chyb� parametr 'acl_rights'.") \
	MDESC(c,   cimap_resp,  invalid_acl_rights,              2,4,0,30004,      "Chybn� hodnota parametru 'acl_rights'.") \
	MDESC(c,   cimap_resp,  missing_grant_username,          2,4,0,30005,      "Chyb� parametr 'grant_user'.") \
	MDESC(c,   cimap_resp,  invalid_grant_username,          2,4,0,30006,      "Chybn� hodnota parametru 'grant_user'.") \
\
	MDESC(c,   cimap_resp,  cdkim_module_not_found,          2,5,0,30001,      "CDKIM modul nen� k dispozici.") \
	MDESC(c,   cimap_resp,  missing_dkim_enable,             2,5,0,30002,      "Chyb� parametr 'dkim_enable'.") \
	MDESC(c,   cimap_resp,  invalid_dkim_enable,             2,5,0,30003,      "Chybn� hodnota parametru 'dkim_enable'.") \
	MDESC(c,   cimap_resp,  missing_dkim_subsign,            2,5,0,30004,      "Chyb� parametr 'dkim_subsign'.") \
	MDESC(c,   cimap_resp,  invalid_dkim_subsign,            2,5,0,30005,      "Chybn� hodnota parametru 'dkim_subsign'.") \
\
	MDESC(c,   cimap_resp,  success,                        2,0,0,50000,      "Operace prob�hla �sp�n�.") \
	MDESC(c,   cimap_resp,  mailbox_count,                  2,0,0,50001,      "Po�et mailbox�.") \
	MDESC(c,   cimap_resp,  mailboxes,                      2,0,0,50002,      "Seznam mailbox�.") \
	MDESC(c,   cimap_resp,  max_mailbox_count,              2,0,0,50003,      "Maxim�ln� po�et mailbox� dom�ny.") \
	MDESC(c,   cimap_resp,  password,                       2,0,0,50004,      "Heslo.") \
	MDESC(c,   cimap_resp,  domains,                        2,0,0,50005,      "Seznam dom�n.") \
	MDESC(c,   cimap_resp,  aliases,                        2,0,0,50006,      "Seznam alias�.") \
	MDESC(c,   cimap_resp,  forwards,                       2,0,0,50007,      "Seznam p�esm�rov�n�.") \
	MDESC(c,   cimap_resp,  alias_created,                  2,0,0,50008,      "Alias �sp�n� vytvo�en.") \
	MDESC(c,   cimap_resp,  alias_deleted,                  2,0,0,50009,      "Alias �sp�n� odstran�n.") \
	MDESC(c,   cimap_resp,  forward_added,                  2,0,0,50010,      "P�esm�rov�n� �sp�n� p�id�no.") \
	MDESC(c,   cimap_resp,  forward_deleted,                2,0,0,50011,      "P�esm�rov�n� �sp�n� odstran�no.") \
	MDESC(c,   cimap_resp,  forward_local_copy_set,         2,0,0,50012,      "P��znak lok�ln� kopie p�i p�esm�rov�n� �sp�n� zm�n�n.") \
	MDESC(c,   cimap_resp,  domain_catchall,                2,0,0,50013,      "Dom�nov� ko�.") \
	MDESC(c,   cimap_resp,  domain_catchall_set,            2,0,0,50014,      "Dom�nov� ko� �sp�n� nastaven.") \
	MDESC(c,   cimap_resp,  domain_catchall_removed,        2,0,0,50015,      "Dom�nov� ko� �sp�n� zru�en.") \
	MDESC(c,   cimap_resp,  mailbox_deleted,                2,0,0,50016,      "Mailbox �sp�n� odstran�n.") \
	MDESC(c,   cimap_resp,  mailbox_created,                2,0,0,50017,      "Mailbox �sp�n� vytvo�en.") \
	MDESC(c,   cimap_resp,  domain_created,                 2,0,0,50018,      "Dom�na �sp�n� vytvo�ena.") \
	MDESC(c,   cimap_resp,  domain_deleted,                 2,0,0,50019,      "Dom�na �sp�n� odstran�na.") \
	MDESC(c,   cimap_resp,  domain_aliases,                 2,0,0,50020,      "Seznam dom�nov�ch alias�.") \
	MDESC(c,   cimap_resp,  domain_alias_created,           2,0,0,50021,      "Dom�nov� alias �sp�n� vytvo�en.") \
	MDESC(c,   cimap_resp,  domain_alias_deleted,           2,0,0,50022,      "Dom�nov� alias �sp�n� odstran�n.") \
	MDESC(c,   cimap_resp,  password_set,                   2,0,0,50023,      "Heslo �sp�n� zm�n�no.") \
	MDESC(c,   cimap_resp,  domain_nameservers,             2,0,0,50024,      "NS z�znamy dom�ny.") \
	MDESC(c,   cimap_resp,  domain_mx_records,              2,0,0,50025,      "MX z�znamy dom�ny.") \
	MDESC(c,   cimap_resp,  domain_has_no_transport,        2,0,0,50026,      "Dom�na nem� nastaven� po�tovn� transport.") \
	MDESC(c,   cimap_resp,  domain_transport,               2,0,0,50027,      "C�lov� server pro po�tu dan� dom�ny.") \
	MDESC(c,   cimap_resp,  max_mailbox_count_set,          2,0,0,50028,      "Nastaven maxim�ln� po�et mailbox� dom�ny.") \
	MDESC(c,   cimap_resp,  domain_changelog,               2,0,0,50029,      "Historie zm�n po�ty dom�ny �sp�n� na�tena.") \
	MDESC(c,   cimap_resp,  virtual_users_table_migrated,   2,0,0,50030,      "Migrace tabulky virtualusers �sp�n� dokon�ena.") \
	MDESC(c,   cimap_resp,  domain_usage,                   2,0,0,50031,      "Obsazen� prostor dom�ny �sp�n� zji�t�n.") \
	MDESC(c,   cimap_resp,  mailbox_usage,                  2,0,0,50032,      "Obsazen� prostor mailboxu �sp�n� zji�t�n.") \
	MDESC(c,   cimap_resp,  quota,                          2,0,0,50033,      "Nastaven� quoty �sp�n� zji�t�no.") \
	MDESC(c,   cimap_resp,  quota_set,                      2,0,0,50034,      "Nastaven� quoty �sp�n� zm�n�no.") \
	MDESC(c,   cimap_resp,  mailbox_accounts,               2,0,0,50035,      "Seznam ��t� mailboxu �sp�n� na�ten.") \
	MDESC(c,   cimap_resp,  password_changed,               2,0,0,50036,      "Heslo ��tu �sp�n� zm�n�no.") \
	MDESC(c,   cimap_resp,  postmaster_account_password,    2,0,0,50037,      "Heslo postmastera.") \
	MDESC(c,   cimap_resp,  domain_notes,                   2,0,0,50038,      "Seznam pozn�mek k dom�n�.") \
	MDESC(c,   cimap_resp,  domain_note_added,              2,0,0,50039,      "Pozn�mka k dom�n� �sp�n� p�id�na.") \
	MDESC(c,   cimap_resp,  domain_note_deleted,            2,0,0,50040,      "Pozn�mka k dom�n� �sp�n� odstran�na.") \
	MDESC(c,   cimap_resp,  domain_note_changed,            2,0,0,50041,      "Pozn�mka k dom�n� �sp�n� zm�n�na.") \
	MDESC(c,   cimap_resp,  nonstandard_domain,             2,0,0,50042,      "P��znak, zda m� dom�na nestandardn� nastaven�.") \
	MDESC(c,   cimap_resp,  max_mailbox_usage,              2,0,0,50043,      "Kv�ta dom�ny a obsazen� prostor nejv�t��ho mailboxu.") \
	MDESC(c,   cimap_resp,  password_checked,               2,0,0,50044,      "Heslo ov��eno.") \
	MDESC(c,   cimap_resp,  domain_type,                    2,0,0,50045,      "Typ dom�ny.") \
	MDESC(c,   cimap_resp,  search_result,                  2,0,0,50046,      "V�sledek hled�n�.") \
	MDESC(c,   cimap_resp,  transport_set,                  2,0,0,50047,      "Transport �sp�n� nastaven.") \
	MDESC(c,   cimap_resp,  migr_process_started,           2,0,0,50048,      "Migrace mailbox� byla �sp�n� spu�t�na.") \
	MDESC(c,   cimap_resp,  migr_process_succeeded,         2,0,0,50049,      "Migrace v�ech mailbox� byla dokon�ena.") \
	MDESC(c,   cimap_resp,  migr_mailbox_ok,                2,0,0,50050,      "Migrace mailboxu byla �sp�n�.") \
	MDESC(c,   cimap_resp,  transport_removed,              2,0,0,50051,      "Transport �sp�n� odstran�n.") \
	MDESC(c,   cimap_resp,  relay_user_added,               2,0,0,50052,      "U�ivatel relaye �sp�n� p�id�n.") \
	MDESC(c,   cimap_resp,  relay_user_removed,             2,0,0,50053,      "U�ivatel relaye �sp�n� odstran�n.") \
	MDESC(c,   cimap_resp,  mail_servers,                   2,0,0,50054,      "Seznam po�tovn�ch server�.") \
	MDESC(c,   cimap_resp,  domain_mail_server,             2,0,0,50055,      "Informace o po�tovn�m serveru dom�ny.") \
	MDESC(c,   cimap_resp,  mailbox_account_password,       2,0,0,50056,      "Heslo ��tu mailboxu.") \
	MDESC(c,   cimap_resp,  structure_migrated,             2,0,0,50057,      "Struktura dom�ny �sp�n� p�emigrov�na na jin� mailserver.") \
	MDESC(c,   cimap_resp,  email_injected,                 2,0,0,50058,      "Email byl �sp�n� vlo�en do po�tovn� schr�nky.") \
	MDESC(c,   cimap_resp,  remove_migrated_zombies_succeeded, 2,0,0,50059,   "�i�t�n� zombies po migraci mailbox� prob�hlo �sp�n�.") \
	MDESC(c,   cimap_resp,  mailbox_quota_checked,          2,0,0,50060,      "Kontrola kv�ty a obsazen� mailboxu prob�hla �sp�n�.") \
	MDESC(c,   cimap_resp,  domain_quotas_checked,          2,0,0,50061,      "Kontrola kv�t a obsazen� mailbox� dom�ny prob�hla �sp�n�.") \
	MDESC(c,   cimap_resp,  mail_server_domain_counts,      2,0,0,50062,      "Po�ty dom�n na po�tovn�ch serverech �sp�n� zji�t�ny.") \
	MDESC(c,   cimap_resp,  mail_server_all_domain_counts,  2,0,0,50063,      "Celkov� po�ty dom�n s po�tou na po�tovn�ch serverech �sp�n� zji�t�ny.") \
	MDESC(c,   cimap_resp,  mail_server_domain_transport_counts,  2,0,0,50064, "Celkov� po�ty dom�n s transportem na po�tovn� servery �sp�n� zji�t�ny.") \
	MDESC(c,   cimap_resp,  mailbox_incoming_emails_blocking_set, 2,0,0,50065, "(Od)blokov�n� p��jmu email� dan�ho mailboxu �sp�n� nastaveno.") \
	MDESC(c,   cimap_resp,  mailbox_status_flags,           2,0,0,50066,      "Stavov� p��znaky mailboxu �sp�n� zji�t�ny." ) \
	MDESC(c,   cimap_resp,  domain_rbl_policy_set,          2,0,0,50067,      "P��znak RBL kontroly p��choz� po�ty dom�ny �sp�n� zm�n�n." ) \
	MDESC(c,   cimap_resp,  domain_status_flags,            2,0,0,50068,      "Stavov� p��znaky dom�ny �sp�n� zji�t�ny." ) \
	MDESC(c,   cimap_resp,  overquota_mailboxes_checked,    2,0,0,50069,      "Kontrola obsazen� overquota mailbox� prob�hla �sp�n�.") \
	MDESC(c,   cimap_resp,  disable_oq_blocking_set,        2,0,0,50070,      "Zapnut�/vypnut� blokov�n� p��jmu po�ty z d�vodu p�ekro�en� kv�ty bylo �sp�n� provedeno.") \
	MDESC(c,   cimap_resp,  domain_incoming_emails_blocking_set, 2,0,0,50071, "(Od)blokov�n� p��jmu email� dan� dom�ny �sp�n� nastaveno.") \
	MDESC(c,   cimap_resp,  domain_quota_type_set,          2,0,0,50072,      "Typ kv�ty dom�ny byl �sp�n� zm�n�n.") \
	MDESC(c,   cimap_resp,  mailbox_quota_limit_set,        2,0,0,50073,      "Kv�ta mailboxu byla �sp�n� zm�n�na.") \
	MDESC(c,   cimap_resp,  default_mailbox_quota_limit_set,2,0,0,50074,      "Defaultn� velikost nov�ch mailbox� dom�ny �sp�n� zm�n�na." ) \
	MDESC(c,   cimap_resp,  domain_quotawarn_settings,      2,0,0,50075,      "Nastaven� hl�dan� obsazen�ho prostoru pro dom�nu bylo �sp�n� na�teno." ) \
	MDESC(c,   cimap_resp,  domain_quotawarn_settings_set,  2,0,0,50076,      "Nastaven� hl�dan� obsazen�ho prostoru pro dom�nu bylo �sp�n� zm�n�no." ) \
	MDESC(c,   cimap_resp,  mailboxes_with_quotawarn_settings, 2,0,0,50077,   "Seznam mailbox� s jejich nastaven�m hl�d�n� obsazen�ho prostoru." ) \
	MDESC(c,   cimap_resp,  mailbox_quotawarn_settings_set, 2,0,0,50078,      "Nastaven� hl�dan� obsazen�ho prostoru pro dan� mailbox bylo �sp�n� zm�n�no." ) \
	MDESC(c,   cimap_resp,  domain_language,                2,0,0,50079,      "Jazyk dom�ny." ) \
	MDESC(c,   cimap_resp,  mailbox_language,               2,0,0,50080,      "Jazyk mailboxu." ) \
	MDESC(c,   cimap_resp,  domain_language_set,            2,0,0,50081,      "Jazyk dom�ny �sp�n� nastaven." ) \
	MDESC(c,   cimap_resp,  mailbox_language_set,           2,0,0,50082,      "Jazyk mailboxu �sp�n� nastaven." ) \
	MDESC(c,   cimap_resp,  domain_aliases_with_transport,  2,0,0,50083,      "Dom�nov� aliasy s jejich transporty." ) \
	MDESC(c,   cimap_resp,  domain_stopped,                 2,0,0,50084,      "Dom�na byla �sp�n� zastavena." ) \
	MDESC(c,   cimap_resp,  domain_started,                 2,0,0,50085,      "Dom�na byla �sp�n� spu�t�na." ) \
	MDESC(c,   cimap_resp,  webmail_mailbox_flags,          2,0,0,50086,      "P��znaky mailboxu pro webmail." ) \
	MDESC(c,   cimap_resp,  mail_server_mailbox_counts,     2,0,0,50087,      "Po�ty mailbox� na po�tovn�ch serverech �sp�n� zji�t�ny.") \
	MDESC(c,   cimap_resp,  mailbox_quota_info,             2,0,0,50088,      "Informace o kv�t� a stavu prostoru mailboxu." ) \
	MDESC(c,   cimap_resp,  users_can_edit_mailbox_aliases_set, 2,0,0,50089,  "P��znak zda m��ou b�n� u�ivatele editovat sv� aliasy byl �sp�n� nastaven." ) \
	MDESC(c,   cimap_resp,  users_can_edit_mailbox_aliases_flag, 2,0,0,50090, "P��znak zda m��ou b�n� u�ivatel� editovat sv� aliasy." ) \
	MDESC(c,   cimap_resp,  mailbox_cloned,                 2,0,0,50091,      "Mailbox byl �sp�n� naklonov�n." ) \
	MDESC(c,   cimap_resp,  backend_request_done,           2,0,0,50092,      "Po�adavek na serveru skon�il �sp�n�.") \
	MDESC(c,   cimap_resp,  backend_request_queued,         2,0,0,50093,      "Po�adavek na vzd�len� server byl �sp�n� za�azen do fronty." ) \
	MDESC(c,   cimap_resp,  search_in_server_logs_done,     2,0,0,50094,      "Hled�n� v log souborech po�tovn�ch server� bylo �sp�n� dokon�eno." ) \
	MDESC(c,   cimap_resp,  domain_lists,                   2,0,0,50095,      "P�ehled seznam� dom�n." ) \
	MDESC(c,   cimap_resp,  slave_command_succeeded,        2,0,0,50096,      "Slave p��kaz byl �sp�n� dokon�en." ) \
	MDESC(c,   cimap_resp,  mailbox_quotawarn_settings,     2,0,0,50097,      "Nastaven� hl�dan� obsazen�ho prostoru dan�ho mailboxu." ) \
	MDESC(c,   cimap_resp,  mailbox_folders,                2,0,0,50098,      "Seznam slo�ek dan�ho mailboxu." ) \
	MDESC(c,   cimap_resp,  transports_to_server,           2,0,0,50099,      "Seznam transport� na dan� server." ) \
	MDESC(c,   cimap_resp,  mailbox_quota_reupdated,        2,0,0,50100,      "Diskov� kv�ta mailboxu na IMAP serveru byla �sp�n� p�eaktualizov�na.")  \
	MDESC(c,   cimap_resp,  broken_password_saved,          2,0,0,50101,      "Prolomen� heslo schr�nky bylo �sp�n� zanamen�no.")  \
	MDESC(c,   cimap_resp,  smtp_blocking_settings,         2,0,0,50102,      "Nastaven� blokov�n� SMTP schr�nky.")  \
	MDESC(c,   cimap_resp,  smtp_blocking_settings_set,     2,0,0,50103,      "Nastaven� blokov�n� SMTP schr�nky bylo �sp�n� zm�n�no.")  \
	MDESC(c,   cimap_resp,  broken_password_checked,        2,0,0,50104,      "Prolomen� hesla bylo prov��eno.")  \
	MDESC(c,   cimap_resp,  sender_forgery_forbidden_flag_set, 2,0,0,50105,   "P��znak z�kazu podvrh�v�n� dom�ny odes�latele byl �sp�n� zm�n�n.")  \
	MDESC(c,   cimap_resp,  spam_learned,                   2,0,0,50106,      "Spam byl za�azen k nau�en�.")  \
	\
	MDESC(c,   cimap_resp,  trash_autoclear_rule,           2,1,0,50001,      "Pravidlo automatick�ho maz�n� ko�e.") \
	MDESC(c,   cimap_resp,  trash_autoclear_rule_set,       2,1,0,50002,      "Nov� nastaven� pravidla automatick�ho maz�n� ko�e �sp�n� ulo�eno.") \
	MDESC(c,   cimap_resp,  bfu_antispam_level,             2,1,0,50003,      "Nastaven� antispamov� ochrany mailboxu.") \
	MDESC(c,   cimap_resp,  bfu_antispam_level_set,         2,1,0,50004,      "�rove� antispamov� ochrany mailboxu �sp�n� nastavena.") \
	MDESC(c,   cimap_resp,  folder_autoclear_rule,          2,1,0,50005,      "Pravidlo automatick�ho maz�n� slo�ky.") \
	MDESC(c,   cimap_resp,  folder_autoclear_rule_set,      2,1,0,50006,      "Nov� nastaven� pravidla automatick�ho maz�n� slo�ky �sp�n� ulo�eno.") \
	MDESC(c,   cimap_resp,  avelsieve_filters_copied,       2,1,0,50007,      "Filtra�n� pravidla byla �sp�n� p�ekop�rov�na.") \
	MDESC(c,   cimap_resp,  avelsieve_filters_merged,       2,1,0,50008,      "Filtra�n� pravidla byla �sp�n� slou�ena.") \
	MDESC(c,   cimap_resp,  mailbox_autoclear_done,         2,1,0,50009,      "Automatick� �i�t�n� mailbox� bylo �sp�n� dokon�eno.") \
	\
	MDESC(c,   cimap_resp,  batch_domain_backup_created,    2,2,0,50001,      "Z�loha struktury dom�ny byla �sp�n� provedena.") \
	\
	MDESC(c,   cimap_resp,  mailbox_folders_acls,           2,4,0,50001,      "Seznam slo�ek dan�ho mailboxu s jejich p��stupov�mi pr�vy." ) \
	MDESC(c,   cimap_resp,  mailbox_folder_acl,             2,4,0,50002,      "P��stupov� pr�va dan� slo�ky." ) \
	MDESC(c,   cimap_resp,  mailbox_folder_acl_set,         2,4,0,50003,      "P��stupov� pr�va slo�ky byla �sp�n� nastavena." ) \
	MDESC(c,   cimap_resp,  shared_mailbox_folder_subscribed_to_grantee, 2,4,0,50004, "U�ivatel byl �sp�n� p�ihl�en k odb�ru sd�len� slo�ky.") \
	MDESC(c,   cimap_resp,  shared_mailbox_folder_unsubscribed_from_grantee, 2,4,0,50005, "U�ivateli byl �sp�n� zru�en odb�r sd�len� slo�ky.") \
	\
	MDESC(c,   cimap_resp,  dkim_set,                       2,5,0,50001,      "Zm�na nastaven� DKIM byla provedena." ) \
	MDESC(c,   cimap_resp,  dkim_settings,                  2,5,0,50002,      "Aktu�ln� nastaven� DKIM dom�ny." ) \
	

#define CIMAP_MDESC_TABLE(c) \
	CIMAP_CMSM(c) \
	CIMAP_RESP(c) \
	GROUP_WHS(c, cimap_module_mdesc, cimap_cmsm, get_domain_mailbox_count) \
	GROUP_WHS(c, cimap_ext_module_mdesc, cimap_cmsm, set_mailbox_trash_autoclear) \
	GROUP_WHS(c, cimap_batch_module_mdesc, cimap_cmsm,  batch_create_domain_backup) \
	GROUP_WHS(c, cimap_acl_folders_module_mdesc, cimap_cmsm, set_mailbox_folder_acl) \
	GROUP_WHS(c, cimap_cdkim_module_mdesc, cimap_cmsm, set_dkim) \

// expand the declarations
CMS_NAMESPACE_START
CIMAP_MDESC_TABLE(DECL)
CMS_NAMESPACE_END


#endif //  __MOD_CIMAP_MDESCS
