#ifndef MOD_ZONERINVOICE_MDESCS
#define MOD_ZONERINVOICE_MDESCS

#include "mdescs.h"

// ZonerInvoice messages
#define ZINV_MDESCS(c) \
	MDESC(c, zinv_resp, unhandled_exception,        10,0,0,30000, "Neo�et�en� v�jimka v obsluze zpr�vy.") \
	MDESC(c, zinv_resp, unsupported_accountancy,    10,0,0,30001, "Nepodporovan� ��etnictv�.") \
	MDESC(c, zinv_resp, missing_accty,              10,0,0,30002, "Chyb� parametr 'accty'.") \
	MDESC(c, zinv_resp, invalid_accty,              10,0,0,30003, "Chybn� hodnota parametru 'accty'.") \
	MDESC(c, zinv_resp, invalid_internal_response,  10,0,0,30004, "Chybn� intern� odpov��.") \
	MDESC(c, zinv_resp, missing_ccy,                10,0,0,30005, "Chyb� parametr 'ccy'.") \
	MDESC(c, zinv_resp, invalid_ccy,                10,0,0,30006, "Chybn� hodnota parametru 'ccy'.") \
	MDESC(c, zinv_resp, missing_vs,                 10,0,0,30007, "Chyb� parametr 'vs'.") \
	MDESC(c, zinv_resp, invalid_vs,                 10,0,0,30008, "Chybn� hodnota parametru 'vs'.") \
	MDESC(c, zinv_resp, missing_amount,             10,0,0,30009, "Chyb� parametr 'amount'.") \
	MDESC(c, zinv_resp, invalid_amount,             10,0,0,30010, "Chybn� hodnota parametru 'amount'.") \
	MDESC(c, zinv_resp, accountancy_mismatch,       10,0,0,30011, "Nesouhlas� specifikace ��etnictv�.") \
	MDESC(c, zinv_resp, missing_paid_date,          10,0,0,30012, "Chyb� parametr 'paid_date'.") \
	MDESC(c, zinv_resp, invalid_paid_date,          10,0,0,30013, "Chybn� hodnota parametru 'paid_date'.") \
	MDESC(c, zinv_resp, missing_invoice_number,     10,0,0,30014, "Chyb� parametr 'invoice_number'.") \
	MDESC(c, zinv_resp, invalid_invoice_number,     10,0,0,30015, "Chybn� hodnota parametru 'invoice_number'.") \
	MDESC(c, zinv_resp, ccc_id_user_not_found,      10,0,0,30016, "Ccc ��et s dan�m ccc_id_user nenalezen.") \
	MDESC(c, zinv_resp, ccc_pbu_mismatch,           10,0,0,30017, "Ccc nesouhlas� pobo�ky.") \
	MDESC(c, zinv_resp, ccc_unknown_pbu,            10,0,0,30018, "Nezn�m� pobo�ka.") \
	MDESC(c, zinv_resp, unknown_localization,       10,0,0,30019, "Nezn�m� lokalizace.") \
	MDESC(c, zinv_resp, isdoc_unsupported,          10,0,0,30020, "Form�t IsDoc nen� podporovan�.") \
	MDESC(c, zinv_resp, unimplemented,              10,0,0,30021, "Neimplementovan� fukcionalita!!") \
	MDESC(c, zinv_resp, missing_ccc_id_user,        10,0,0,30022, "Chyb� parametr 'ccc_id_user'.") \
	MDESC(c, zinv_resp, invalid_ccc_id_user,        10,0,0,30023, "Chybn� hodnota parametru 'ccc_id_user'.") \
	MDESC(c, zinv_resp, missing_domain_name,        10,0,0,30024, "Chyb� parametr 'domain_name'.") \
	MDESC(c, zinv_resp, invalid_domain_name,        10,0,0,30025, "Chybn� hodnota parametru 'domain_name'.") \
	MDESC(c, zinv_resp, missing_ccc_pkid,           10,0,0,30026, "Chyb� parametr 'ccc_pkid'.") \
	MDESC(c, zinv_resp, invalid_ccc_pkid,           10,0,0,30027, "Chybn� hodnota parametru 'ccc_pkid'.") \
	MDESC(c, zinv_resp, missing_vat_rate,           10,0,0,30028, "Chyb� parametr 'vat_rate'.") \
	MDESC(c, zinv_resp, invalid_vat_rate,           10,0,0,30029, "Chybn� hodnota parametru 'vat_rate'.") \
	MDESC(c, zinv_resp, ccc_package_not_found,      10,0,0,30030, "Ccc bal��ek s dan�m 'ccc_pkid' neexistuje.") \
	MDESC(c, zinv_resp, missing_payment_way,        10,0,0,30031, "Chyb� parametr 'vat_rate'.") \
	MDESC(c, zinv_resp, invalid_payment_way,        10,0,0,30032, "Chybn� hodnota parametru 'vat_rate'.") \
	MDESC(c, zinv_resp, no_suitable_invoice_series, 10,0,0,30033, "Nenalezena ��dn� vhodn� ��seln� �ada." ) \
	MDESC(c, zinv_resp, missing_price_vat_type,     10,0,0,30034, "Chyb� parametr 'price_vat_type'.") \
	MDESC(c, zinv_resp, invalid_price_vat_type,     10,0,0,30035, "Chybn� hodnota parametru 'price_vat_type'.") \
	MDESC(c, zinv_resp, database_transaction_error, 10,0,0,30036, "Chyba p�i vykon�v�n� datab�zov� transakce.") \
	MDESC(c, zinv_resp, invalid_tax_date,           10,0,0,30037, "Chybn� hodnota parametru 'tax_date'.") \
	MDESC(c, zinv_resp, missing_tax_date,           10,0,0,30038, "Chyb� parametr 'tax_date'.") \
	MDESC(c, zinv_resp, missing_base_amount,        10,0,0,30039, "Chyb� parametr 'base_amount'.") \
	MDESC(c, zinv_resp, invalid_base_amount,        10,0,0,30040, "Chybn� hodnota parametru 'base_amount'.") \
	MDESC(c, zinv_resp, missing_full_amount,        10,0,0,30041, "Chyb� parametr 'full_amount'.") \
	MDESC(c, zinv_resp, invalid_full_amount,        10,0,0,30042, "Chybn� hodnota parametru 'full_amount'.") \
	MDESC(c, zinv_resp, missing_pbu,                10,0,0,30043, "Chyb� parametr 'pbu'.") \
	MDESC(c, zinv_resp, invalid_pbu,                10,0,0,30044, "Chybn� hodnota parametru 'pbu'.") \
	MDESC(c, zinv_resp, invalid_last_n,             10,0,0,30045, "Chybn� hodnota parametru 'last_n'.") \
	MDESC(c, zinv_resp, invalid_override_base_amount, 10,0,0,30046, "Chybn� hodnota parametru 'override_base_amount'.") \
	MDESC(c, zinv_resp, no_matching_accounting_year, 10,0,0,30047, "��dn� odpov�daj�c� ��etn� rok nenalezen.") \
	MDESC(c, zinv_resp, missing_do_not_send,        10,0,0,30048, "Chyb� parametr 'do_not_send'.") \
	MDESC(c, zinv_resp, invalid_do_not_send,        10,0,0,30049, "Chybn� hodnota parametru 'do_not_send'.") \
	MDESC(c, zinv_resp, missing_payment_reason_note,10,0,0,30050, "Chyb� parametr 'payment_reason_note'.") \
	MDESC(c, zinv_resp, invalid_payment_reason_note,10,0,0,30051, "Chybn� hodnota parametru 'payment_reason_note'.") \
	MDESC(c, zinv_resp, devel_assert_failed,        10,0,0,30052, "Kontrola devel invariantu selhala!!!") \

// ZonerInvoice authentication messages
#define AUTH_MDESCS(c) \
	MDESC2(c, ziauth_cmsm, login,                     10,1,0,1, "P�ihl�en� k syst�mu fakturace.",  "P�ihl�en� k syst�mu fakturace selhalo.") \
	MDESC2(c, ziauth_cmsm, logout,                    10,1,0,2, "Odhl�en� od syst�mu fakturace.",  "Odhl�en� od syst�mu fakturace selhalo.") \
\
	MDESC(c, ziauth_resp, access_denied,              10,1,0,30001, "P��stup k syst�mu fakturace odep�en.") \
	MDESC(c, ziauth_resp, login_failed,               10,1,0,30002, "P�ihl�en� k syst�mu fakturace se nepoda�ilo.") \
	MDESC(c, ziauth_resp, logout_failed,              10,1,0,30003, "Odhl�en� od syst�mu fakturace se nepoda�ilo.") \
	MDESC(c, ziauth_resp, bad_credentials,            10,1,0,30004, "P�ihla�ovac� �daje byly odm�tnuty.") \
	MDESC(c, ziauth_resp, missing_user,               10,1,0,30005, "Chyb� parametr 'user'.") \
	MDESC(c, ziauth_resp, invalid_user,               10,1,0,30006, "Chybn� hodnota parametru 'user'.") \
	MDESC(c, ziauth_resp, missing_auth_source,        10,1,0,30007, "Chyb� parametr 'auth_source'.") \
	MDESC(c, ziauth_resp, invalid_auth_source,        10,1,0,30008, "Chybn� hodnota parametru 'auth_source'.") \
	MDESC(c, ziauth_resp, missing_auth_type,          10,1,0,30009, "Chyb� parametr 'auth_type'.") \
	MDESC(c, ziauth_resp, invalid_auth_type,          10,1,0,30010, "Chybn� hodnota parametru 'auth_type'.") \
\
	MDESC(c, ziauth_resp, login_succeeded,            10,1,0,50001, "P�ihl�en� k syst�mu fakturace skon�ilo �sp�n�.") \
	MDESC(c, ziauth_resp, logout_succeeded,           10,1,0,50002, "Odhl�en� od syst�mu fakturace skon�ilo �sp�n�.") \


// ZonerInvoice electronic invoice messages
#define ELINV_MDESCS(c) \
	MDESC2(c, elinv_cmsm, get_customer_invoices_list, 10,4,0,1, "Vrac� seznam elektronick�ch faktur dan�ho z�kazn�ka.",  "Nelze vr�tit seznam elektronick�ch faktur z�kazn�ka.") \
	MDESC2(c, elinv_cmsm, send_invoice,               10,4,0,2, "Ode�le elektronickou fakturu z�kazn�kovi.",  "Nelze odeslat elektronickou fakturu.") \
	MDESC2(c, elinv_cmsm, get_invoice_money_data,     10,4,0,3, "Vrac� bin�rn� reprezentaci faktury po na�ten� z Money.",  "Nelze vr�tit bin�rn� reprezentaci faktury z Money.") \
	MDESC2(c, elinv_cmsm, get_invoice,                10,4,0,4, "Vrac� elektronickou fakturu.",  "Nelze vr�tit po�adovanou elektronickou fakturu.") \
	MDESC2(c, elinv_cmsm, get_preview,                10,4,0,5, "Vrac� n�hled elektronick� faktury.",  "Nelze vytvo�it n�hled elektronick� faktury.") \
	MDESC2(c, elinv_cmsm, get_invoices_by_number,     10,4,0,6, "Vrac� informace o dan� elektronick� faktu�e.",  "Nelze zjistit informace o dan� elektronick� faktu�e.") \
	MDESC2(c, elinv_cmsm, fix_isdoc,                  10,4,0,7, "Oprava chybn�ho form�tu IsDoc.",  "Nelze opravit chybn� form�t IsDoc.") \
	MDESC2(c, elinv_cmsm, send_archived_invoices,     10,4,0,8, "Ode�le archivovan� elektronick� faktury z dan�ho obdob�.",  "Nelze odeslat archivovan� elektronick� faktury.") \
	MDESC2(c, elinv_cmsm, block_electronic_invoice,   10,4,0,9, "Zablokuje/odblokuje mo�nost odesl�n� elektronick� faktury.",  "Nelze zablokovat/odblokovat mo�nost odesl�n� el. faktury.") \
	MDESC2(c, elinv_cmsm, set_email,                  10,4,0,10, "Nastav� email na kter� se odes�l� elektronick� faktura.",  "Nelze nastavit email.") \
	MDESC2(c, elinv_cmsm, insert_electronic_invoice,  10,4,0,11, "Vlo�� do evidence novou elektronickou fakturu.",  "Nelze vlo�it novou elektronickou fakturu.") \
	MDESC2(c, elinv_cmsm, get_ccc_customer,           10,4,0,12, "Vrac� informace o z�kazn�kovi v Centru.",  "Nelze vr�tit informace o z�kazn�kovi v Centru.") \
	MDESC2(c, elinv_cmsm, get_electronic_invoice_history, 10,4,0,13, "Vrac� historii elektronick� faktury.",  "Nelze vr�tit historii elektornick� faktury.") \
\
	MDESC(c, elinv_resp, unhandled_exception,          10,4,0,30000, "Neo�et�en� v�jimka v modulu elektronick�ch faktur.") \
	MDESC(c, elinv_resp, missing_id_user,              10,4,0,30001, "Chyb� parametr 'id_user'.") \
	MDESC(c, elinv_resp, invalid_id_user,              10,4,0,30002, "Chybn� hodnota parametru 'id_user'.") \
	MDESC(c, elinv_resp, database_error,               10,4,0,30003, "Chyba p�i p��stupu k datab�zi.") \
	MDESC(c, elinv_resp, generate_permission_required, 10,4,0,30004, "Je nutn� opr�vn�n� ke generov�n� elektronick�ch faktur.") \
	MDESC(c, elinv_resp, invoice_request_not_found,    10,4,0,30005, "Po�adavek na elektronickou fakturu nenalezen.") \
	MDESC(c, elinv_resp, invoice_request_blocked,      10,4,0,30006, "Elektronick� faktura je blokov�na.") \
	MDESC(c, elinv_resp, invoice_not_generated_yet,    10,4,0,30007, "Elektronick� faktura dosud nebyla vygenerov�na.") \
	MDESC(c, elinv_resp, invoice_generate_error,       10,4,0,30008, "Do�lo k chyb� p�i generov�n� elektronick� faktury.") \
	MDESC(c, elinv_resp, invoice_generate_exception,   10,4,0,30009, "Do�lo k v�jimce p�i generov�n� elektronick� faktury.") \
	MDESC(c, elinv_resp, invoice_send_error,           10,4,0,30010, "Do�lo k chyb� p�i odes�l�n� elektronick� faktury.") \
	MDESC(c, elinv_resp, invoice_send_exception,       10,4,0,30011, "Do�lo k v�jimce p�i odes�l�n� elektronick� faktury.") \
	MDESC(c, elinv_resp, missing_eiid,                 10,4,0,30012, "Chyb� parametr 'eiid'.") \
	MDESC(c, elinv_resp, invalid_eiid,                 10,4,0,30013, "Chybn� hodnota parametru 'eiid'.") \
	MDESC(c, elinv_resp, missing_generate_if_not_gen,  10,4,0,30014, "Chyb� parametr 'generate_if_not_gen'.") \
	MDESC(c, elinv_resp, invalid_generate_if_not_gen,  10,4,0,30015, "Chybn� hodnota parametru 'generate_if_not_gen'.") \
	MDESC(c, elinv_resp, missing_regenerate,           10,4,0,30016, "Chyb� parametr 'regenerate'.") \
	MDESC(c, elinv_resp, invalid_regenerate,           10,4,0,30017, "Chybn� hodnota parametru 'regenerate'.") \
	MDESC(c, elinv_resp, missing_accty,                10,4,0,30018, "Chyb� parametr 'accty'.") \
	MDESC(c, elinv_resp, invalid_accty,                10,4,0,30019, "Chybn� hodnota parametru 'accty'.") \
	MDESC(c, elinv_resp, missing_form_type,            10,4,0,30020, "Chyb� parametr 'form_type'.") \
	MDESC(c, elinv_resp, invalid_form_type,            10,4,0,30021, "Chybn� hodnota parametru 'form_type'.") \
	MDESC(c, elinv_resp, get_money_data_failed,        10,4,0,30022, "Chyba p�i �ten� dat faktury z Money.") \
	MDESC(c, elinv_resp, money_data_permission_required, 10,4,0,30023, "Je nutn� opr�vn�n� k p��m�mu z�sk�v�n� dat z Money.") \
	MDESC(c, elinv_resp, missing_invoice_number,       10,4,0,30024, "Chyb� parametr 'invoice_number'.") \
	MDESC(c, elinv_resp, invalid_invoice_number,       10,4,0,30025, "Chybn� hodnota parametru 'invoice_number'.") \
	MDESC(c, elinv_resp, missing_sign,                 10,4,0,30026, "Chyb� parametr 'sign'.") \
	MDESC(c, elinv_resp, invalid_sign,                 10,4,0,30027, "Chybn� hodnota parametru 'sign'.") \
	MDESC(c, elinv_resp, missing_locale,               10,4,0,30028, "Chyb� parametr 'locale'.") \
	MDESC(c, elinv_resp, invalid_locale,               10,4,0,30029, "Chybn� hodnota parametru 'locale'.") \
	MDESC(c, elinv_resp, missing_pbu,                  10,4,0,30030, "Chyb� parametr 'pbu'.") \
	MDESC(c, elinv_resp, invalid_pbu,                  10,4,0,30031, "Chybn� hodnota parametru 'pbu'.") \
	MDESC(c, elinv_resp, ambiguous_invoice_request,    10,4,0,30032, "Nejednozna�n� po�adavek na elektronickou fakturaci." ) \
	MDESC(c, elinv_resp, cannot_pack_invoices,         10,4,0,30033, "Chyba p�i komprimov�n� elektronick�ch faktur." ) \
	MDESC(c, elinv_resp, missing_begin_date,           10,4,0,30034, "Chyb� parametr 'begin_date'.") \
	MDESC(c, elinv_resp, invalid_begin_date,           10,4,0,30035, "Chybn� hodnota parametru 'begin_date'.") \
	MDESC(c, elinv_resp, missing_end_date,             10,4,0,30036, "Chyb� parametr 'end_date'.") \
	MDESC(c, elinv_resp, invalid_end_date,             10,4,0,30037, "Chybn� hodnota parametru 'end_date'.") \
	MDESC(c, elinv_resp, missing_include_isdocs,       10,4,0,30038, "Chyb� parametr 'include_isdocs'.") \
	MDESC(c, elinv_resp, invalid_include_isdocs,       10,4,0,30039, "Chybn� hodnota parametru 'include_isdocs'.") \
	MDESC(c, elinv_resp, missing_max_archive_size_mb,  10,4,0,30040, "Chyb� parametr 'max_archive_size_mb'.") \
	MDESC(c, elinv_resp, invalid_max_archive_size_mb,  10,4,0,30041, "Chybn� hodnota parametru 'max_archive_size_mb'.") \
	MDESC(c, elinv_resp, archive_too_large,            10,4,0,30042, "Archiv s da�ov�mi doklady je p��li� velk�.") \
	MDESC(c, elinv_resp, no_archived_invoices,         10,4,0,30043, "��dn� odpov�daj�c� archivn� da�ov� doklady nebyly nalezeny.") \
	MDESC(c, elinv_resp, missing_send_no_invoices,     10,4,0,30044, "Chyb� parametr 'send_no_invoices'.") \
	MDESC(c, elinv_resp, invalid_send_no_invoices,     10,4,0,30045, "Chybn� hodnota parametru 'send_no_invoices'.") \
	MDESC(c, elinv_resp, invalid_override_email,       10,4,0,30046, "Chybn� hodnota parametru 'override_email'.") \
	MDESC(c, elinv_resp, isdoc_not_available,          10,4,0,30047, "Faktura nen� k dispozici ve form�tu IsDoc.") \
	MDESC(c, elinv_resp, missing_block,                10,4,0,30048, "Chyb� parametr 'block'.") \
	MDESC(c, elinv_resp, invalid_block,                10,4,0,30049, "Chybn� hodnota parametru 'block'.") \
	MDESC(c, elinv_resp, missing_reason,               10,4,0,30050, "Chyb� parametr 'reason'.") \
	MDESC(c, elinv_resp, invalid_reason,               10,4,0,30051, "Chybn� hodnota parametru 'reason'.") \
	MDESC(c, elinv_resp, missing_email,                10,4,0,30052, "Chyb� parametr 'email'.") \
	MDESC(c, elinv_resp, invalid_email,                10,4,0,30053, "Chybn� hodnota parametru 'email'.") \
	MDESC(c, elinv_resp, missing_sign_email,           10,4,0,30054, "Chyb� parametr 'sign_email'.") \
	MDESC(c, elinv_resp, invalid_sign_email,           10,4,0,30055, "Chybn� hodnota parametru 'sign_email'.") \
	MDESC(c, elinv_resp, missing_send_isdoc,           10,4,0,30056, "Chyb� parametr 'send_isdoc'.") \
	MDESC(c, elinv_resp, invalid_send_isdoc,           10,4,0,30057, "Chybn� hodnota parametru 'send_isdoc'.") \
	MDESC(c, elinv_resp, missing_vs,                   10,4,0,30058, "Chyb� parametr 'vs'.") \
	MDESC(c, elinv_resp, invalid_vs,                   10,4,0,30059, "Chybn� hodnota parametru 'vs'.") \
	MDESC(c, elinv_resp, missing_content_category,     10,4,0,30060, "Chyb� parametr 'content_category'.") \
	MDESC(c, elinv_resp, invalid_content_category,     10,4,0,30061, "Chybn� hodnota parametru 'content_category'.") \
	MDESC(c, elinv_resp, missing_extern_attachments,   10,4,0,30062, "Chyb� parametr 'extern_attachments'.") \
	MDESC(c, elinv_resp, invalid_extern_attachments,   10,4,0,30063, "Chybn� hodnota parametru 'extern_attachments'.") \
\
	MDESC(c, elinv_resp, customer_invoices_list,      10,4,0,50001, "Seznam elektronick�ch faktur dan�ho z�kazn�ka.") \
	MDESC(c, elinv_resp, invoice_sent,                10,4,0,50002, "Faktura byla �sp�n� odesl�na.") \
	MDESC(c, elinv_resp, invoice_money_data,          10,4,0,50003, "Data faktury z Money.") \
	MDESC(c, elinv_resp, invoice,                     10,4,0,50004, "Elektronick� faktura.") \
	MDESC(c, elinv_resp, invoice_preview,             10,4,0,50005, "N�hled elektronick� faktury.") \
	MDESC(c, elinv_resp, invoices_by_number,          10,4,0,50006, "Elektronick� faktury podle ��sla.") \
	MDESC(c, elinv_resp, isdoc_fixed,                 10,4,0,50007, "IsDoc form�t byl �sp�n� opraven.") \
	MDESC(c, elinv_resp, archived_invoices_sent,      10,4,0,50008, "Archivovan� elektronick� faktury �sp�n� odesl�ny.") \
	MDESC(c, elinv_resp, invoice_block_flag_set,      10,4,0,50009, "P��znak zablokov�n� faktury byl �sp�n� nastaven.") \
	MDESC(c, elinv_resp, email_set,                   10,4,0,50010, "Email faktury byl �sp�n� nastaven.") \
	MDESC(c, elinv_resp, electronic_invoice_inserted, 10,4,0,50011, "Nov� elektronick� faktura byla �sp�n� vlo�ena.") \
	MDESC(c, elinv_resp, ccc_customer,                10,4,0,50012, "�daje z�kazn�ka z Centra.") \
	MDESC(c, elinv_resp, electronic_invoice_history,  10,4,0,50013, "Historie elektronick� faktury.") \

// ZonerInvoice electronic request-for-payment messages
#define RFPI_MDESCS(c) \
	MDESC2(c, rfpi_cmsm, send_rfp,                    10,5,0,1, "Ode�le v�zvu k �hrad� z�kazn�kovi.",  "Nelze odeslat v�zvu k �hrad�.") \
	MDESC2(c, rfpi_cmsm, get_rfp,                     10,5,0,2, "Vrac� bin�rn� data v�zvy k �hrad�.",  "Nelze vr�tit v�zvu k �hrad�.") \
	MDESC2(c, rfpi_cmsm, get_hotline_failed_requests_list, 10,5,0,3, "Vrac� seznam faktura�n�ch po�adavk� kter� selhaly, ty kter� m��e �e�it hotline.", "Nelze vr�tit seznam faktura�n�ch po�adavk�, kter� selhaly.") \
	MDESC2(c, rfpi_cmsm, fix_hotline_failed_request,  10,5,0,4, "Provede opravu faktura�n�ho po�adavku, kter� selhal.", "Nelze prov�st opravu faktura�n�ho po�adavku, kter� selhal.") \
	MDESC2(c, rfpi_cmsm, render_einvoice_html_rfp,    10,5,0,5, "Generuje HTML v�zvu k �hrad� pro EInvoice.",  "Nelze vygenerovat v�zvu k �hrad�.") \
	MDESC2(c, rfpi_cmsm, send_einvoice_html_rfp,      10,5,0,6, "Ode�le HTML v�zvu k �hrad� pro EInvoice.",  "Nelze odeslat v�zvu k �hrad�.") \
	MDESC2(c, rfpi_cmsm, adjust_appeals_after_stopped_service_start, 10,5,0,7, "Uprav� data upom�nek po spu�t�n� slu�by, kter� byla zastavena pro neplacen�.", "Nelze prov�st �pravu dat upom�nek.") \
	MDESC2(c, rfpi_cmsm, adjust_next_appeal,          10,5,0,8, "Posune datum p��t� upom�nky v�zvy k �hrad�.", "Nelze prov�st �pravu dat upom�nek.") \
	MDESC2(c, rfpi_cmsm, render_einvoice_pdf_rfp,     10,5,0,9, "Generuje PDF v�zvu k �hrad� pro EInvoice.",  "Nelze vygenerovat v�zvu k �hrad�.") \
	\
	MDESC(c, rfpi_resp, missing_accty,                10,5,0,30001, "Chyb� parametr 'accty'.") \
	MDESC(c, rfpi_resp, invalid_accty,                10,5,0,30002, "Chybn� hodnota parametru 'accty'.") \
	MDESC(c, rfpi_resp, rfp_not_found,                10,5,0,30003, "V�zva k �hrad� nenalezena.") \
	MDESC(c, rfpi_resp, accty_mismatch,               10,5,0,30004, "Nesouhlas� ��etnictv� v�zvy k �hrad�.") \
	MDESC(c, rfpi_resp, invalid_invoice_series,       10,5,0,30005, "Chybn� nebo neexistuj�c� ��seln� �ada v�zvy k �hrad�.") \
	MDESC(c, rfpi_resp, rfp_file_not_found,           10,5,0,30006, "Soubor s v�zvou k �hrad� nenalezen.") \
	MDESC(c, rfpi_resp, cannot_read_rfp_file,         10,5,0,30007, "Chyba p�i �ten� souboru s v�zvou k �hrad�.") \
	MDESC(c, rfpi_resp, missing_fix,                  10,5,0,30008, "Chyb� parametr 'fix'.") \
	MDESC(c, rfpi_resp, invalid_fix,                  10,5,0,30009, "Chybn� hodnota parametru 'fix'.") \
	MDESC(c, rfpi_resp, failed_request_not_found,     10,5,0,30010, "Faktura�n� po�adavek nenalezen." ) \
	MDESC(c, rfpi_resp, unmatched_failed_request_fix, 10,5,0,30011, "Oprava faktura�n�ho po�adavku neodpov�d� ��dn� z mo�nost�." ) \
	MDESC(c, rfpi_resp, failed_request_in_unsupported_status, 10,5,0,30012, "Faktura�n� po�adavek nen� ve stavu, kdy by mohl b�t opraven." ) \
	MDESC(c, rfpi_resp, missing_id_beinvoice,         10,5,0,30013, "Chyb� parametr 'id_beinvoice'.") \
	MDESC(c, rfpi_resp, invalid_id_beinvoice,         10,5,0,30014, "Chybn� hodnota parametru 'id_beinvoice'.") \
	MDESC(c, rfpi_resp, missing_pbu,                  10,5,0,30015, "Chyb� parametr 'pbu'.") \
	MDESC(c, rfpi_resp, invalid_pbu,                  10,5,0,30016, "Chybn� hodnota parametru 'pbu'.") \
	MDESC(c, rfpi_resp, missing_locale,               10,5,0,30017, "Chyb� parametr 'locale'.") \
	MDESC(c, rfpi_resp, invalid_locale,               10,5,0,30018, "Chybn� hodnota parametru 'locale'.") \
	MDESC(c, rfpi_resp, missing_rfp_field,            10,5,0,30019, "Chyb� povinn� parametr specifikuj�c� pole v�zvy k �hrad�.") \
	MDESC(c, rfpi_resp, invalid_rfp_field,            10,5,0,30020, "Chybn� hodnota parametru specifikuj�c�ho pole v�zvy k �hrad�.") \
	MDESC(c, rfpi_resp, missing_binary_data,          10,5,0,30021, "Chyb� bin�rn� data.") \
	MDESC(c, rfpi_resp, missing_registers_domain,     10,5,0,30022, "Chyb� parametr 'registers_domain'.") \
	MDESC(c, rfpi_resp, invalid_registers_domain,     10,5,0,30023, "Chybn� hodnota parametru 'registers_domain'.") \
	MDESC(c, rfpi_resp, missing_renews_domain,        10,5,0,30024, "Chyb� parametr 'renews_domain'.") \
	MDESC(c, rfpi_resp, invalid_renews_domain,        10,5,0,30025, "Chybn� hodnota parametru 'renews_domain'.") \
	MDESC(c, rfpi_resp, missing_sign_email,           10,5,0,30026, "Chyb� parametr 'sign_email'.") \
	MDESC(c, rfpi_resp, invalid_sign_email,           10,5,0,30027, "Chybn� hodnota parametru 'sign_email'.") \
	MDESC(c, rfpi_resp, missing_rfp_template_family,  10,5,0,30028, "Chyb� parametr 'rfp_template_family'.") \
	MDESC(c, rfpi_resp, invalid_rfp_template_family,  10,5,0,30029, "Chybn� hodnota parametru 'rfp_template_family'.") \
	MDESC(c, rfpi_resp, missing_to_email,             10,5,0,30030, "Chyb� parametr 'to_email'.") \
	MDESC(c, rfpi_resp, invalid_to_email,             10,5,0,30031, "Chybn� hodnota parametru 'to_email'.") \
	MDESC(c, rfpi_resp, missing_bank_fee_warning,     10,5,0,30032, "Chyb� parametr 'bank_fee_warning'.") \
	MDESC(c, rfpi_resp, invalid_bank_fee_warning,     10,5,0,30033, "Chybn� hodnota parametru 'bank_fee_warning'.") \
	MDESC(c, rfpi_resp, cannot_adjust_appeals,        10,5,0,30034, "Nelze upravit data upom�nek v�zvy.") \
	MDESC(c, rfpi_resp, missing_invoice_number,       10,5,0,30035, "Chyb� parametr 'invoice_number'.") \
	MDESC(c, rfpi_resp, invalid_invoice_number,       10,5,0,30036, "Chybn� hodnota parametru 'invoice_number'.") \
	MDESC(c, rfpi_resp, missing_appeal_date,          10,5,0,30037, "Chyb� parametr 'appeal_date'.") \
	MDESC(c, rfpi_resp, invalid_appeal_date,          10,5,0,30038, "Chybn� hodnota parametru 'appeal_date'.") \
	MDESC(c, rfpi_resp, appeal_date_too_low,          10,5,0,30039, "P��li� n�zk� datum p��t� upom�nky.") \
	MDESC(c, rfpi_resp, appeal_date_too_high,         10,5,0,30040, "P��li� vysok� datum p��t� upom�nky.") \
	MDESC(c, rfpi_resp, invalid_override_email,       10,5,0,30041, "Chybn� hodnota parametru 'override_email'.") \
	\
	MDESC(c, rfpi_resp, electronic_rfpi_send_queued,  10,5,0,50001, "Odesl�n� v�zvy k �hrad� bylo �sp�n� za�azeno do fronty po�adavk�.") \
	MDESC(c, rfpi_resp, rfp_data,                     10,5,0,50002, "Data dan� v�zvy k �hrad�.") \
	MDESC(c, rfpi_resp, failed_requests_list,         10,5,0,50003, "Seznam faktura�n�ch po�adavk�, kter� selhaly." ) \
	MDESC(c, rfpi_resp, failed_request_fix_done,      10,5,0,50004, "Faktura�n� po�adavek byl opraven." ) \
	MDESC(c, rfpi_resp, einvoice_html_rfp_rendered,   10,5,0,50005, "HTML v�zva k �hrad� byla �sp�n� vygenerov�na." ) \
	MDESC(c, rfpi_resp, einvoice_html_rfp_sent,       10,5,0,50006, "HTML v�zva k �hrad� byla �sp�n� odesl�na.") \
	MDESC(c, rfpi_resp, appeals_adjusted,             10,5,0,50007, "Data upom�nek v�zvy k �hrad� byly �sp�n� upraveny.") \
	MDESC(c, rfpi_resp, einvoice_pdf_rfp_rendered,    10,5,0,50008, "PDF v�zva k �hrad� byla �sp�n� vygenerov�na." ) \


// ZonerInvoice partner invoices messages
#define INVPART_MDESCS(c) \
	MDESC2(c, invp_cmsm, get_partner_invoices,        10,6,0,1, "Vrac� seznam partnersk�ch faktur z ��etnictv�.", "Nelze vr�tit seznam partnersk�ch faktur z ��etnictv�.") \
	\
	MDESC(c, invp_resp, unhandled_exception,          10,6,0,30000, "Neo�et�en� v�jimka v modulu partnersk�ch faktur.") \
	MDESC(c, invp_resp, invalid_invoice_series,       10,6,0,30001, "Chybn� nebo neexistuj�c� ��seln� �ada faktury.") \
	MDESC(c, invp_resp, end_invoice_out_of_range,     10,6,0,30002, "Hodnota parametru 'end_invoice_number' je mimo platn� rozsah ��seln� �ady." ) \
	MDESC(c, invp_resp, missing_begin_invoice_number, 10,6,0,30003, "Chyb� parametr 'begin_invoice_number'.") \
	MDESC(c, invp_resp, invalid_begin_invoice_number, 10,6,0,30004, "Chybn� hodnota parametru 'begin_invoice_number'.") \
	MDESC(c, invp_resp, missing_end_invoice_number,   10,6,0,30005, "Chyb� parametr 'end_invoice_number'.") \
	MDESC(c, invp_resp, invalid_end_invoice_number,   10,6,0,30006, "Chybn� hodnota parametru 'end_invoice_number'.") \
	\
	MDESC(c, invp_resp, partner_invoices,             10,6,0,50001, "Seznam partnersk�ch faktur z ��etnictv�.") \

// ZonerInvoice credit unit messages
#define ZICREDIT_MDESCS(c) \
	MDESC2(c, cred_cmsm, deposit_by_permanent_vs,     10,7,0,1,     "Vlo�� ��stku na kreditn� ��et p�es permanentn� variabiln� symbol.", "Nelze vlo�it ��stku p�es permanentn� variabiln� symbol.") \
	MDESC2(c, cred_cmsm, withdraw_immediate,          10,7,0,2,     "Provede jednor�zov� �erp�n� ��stky.", "Nelze prov�st jednor�zov� �erp�n� ��stky.") \
	MDESC2(c, cred_cmsm, withdraw_start,              10,7,0,3,     "Zah�j� �erp�n� ��stky.", "Nelze zah�jit �erp�n� ��stky.") \
	MDESC2(c, cred_cmsm, withdraw_cancel,             10,7,0,4,     "Zru�� �erp�n� ��stky.", "Nelze zru�it �erp�n� ��stky.") \
	MDESC2(c, cred_cmsm, withdraw_finish,             10,7,0,5,     "Potvrd� �erp�n� ��stky.", "Nelze potvrdit �erp�n� ��stky.") \
	MDESC2(c, cred_cmsm, get_credit_account_info,     10,7,0,6,     "Vrac� informace o kreditn�m ��tu.", "Chyba p�i zji��ov�n� informac� o kreditn�m ��tu.") \
	MDESC2(c, cred_cmsm, has_credit_for_withdraw,     10,7,0,7,     "Vrac� informaci zda je na kreditn�m ��tu dostate�n� ��stka pro dan� �erp�n�.", "Chyba p�i zji��ov�n� dostupnosti �erp�n� ��stky z kreditn�ho ��tu.") \
	MDESC2(c, cred_cmsm, precredit,                   10,7,0,8,     "Vlo�� ��stku na kreditn� ��et kter� bude teprve v budoucnu uhrazena.", "Nelze vlo�it ��stku na kreditn� ��et.") \
	MDESC2(c, cred_cmsm, add_bonus,                   10,7,0,9,     "Vlo�� bonusov� kredity na kreditn� ��et.", "Nelze vlo�it bonusov� kredity na kreditn� ��et.") \
	MDESC2(c, cred_cmsm, expose_deposit_tax_invoice,  10,7,0,10,    "Vystav� da�ov� doklad na ��stku vlo�enou na kreditn� ��et.", "Nelze vystavit da�ov� doklad na vlo�enou ��stku.") \
	MDESC2(c, cred_cmsm, expose_clearing_invoice,     10,7,0,11,    "Vystav� vy��tovac� da�ov� doklad na nevy��tovan� pohyby za dan� obdob�.", "Nelze vystavit vy��tovac� da�ov� doklad.") \
	MDESC2(c, cred_cmsm, get_clearing_report_pdf,     10,7,0,12,    "Vrac� souhrn vy��tovan�ch slu�eb dan�ho vy��tovac�ho dokladu.", "Nelze vr�tit souhrn vy��tovan�ch slu�eb dan�ho vy��tovac�ho dokladu.") \
	MDESC2(c, cred_cmsm, deposit_by_rfp_vs,           10,7,0,13,    "Vlo�� ��stku na kreditn� ��et p�es jednor�zov� variabiln� symbol.", "Nelze vlo�it ��stku p�es jednor�zov� variabiln� symbol.") \
	MDESC2(c, cred_cmsm, get_credit_account_movements, 10,7,0,14,   "Vrac� seznam pohyb� na dan�m kreditn�m ��tu.", "Nelze vr�tit seznam pohyb� na dan�m kreditn�m ��tu.") \
	MDESC2(c, cred_cmsm, get_credit_accounts_for_clearing, 10,7,0,15, "Vrac� kreditn� ��ty kter� maj� nevy��tovan� pohyby za dan� obdob�.", "Nelze vr�tit kreditn� ��ty s nevy��tovan�mi pohyby.") \
	MDESC2(c, cred_cmsm, update_clearing_report,      10,7,0,16,    "P�egeneruje report pohyb� dan�ho vy��tovac�ho da�ov�ho dokladu.", "Nelze p�egenerovat report vy��tovan�ch pohyb�.") \
	MDESC2(c, cred_cmsm, set_lowcredit_warning_email, 10,7,0,17,    "Nastav� email pro upozor�ov�n� na nedostatek kredit�.", "Nelze nastavit email pro upozor�ov�n� na nedostatek kredit�.") \
	MDESC2(c, cred_cmsm, set_lowcredit_warning_sms,   10,7,0,18,    "Nastav� ��slo mobilu pro upozor�ov�n� na nedostatek kredit�.", "Nelze nastavit ��slo mobilu pro upozor�ov�n� na nedostatek kredit�.") \
	MDESC2(c, cred_cmsm, get_lowcredit_warning_levels,10,7,0,19,    "Vrac� seznam hladin upozor�ov�n� na nedostatek kredit�.", "Nelze vr�tit seznam hladin upozor�ov�n� na nedostatek kredit�.") \
	MDESC2(c, cred_cmsm, set_lowcredit_warning_levels,10,7,0,20,    "Nastavuje seznam hladin upozor�ov�n� na nedostatek kredit�.", "Nelze nastavit seznam hladin upozor�ov�n� na nedostatek kredit�.") \
	MDESC2(c, cred_cmsm, get_clearing_movements_for_time_distinct_report,10,7,0,21, "Vrac� informace a seznam pohyb� dan� vy��tovac� faktury pro report �asov�ho rozli�en�.", "Nelze vr�tit informace a seznam pohyb� dan� vy��tovac� faktury.") \
	MDESC2(c, cred_cmsm, get_accounting_balance_in_time, 10,7,0,23, "Vrac� v�voj ��etn�ho z�statku v �ase.", "Nelze vr�tit v�voj ��etn�ho z�statku v �ase.") \
	\
	MDESC2(c, cred_cmsm, ccc_create_credit_account,   10,7,1,1,     "Zalo�� nov� kreditn� ��et v�zan� na Centrum.", "Nelze zalo�it nov� kreditn� ��et.") \
	MDESC2(c, cred_cmsm, ccc_get_credit_account_info, 10,7,1,2,     "Vrac� informace o kreditn�m ��tu v�zan�m na ��et Centra.", "Nelze vr�tit informace o kreditn� ��et v�zan�m na ��et Centra.") \
	MDESC2(c, cred_cmsm, ccc_get_customer_billing_info, 10,7,1,3,   "Vrac� ��etn� informace o z�kazn�kovi v�zan�m na ��et Centra.", "Nelze vr�tit ��etn� informace o z�kazn�kovi v�zan�m na ��et Centra.") \
	\
	MDESC(c, cred_resp, unhandled_exception,          10,7,0,30000, "Neo�et�en� v�jimka v kreditn�m modulu.") \
	MDESC(c, cred_resp, database_error,               10,7,0,30003, "Chyba p�i p��stupu k datab�zi.") \
	MDESC(c, cred_resp, database_transaction_error,   10,7,0,30004, "Chyba p�i vykon�v�n� datab�zov� transakce.") \
	MDESC(c, cred_resp, nonpositive_deposit_amount,   10,7,0,30007, "Vkl�dan� ��stka nen� kladn�.") \
	MDESC(c, cred_resp, invalid_permanent_vs,         10,7,0,30008, "Neplatn� permanentn� variabiln� symbol.") \
	MDESC(c, cred_resp, credit_account_not_found,     10,7,0,30009, "Kreditn� ��et nenalezen.") \
	MDESC(c, cred_resp, currency_mismatch,            10,7,0,30010, "Nesouhlas� m�na.") \
	MDESC(c, cred_resp, cannot_create_deposit_movement,10,7,0,30011, "Nelze vytvo�it depositn� z�znam na kreditn�m ��tu.") \
	MDESC(c, cred_resp, cannot_increment_credit_account,10,7,0,30012, "Nelze nav��it ��stku na kreditn�m ��tu.") \
	MDESC(c, cred_resp, missing_payid,                10,7,0,30013, "Chyb� parametr 'payid'.") \
	MDESC(c, cred_resp, invalid_payid,                10,7,0,30014, "Chybn� hodnota parametru 'payid'.") \
	MDESC(c, cred_resp, missing_caid,                 10,7,0,30015, "Chyb� parametr 'caid'.") \
	MDESC(c, cred_resp, invalid_caid,                 10,7,0,30016, "Chybn� hodnota parametru 'caid'.") \
	MDESC(c, cred_resp, withdraw_not_negative,        10,7,0,30017, "��stka v�b�ru z kreditn�ho ��tu nen� z�porn�.") \
	MDESC(c, cred_resp, cannot_create_withdraw_movement,10,7,0,30018, "Nelze vytvo�it v�b�rov� z�znam na kreditn�m ��tu.") \
	MDESC(c, cred_resp, cannot_decrement_credit_account,10,7,0,30019, "Nelze pon�it ��stku na kreditn�m ��tu.") \
	MDESC(c, cred_resp, not_enaugh_credit,            10,7,0,30020, "Nedostate�n� kredit na kreditn�m ��tu.") \
	MDESC(c, cred_resp, missing_cmid,                 10,7,0,30021, "Chyb� parametr 'cmid'.") \
	MDESC(c, cred_resp, invalid_cmid,                 10,7,0,30022, "Chybn� hodnota parametru 'cmid'.") \
	MDESC(c, cred_resp, withdraw_movement_not_found,  10,7,0,30023, "Z�znam o pohybu na kreditn�m ��tu nebyl nalezen.") \
	MDESC(c, cred_resp, bad_movement_state,           10,7,0,30024, "Z�znam o pohybu na kreditn�m ��tu je v neo�ek�van�m stavu.") \
	MDESC(c, cred_resp, cannot_cancel_withdraw_movement,10,7,0,30025, "Nelze zru�it v�b�rov� z�znam na kreditn�m ��tu.") \
	MDESC(c, cred_resp, cannot_complete_withdraw_movement,10,7,0,30026, "Nelze potvrdit v�b�rov� z�znam na kreditn�m ��tu.") \
	MDESC(c, cred_resp, nonpositive_precredit_amount, 10,7,0,30027, "Vkl�dan� ��stka nen� kladn�.") \
	MDESC(c, cred_resp, cannot_create_precredit_movement,10,7,0,30028, "Nelze vytvo�it z�znam o neuhrazen�m vkladu na kreditn�m ��tu.") \
	MDESC(c, cred_resp, missing_note,                 10,7,0,30029, "Chyb� parametr 'note'.") \
	MDESC(c, cred_resp, invalid_note,                 10,7,0,30030, "Chybn� hodnota parametru 'note'.") \
	MDESC(c, cred_resp, cannot_settle_precredit_movements, 10,7,0,30031, "Nelze vypo��dat neuhrazen� vklady na kreditn� ��et.") \
	MDESC(c, cred_resp, missing_vat_percent,          10,7,0,30032, "Chyb� parametr 'vat_percent'.") \
	MDESC(c, cred_resp, invalid_vat_percent,          10,7,0,30033, "Chybn� hodnota parametru 'vat_percent'.") \
	MDESC(c, cred_resp, nonpositive_bonus_amount,     10,7,0,30034, "Bonusov� ��stka nen� kladn�.") \
	MDESC(c, cred_resp, cannot_create_add_bonus_movement,10,7,0,30035, "Nelze vytvo�it z�znam o p�id�n� bonusu na kreditn� ��et.") \
	MDESC(c, cred_resp, cannot_increment_uncleared_bonus,10,7,0,30036, "Nelze nav��it bonusovou ��stku na nevy��tovan�m bonusu.") \
	MDESC(c, cred_resp, missing_tax_date,                10,7,0,30037, "Chyb� parametr 'tax_date'.") \
	MDESC(c, cred_resp, invalid_tax_date,                10,7,0,30038, "Chybn� hodnota parametru 'tax_date'.") \
	MDESC(c, cred_resp, deposit_movement_not_found,      10,7,0,30039, "Depositn� z�znam na kreditn�m ��tu nenalezen.") \
	MDESC(c, cred_resp, deposit_movement_payid_mismatch, 10,7,0,30040, "Nesouhlas� polo�ka 'payid' depositn�ho z�znamu.") \
	MDESC(c, cred_resp, deposit_movement_currency_mismatch, 10,7,0,30041, "Nesouhlas� polo�ka 'currency' depositn�ho z�znamu.") \
	MDESC(c, cred_resp, deposit_movement_amount_mismatch, 10,7,0,30042, "Nesouhlas� polo�ka 'amount' depositn�ho z�znamu.") \
	MDESC(c, cred_resp, cannot_expose_invoice_to_money,   10,7,0,30043, "Chyba p�i vystavov�n� faktury do Money.") \
	MDESC(c, cred_resp, missing_begin_date,              10,7,0,30044, "Chyb� parametr 'begin_date'.") \
	MDESC(c, cred_resp, invalid_begin_date,              10,7,0,30045, "Chybn� hodnota parametru 'begin_date'.") \
	MDESC(c, cred_resp, missing_end_date,                10,7,0,30046, "Chyb� parametr 'end_date'.") \
	MDESC(c, cred_resp, invalid_end_date,                10,7,0,30047, "Chybn� hodnota parametru 'end_date'.") \
	MDESC(c, cred_resp, no_uncleared_withdraw_movements, 10,7,0,30048, "V dan�m obdob� nejsou ��dn� nevy��tovan� pohyby.") \
	MDESC(c, cred_resp, withdraw_movement_currency_mismatch, 10,7,0,30049, "Nesouhlas� polo�ka 'currency' v�b�rov�ho z�znamu.") \
	MDESC(c, cred_resp, low_uncleared_credit_for_clearing, 10,7,0,30050, "Nedostatek nevy��tovan�ho kreditu pro proveden� vy��tov�n�.") \
	MDESC(c, cred_resp, cannot_finish_withdraw_movement, 10,7,0,30051, "Nelze finalizovat v�b�rov� z�znam na kreditn�m ��tu.") \
	MDESC(c, cred_resp, cannot_update_uncleared_counters, 10,7,0,30052, "Nelze aktualizovat po��tadla nevy��tovan�ch kredit�/bonus�.") \
	MDESC(c, cred_resp, vat_percent_mismatch,             10,7,0,30053, "Nesouhlas� sazba DPH.") \
	MDESC(c, cred_resp, clearing_invoice_number_not_found,10,7,0,30054, "Vy��tovac� faktura s dan�m ��slem neexistuje.") \
	MDESC(c, cred_resp, ambiguous_clearing_invoice_number,10,7,0,30055, "Nejednozna�n� ��slo vy��tovac� faktury.") \
	MDESC(c, cred_resp, clearing_report_not_found,        10,7,0,30056, "Soupis vy��tovan�ch slu�eb nenalezen.") \
	MDESC(c, cred_resp, credit_account_permanent_vs_not_available, 10,7,0,30057, "Permanentn� variabiln� symbol ke kreditn�mu ��tu nen� k dispozici." ) \
	MDESC(c, cred_resp, invalid_last_n,                   10,7,0,30058, "Chybn� hodnota parametru 'last_n'.") \
	MDESC(c, cred_resp, invalid_filter_movement_type,     10,7,0,30059, "Chybn� hodnota parametru 'filter_movement_type'.") \
	MDESC(c, cred_resp, invalid_filter_inserted_begin,    10,7,0,30060, "Chybn� hodnota parametru 'filter_inserted_begin'.") \
	MDESC(c, cred_resp, invalid_filter_inserted_end,      10,7,0,30061, "Chybn� hodnota parametru 'filter_inserted_end'.") \
	MDESC(c, cred_resp, no_withdraw_movements,            10,7,0,30062, "Nebyly nalezeny ��dn� v�b�rov� pohyby.") \
	MDESC(c, cred_resp, billing_request_not_found,        10,7,0,30063, "Faktura�n� po�adavek nenalezen.") \
	MDESC(c, cred_resp, cannot_set_lowcredit_warning_email, 10,7,0,30064, "Nelze nastavit email pro upozor�ov�n� na nedostatek kredit�.") \
	MDESC(c, cred_resp, cannot_set_lowcredit_warning_sms, 10,7,0,30065, "Nelze nastavit ��slo mobilu pro SMS upozor�ov�n� na nedostatek kredit�.") \
	MDESC(c, cred_resp, missing_lowcredit_warning_email,  10,7,0,30066, "Chyb� parametr 'lowcredit_warning_email'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_email,  10,7,0,30067, "Chybn� hodnota parametru 'lowcredit_warning_email'.") \
	MDESC(c, cred_resp, missing_lowcredit_warning_sms,    10,7,0,30068, "Chyb� parametr 'lowcredit_warning_sms'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_sms,    10,7,0,30069, "Chybn� hodnota parametru 'lowcredit_warning_sms'.") \
	MDESC(c, cred_resp, missing_lowcredit_warning_levels_table, 10,7,0,30070, "Chyb� tabulka 'lowcredit_warning_levels'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_levels_table, 10,7,0,30071, "Chybn� obsah tabulky 'lowcredit_warning_levels'.") \
	MDESC(c, cred_resp, invalid_lowcredit_warning_level_amount, 10,7,0,30072, "Chybn� ��stka v tabulce 'lowcredit_warning_levels'.") \
	MDESC(c, cred_resp, nonaccredited_deposits_exist,     10,7,0,30073, "Existuj� neakreditovan� depositn� pohyby.") \
	MDESC(c, cred_resp, no_clearable_withdraw_movements,  10,7,0,30074, "Nebyly nalezeny ��dn� v�b�rov� pohyby kter� lze vy��tovat.") \
	MDESC(c, cred_resp, invalid_filter_accredited_begin,  10,7,0,30076, "Chybn� hodnota parametru 'filter_accredited_begin'.") \
	MDESC(c, cred_resp, invalid_filter_accredited_end,    10,7,0,30077, "Chybn� hodnota parametru 'filter_accredited_end'.") \
	\
	MDESC(c, cred_resp, ccc_id_user_already_has_credit_account, 10,7,1,30001, "Dan� CCC u�ivatel ji� m� existuj�c� kreditn� ��et.") \
	MDESC(c, cred_resp, ccc_missing_ccc_id_user,      10,7,1,30002, "Chyb� parametr 'ccc_id_user'.") \
	MDESC(c, cred_resp, ccc_invalid_ccc_id_user,      10,7,1,30003, "Chybn� hodnota parametru 'ccc_id_user'.") \
	MDESC(c, cred_resp, ccc_id_user_not_found,        10,7,1,30004, "Dan� CCC u�ivatel neexistuje.") \
	\
	MDESC(c, cred_resp, credit_account_created,       10,7,0,50001, "Nov� kreditn� ��et byl �sp�n� zalo�en.") \
	MDESC(c, cred_resp, deposit_amount_inserted,      10,7,0,50002, "Vklad na kreditn� ��et byl �sp�n� proveden.") \
	MDESC(c, cred_resp, withdraw_done,                10,7,0,50003, "V�b�r z kreditn�ho ��tu byl �sp�n� proveden.") \
	MDESC(c, cred_resp, withdraw_started,             10,7,0,50004, "V�b�r z kreditn�ho ��tu byl �sp�n� zah�jen.") \
	MDESC(c, cred_resp, withdraw_cancelled,           10,7,0,50005, "V�b�r z kreditn�ho ��tu byl �sp�n� zru�en.") \
	MDESC(c, cred_resp, withdraw_finished,            10,7,0,50006, "V�b�r z kreditn�ho ��tu byl �sp�n� potvrzen.") \
	MDESC(c, cred_resp, credit_account_info,          10,7,0,50007, "Informace o kreditn�m ��tu.") \
	MDESC(c, cred_resp, has_credit_for_withdraw,      10,7,0,50008, "Na ��tu je dostate�n� kredit pro po�adovan� �erp�n�.") \
	MDESC(c, cred_resp, precredit_amount_inserted,    10,7,0,50009, "Neuhrazen� vklad na kreditn� ��et byl �sp�n� proveden.") \
	MDESC(c, cred_resp, bonus_added,                  10,7,0,50010, "Bonusov� kredity byly �sp�n� p�id�ny na kreditn� ��et.") \
	MDESC(c, cred_resp, deposit_tax_invoice_exposed,  10,7,0,50011, "Da�ov� doklad na vklad na kreditn� ��et byl �sp�n� vystaven.") \
	MDESC(c, cred_resp, clearing_invoice_exposed,     10,7,0,50012, "Vy��tovac� faktura byl �sp�n� vystavena.") \
	MDESC(c, cred_resp, clearing_report_pdf,          10,7,0,50013, "PDF soubor soupisu vy��tovan�ch slu�eb.") \
	MDESC(c, cred_resp, customer_billing_info,        10,7,0,50014, "��etn� informace o dan�m z�kazn�kovi.") \
	MDESC(c, cred_resp, credit_account_movements,     10,7,0,50015, "Seznam pohyb� na kreditn�m ��tu.") \
	MDESC(c, cred_resp, credit_accounts_for_clearing, 10,7,0,50016, "Seznam kreditn�ch ��t� s nevy��tovan�mi pohyby.") \
	MDESC(c, cred_resp, clearing_report_updated,      10,7,0,50017, "Soupis vy��tovan�ch slu�eb byl �sp�n� p�egenerov�n.") \
	MDESC(c, cred_resp, lowcredit_warning_email_set,  10,7,0,50018, "Email pro upozor�ov�n� na nedostatek kredit� byl �sp�n� nastaven.") \
	MDESC(c, cred_resp, lowcredit_warning_sms_set,    10,7,0,50019, "Mobil pro SMS upozor�ov�n� na nedostatek kredit� byl �sp�n� nastaven.") \
	MDESC(c, cred_resp, lowcredit_warning_levels,     10,7,0,50020, "Hladiny upozor�ov�n� na nedostatek kredit�.") \
	MDESC(c, cred_resp, lowcredit_warning_levels_set, 10,7,0,50021, "Hladiny upozor�ov�n� na nedostatek kredit� byly nastaveny.") \
	MDESC(c, cred_resp, clearing_movements_for_time_distinct_report, 10,7,0,50022, "Informace a pohyby vy��tovac� faktury pro report �asov�ho rozli�en�.") \
	MDESC(c, cred_resp, fix_of_base_uncleared_amounts_of_movements_finished,  10,7,0,50023, "�prava nevy��tovan�ch z�statk� ve vkladov�ch kreditn�ch pohybech byla dokon�ena.") \
	MDESC(c, cred_resp, accounting_balance_in_time,   10,7,0,50024, "V�voj ��etn�ho z�statku v �ase.") \
	
// ZonerInvoice Payment Evidence unit messages
#define ZIPAYEV_MDESCS(c) \
	MDESC2(c, payev_cmsm, pay_in_cash,                10,8,0,1,     "Platba ��stky pod variabiln�m symbolem v hotovosti.", "Platba v hotovosti selhala.") \
	MDESC2(c, payev_cmsm, expose_tax_invoice_by_payid,10,8,0,2,     "Vystaven� da�ov�ho dokladu na p�ijatou platbu.", "Vystaven� da�ov�ho dokladu na p�ijatou platbu selhalo.") \
	MDESC2(c, payev_cmsm, pay_by_bank,                10,8,0,3,     "Platba ��stky pod variabiln�m symbolem na bankovn� ��et.", "P�ijet� platby na bankovn� ��et selhalo.") \
	MDESC2(c, payev_cmsm, create_credit_request_by_vs,10,8,0,4,     "Vytvo�en� po�adavku na vlo�en� ��stky na kreditn� ��et pod variabiln�m symbolem.", "Nelze vytvo�it po�adavek na vlo�en� ��stky na kreditn� ��et pod variabiln�m symbolem." ) \
	MDESC2(c, payev_cmsm, pair_new_bank_payments,     10,8,0,5,     "Prov��� zda nejsou v p�ijat�ch bankovn�ch platb�ch nezpracovan� transakce, sp�ruje je a aktivuje �hrady v p��slu�n�ch subsyst�mech.", "Nelze prov��it nezpracovan� p�ijat� bankovn� platby." ) \
	MDESC2(c, payev_cmsm, lookup_unique_payment_evidence_for_tax, 10,8,0,6, "Vyhled� odpov�daj�c� platbu na z�klad� var. symbolu apod. pro vystaven� da�ov�ho dokladu.", "��dn� odpov�daj�c� platba nenalezena." ) \
	MDESC2(c, payev_cmsm, insert_card_payment,        10,8,0,7,     "Vlo�� a sp�ruje platbu p�es kreditn� kartu.", "Nelze vlo�it a/nebo sp�rovat platbu p�es kreditn� kartu." ) \
	MDESC2(c, payev_cmsm, accredit_payment,           10,8,0,9,     "Prohl�s� platbu za definitivn� p�ijatou, obvykle na z�klad� bankovn�ho v�pisu.", "Nelze prohl�sit platbu za definitivn� p�ijatou.") \
	MDESC2(c, payev_cmsm, create_qrcode_for_vs,       10,8,0,10,    "Vytvo�i platebn� QR k�d pro dan� variabiln� symbol.", "Nelze vytvo�it platebn� QR k�d.") \
	MDESC2(c, payev_cmsm, get_payment_evidence_by_vs, 10,8,0,11,    "Vrac� tabulku platebn�ch po�adavk� podle variabiln�ho symbolu.", "Nelze vr�tit tabulku platebn�ch po�adavk�.") \
	MDESC2(c, payev_cmsm, get_payments_for_due_notification, 10,8,0,12, "Vrac� tabulku platebn�ch po�adavk� u kter�ch by m�lo b�t odesl�no upozorn�n� na v�zvu/fakturu po splatnosti.", "Nelze vr�tit tabulku po�adavk� pro upozorn�n� po splatnosti.") \
	MDESC2(c, payev_cmsm, send_payment_due_notification, 10,8,0,13, "Po�le upozorn�n� po splatnosti platebn�ho po�adavku.", "Zasl�n� upozorn�n� po splatnosti selhalo.") \
	MDESC2(c, payev_cmsm, check_vs_exists,            10,8,0,14,    "Rychl� bezz�mkov� dotaz zda existuje libovoln� platebn� po�adavek s dan�m variabilem.", "Nelze zkontrolovat existence variabiln�ho symbolu.") \
	MDESC2(c, payev_cmsm, get_payment_evidence,       10,8,0,15,    "Vrac� kompletn� informace platebn�ho po�adavku s dan�m payid.", "Nelze vr�tit informace o platebn�m po�adavku.") \
	MDESC2(c, payev_cmsm, make_manual_payment,        10,8,0,16,    "Provede manu�ln� �hradu platebn�ho po�adavku.", "Nelze prov�st manu�ln� �hradu.") \
	\
	MDESC(c, payev_resp, unhandled_exception,         10,8,0,30000, "Neo�et�en� v�jimka v modulu evidence plateb.") \
	MDESC(c, payev_resp, database_error,              10,8,0,30003, "Chyba p�i p��stupu k datab�zi.") \
	MDESC(c, payev_resp, database_transaction_error,  10,8,0,30004, "Chyba p�i vykon�v�n� datab�zov� transakce.") \
	MDESC(c, payev_resp, invalid_invoice_series,      10,8,0,30005, "Neplatn� ��seln� �ada.") \
	MDESC(c, payev_resp, unsupported_invoice_series,  10,8,0,30006, "Dan� ��seln� �ada nen� v platebn�m subsyst�mu podporovan�.") \
	MDESC(c, payev_resp, payment_rejected_by_credit_unit, 10,8,0,30007, "Platba byla odm�tnuta krednitn�m subsyst�mem.") \
	MDESC(c, payev_resp, missing_payid,               10,8,0,30008, "Chyb� parametr 'payid'.") \
	MDESC(c, payev_resp, invalid_payid,               10,8,0,30009, "Chybn� hodnota parametru 'payid'.") \
	MDESC(c, payev_resp, wrong_payment_state,         10,8,0,30010, "Chybn� stav platebn�ho z�znamu.") \
	MDESC(c, payev_resp, invoice_already_exposed,     10,8,0,30011, "Faktura na danou platbu byla ji� vystavena.") \
	MDESC(c, payev_resp, unsupported_subsystem,       10,8,0,30012, "Nepodporovan� subsyst�m.") \
	MDESC(c, payev_resp, unsupported_payment_source,  10,8,0,30013, "Nepodporovan� zdroj platby.") \
	MDESC(c, payev_resp, subsystem_message_failed,    10,8,0,30014, "Zpr�va do subsyst�mu selhala.") \
	MDESC(c, payev_resp, payment_not_accredited,      10,8,0,30015, "Nebylo potvrzeno p�ijet� platby.") \
	MDESC(c, payev_resp, nonpositive_amount,          10,8,0,30016, "��stka nen� kladn�.") \
	MDESC(c, payev_resp, missing_caid,                10,8,0,30017, "Chyb� parametr 'caid'.") \
	MDESC(c, payev_resp, invalid_caid,                10,8,0,30018, "Chybn� hodnota parametru 'caid'.") \
	MDESC(c, payev_resp, no_matching_accounting_year, 10,8,0,30019, "Nenalezen ��dn� odpov�daj�c� ��etn� rok.") \
	MDESC(c, payev_resp, no_matching_invoice_series,  10,8,0,30020, "Nenalezena ��dn� odpov�daj�c� ��seln� �ada." ) \
	MDESC(c, payev_resp, cannot_generate_variable_symbol, 10,8,0,30021, "Chyba p�i generov�n� unik�tn�ho variabiln�ho symbolu." ) \
	MDESC(c, payev_resp, variable_symbol_not_found,   10,8,0,30022, "Variabiln� symbol nebyl nalezen.") \
	MDESC(c, payev_resp, payment_not_in_waiting_state, 10,8,0,30023, "Platebn� po�adavek nen� ve stavu �ekaj�c�m na platbu.") \
	MDESC(c, payev_resp, currency_mismatch,           10,8,0,30024, "Nesouhlas� m�na platby.") \
	MDESC(c, payev_resp, amount_mismatch,             10,8,0,30025, "Nesouhlas� ��stka platby.") \
	MDESC(c, payev_resp, record_not_bound_to_caid,    10,8,0,30026, "Platebn� z�znam nen� v�zan� na ��dn� kreditn� ��et.") \
	MDESC(c, payev_resp, new_bank_payments_paired_with_errors, 10,8,0,30027, "P�rov�n� nov�ch bankovn�ch po�adavk� prob�hlo s chybami." ) \
	MDESC(c, payev_resp, ambiguous_variable_symbol,   10,8,0,30028, "Nejednozna�n� variabiln� symbol.") \
	MDESC(c, payev_resp, payment_evidence_not_found,  10,8,0,30029, "Nenalezen odpov�daj�c� z�znam o platb�.") \
	MDESC(c, payev_resp, unexpected_tax_state,        10,8,0,30030, "Neo�ek�van� stav da�ov�ho dokladu platebn�ho z�znamu.") \
	MDESC(c, payev_resp, payment_not_in_requested_tax_state,  10,8,0,30031, "Z�znam o platb� nem� po�adovan� stav da�ov�ho dokladu.") \
	MDESC(c, payev_resp, missing_send_rfp,            10,8,0,30032, "Chyb� parametr 'send_rfp'.") \
	MDESC(c, payev_resp, invalid_send_rfp,            10,8,0,30033, "Chybn� hodnota parametru 'send_rfp'.") \
	MDESC(c, payev_resp, payment_already_accredited,  10,8,0,30034, "Platba byla ji� ozna�ena za akreditovanou.") \
	MDESC(c, payev_resp, missing_accredit_date,       10,8,0,30035, "Chyb� parametr 'accredit_date'.") \
	MDESC(c, payev_resp, invalid_accredit_date,       10,8,0,30036, "Chybn� hodnota parametru 'accredit_date'.") \
	MDESC(c, payev_resp, record_not_bound_to_irqid,   10,8,0,30037, "Platebn� z�znam nen� v�zan� na ��dn� faktura�n� po�adavek.") \
	MDESC(c, payev_resp, payment_rejected_by_billing_requests_unit, 10,8,0,30038, "Platba byla odm�tnuta subsyst�mem faktura�n�ch po�adavk�.") \
	MDESC(c, payev_resp, missing_pixels_per_square,   10,8,0,30039, "Chyb� parametr 'pixels_per_square'.") \
	MDESC(c, payev_resp, invalid_pixels_per_square,   10,8,0,30040, "Chybn� hodnota parametru 'pixels_per_square'.") \
	MDESC(c, payev_resp, due_notification_already_sent, 10,8,0,30041, "Upozorn�n� o splatnosti u� bylo odesl�no.") \
	MDESC(c, payev_resp, no_due_date,                 10,8,0,30042, "Platebn� po�adavek nem� specifikovan� ��dn� datum splatnosti.") \
	MDESC(c, payev_resp, no_due_notification_needed,  10,8,0,30043, "Platebn� po�adavek nevy�aduje upozorn�n� o splatnosti.") \
	MDESC(c, payev_resp, ambiguous_irqid,             10,8,0,30044, "Nejednozna�n� identifikace platebn�ho po�adavku p�es irqid.") \
	MDESC(c, payev_resp, missing_payment_bank,        10,8,0,30045, "Chyb� parametr 'payment_bank'.") \
	MDESC(c, payev_resp, invalid_payment_bank,        10,8,0,30046, "Chybn� hodnota parametru 'payment_bank'.") \
	MDESC(c, payev_resp, missing_payment_source,      10,8,0,30047, "Chyb� parametr 'payment_source'.") \
	MDESC(c, payev_resp, invalid_payment_source,      10,8,0,30048, "Chybn� hodnota parametru 'payment_source'.") \
	MDESC(c, payev_resp, missing_note,                10,8,0,30049, "Chyb� parametr 'note'.") \
	MDESC(c, payev_resp, invalid_note,                10,8,0,30050, "Chybn� hodnota parametru 'note'.") \
	MDESC(c, payev_resp, sslmarket_payment_failed,    10,8,0,30051, "Platba pro SSLMarket selhala.") \
	\
	MDESC(c, payev_resp, payment_in_cash_accepted,    10,8,0,50001, "Platba v hotovosti byla p�ijata." ) \
	MDESC(c, payev_resp, tax_invoice_exposed,         10,8,0,50002, "Da�ov� doklad na platbu byl �sp�n� vystaven." ) \
	MDESC(c, payev_resp, payment_by_bank_accepted,    10,8,0,50003, "Platba na bankovn� ��et byla p�ijata." ) \
	MDESC(c, payev_resp, credit_request_by_vs_created,10,8,0,50004, "Po�adavek na vklad na kreditn� ��et pod variabiln�m symbolem byl �sp�n� vytvo�en." ) \
	MDESC(c, payev_resp, new_bank_payments_paired,    10,8,0,50005, "P�rov�n� nov�ch bankovn�ch po�adavk� �sp�n� prob�hlo." ) \
	MDESC(c, payev_resp, payment_evidence_found,      10,8,0,50006, "Platba byla �sp�n� nalezena." ) \
	MDESC(c, payev_resp, payment_by_card_accepted,    10,8,0,50007, "Platba kartou byla p�ijata." ) \
	MDESC(c, payev_resp, payment_accredited,          10,8,0,50008, "Platba byla �sp�n� prohl�ena za akreditovanou." ) \
	MDESC(c, payev_resp, qrcode_created,              10,8,0,50009, "Platebn� QR k�d byl �sp�n� vytvo�en." ) \
	MDESC(c, payev_resp, payment_evidence_list,       10,8,0,50010, "Seznam platebn�ch po�adavk�." ) \
	MDESC(c, payev_resp, payments_for_due_notification, 10,8,0,50011, "Seznam platebn�ch po�adavk� kter�m by m�lo b�t zasl�no upozorn�ni po splatnosti." ) \
	MDESC(c, payev_resp, payment_due_notification_sent, 10,8,0,50012, "Upozorn�ni po splatnosti bylo �sp�n� odesl�no." ) \
	MDESC(c, payev_resp, subsystem_mismatch,          10,8,0,50013, "Nesouhlas� subsyst�m." ) \
	MDESC(c, payev_resp, no_invoice_number,           10,8,0,50014, "��slo da�ov�ho dokladu nen� k dispozici." ) \
	MDESC(c, payev_resp, evidence_vs_exists,          10,8,0,50015, "Variabiln� symbol existuje." ) \
	MDESC(c, payev_resp, payment_evidence,            10,8,0,50016, "Informace o platebn�m po�adavku." ) \
	MDESC(c, payev_resp, manual_payment_accepted,     10,8,0,50017, "Manu�ln� platba byla p�ijata." ) \
	MDESC(c, payev_resp, sslmarket_payment_paired,    10,8,0,50018, "Platba pro SSLMarket byla �sp�n� sp�rovan�." ) \

// ZonerInvoice Billing Requests unit messages
#define ZIREQUESTS_MDESCS(c) \
	MDESC2(c, irq_cmsm, dummy_message,                10,9,0,1,     "N�co nedefinovan�ho.", "Nedefinovan� v�c selhala.") \
	MDESC2(c, irq_cmsm, finalize_request,             10,9,0,2,     "Potvrd� realizaci slu�by dan�ho faktura�n�ho po�adavku.", "Nelze potvrdit realizaci slu�by faktura�n�ho po�adavku.") \
	MDESC2(c, irq_cmsm, cancel_request,               10,9,0,3,     "Potvrd� zru�en� slu�by dan�ho faktura�n�ho po�adavku.", "Nelze potvrdit zru�en� slu�by faktura�n�ho po�adavku.") \
	MDESC2(c, irq_cmsm, finalize_domain_reg_request,  10,9,0,4,     "Potvrd� realizaci faktura�n�ho po�adavku na registraci/renew dom�ny.", "Nelze potvrdit realizaci faktura�n�ho po�adavku na registraci/renew dom�ny.") \
	MDESC2(c, irq_cmsm, get_request_invoice_data_ex,  10,9,0,6,     "Vrac� komplexn� data faktura�n�ho po�adavku v�etn� faktura�n�ch polo�ek atd.", "Nelze vr�tit data faktura�n�ho po�adavku.") \
	MDESC2(c, irq_cmsm, get_nonexposed_serverhosting_requests, 10,9,0,7, "Vrac� nevystaven� faktura�n� po�adavky typu serverhosting", "Nelze vr�tit nevystaven� faktura�n� po�adavky.") \
	MDESC2(c, irq_cmsm, expose_request,               10,9,0,8,     "Vystav� v�zvu/fakturu dan�ho faktura�n�ho po�adavku.", "Nelze vystavit v�zvu/fakturu dan�ho faktura�n�ho po�adavku.") \
	MDESC2(c, irq_cmsm, pay_request_from_payment_evidence, 10,9,0,9, "Uhrad� faktura�n� po�adavek na z�klad� p�ijat� platby v platebn� evidenci.", "Nelze uhradit faktura�n� po�adavek na z�klad� p�ijat� platby v platebn� evidenci.") \
	MDESC2(c, irq_cmsm, expose_tax_invoice,           10,9,0,10,    "Vystav� da�ov� doklad na faktura�n� po�adavek.", "Nelze vystavit da�ov� doklad na faktura�n� po�adavek.") \
	MDESC2(c, irq_cmsm, set_nonexposed_serverhosting_request_period, 10,9,0,11, "Zm�n�/nastav� obdob� nevystaven�ho faktura�n�ho po�adavku.", "Nelze vystavit zm�nit obdob� nevystaven�ho faktura�n�ho po�adavku.") \
	MDESC2(c, irq_cmsm, get_end_date_by_periods_of_opened_package_requests, 10,9,0,12, "Vrac� koncov� datum vznikl� p�i�ten�m sou�tu obdob� otev�en�ch faktura�n�ch po�adavk� dan�ho bal��ku k zadan�mu datumu.", "Nelze spo��tat koncov� datum.") \
	MDESC2(c, irq_cmsm, edit_request,                 10,9,0,13,    "Edituje u� vystaven� faktura�n� po�adavek.", "Nelze editovat faktura�n� po�adavek.") \
	MDESC2(c, irq_cmsm, get_basic_request_data_by_vs, 10,9,0,14,    "Vrac� z�kladn� data faktura�n�ho po�adavku na z�klad� variabiln�ho symbolu.", "Nelze vr�tit data faktura�n�ho po�adavku.") \
	MDESC2(c, irq_cmsm, update_request_xml_data,      10,9,0,15,    "Na�te a znovu ulo�� XML data faktura�n�ho po�adavku.", "Nelze na��st a znovu ulo�it data faktura�n�ho po�adavku.") \
	MDESC2(c, irq_cmsm, update_all_xml_data,          10,9,0,16,    "Na�te a znovu ulo�� XML data V�ECH faktura�n�ch po�adavk�.", "Chyba p�i na�ten� a znovuulo�en� dat faktura�n�ch po�adavk�.") \
	\
	MDESC2(c, irq_cmsm, ccc_create_domain_reg_request,10,9,1,1,     "Vytvo�� faktura�n� po�adavek na registraci/renew dom�ny.", "Nelze vytvo�it faktura�n� po�adavek na registraci/renew dom�ny.") \
	MDESC2(c, irq_cmsm, ccc_has_credit_for_domain_reg_request,10,9,1,2, "Zkontroluje zda by pro�el faktura�n� po�adavek na registraci/renew dom�ny z kreditn�ho ��tu.", "Nelze ov��it mo�nost faktura�n� po�adavku na registraci/renew dom�ny z kreditn�ho ��tu.") \
	MDESC2(c, irq_cmsm, ccc_create_serverhosting_request, 10,9,1,3, "Vytvo�� faktua�n� po�adavek serverhostingov� slu�by.", "Nelze vytvo�it faktura�n� po�adavek serverhostingov� slu�by.") \
	MDESC2(c, irq_cmsm, ccc_get_billing_requests_related_to_id_user, 10,9,1,4, "Vrac� faktura�n� po�adavky se vztahem k u�ivateli v Centru", "Nelze vr�tit faktura�n� po�adavky.") \
	MDESC2(c, irq_cmsm, ccc_get_billing_requests_related_to_pkid, 10,9,1,5, "Vrac� faktura�n� po�adavky se vztahem k bal��ku v Centru", "Nelze vr�tit faktura�n� po�adavky.") \
	MDESC2(c, irq_cmsm, ccc_filter_billing_requests,  10,9,1,6,     "Vrac� faktura�n� po�adavky podle zadan�ch krit�ri�", "Nelze vr�tit faktura�n� po�adavky.") \
	MDESC2(c, irq_cmsm, ccc_update_money_customer,    10,9,1,7,     "P�ektualizuje kartu z�kazn�ka (firmy) v Money podle aktu�ln�ch �daj� v Centry.", "Nelze p�eaktualizovat �daje z�kazn�ka.") \
	MDESC2(c, irq_cmsm, ccc_create_domain_adm_request,10,9,1,8,     "Vytvo�� faktura�n� po�adavek na administrativn� poplatek dom�ny.", "Nelze vytvo�it faktura�n� po�adavek na administrativn� poplatek dom�ny.") \
	\
	MDESC2(c, irq_cmsm, stat_get_permon_total_income, 10,9,2,1,     "Vrac� statistiku celkov�ch tr�eb v dan�m rozsahu m�s�c�.", "Nelze vr�tit statistiku celkov�ch tr�eb v dan�m rozsahu m�s�c�.") \
	\
	MDESC(c, irq_resp, unhandled_exception,           10,9,0,30000, "Neo�et�en� v�jimka v modulu faktura�n�ch po�adavk�.") \
	MDESC(c, irq_resp, database_error,                10,9,0,30003, "Chyba p�i p��stupu k datab�zi.") \
	MDESC(c, irq_resp, database_transaction_error,    10,9,0,30004, "Chyba p�i vykon�v�n� datab�zov� transakce.") \
	MDESC(c, irq_resp, cannot_insert_billing_request, 10,9,0,30005, "Chyba p�i vkl�d�n� faktura�n�ho po�adavku do datab�ze.") \
	MDESC(c, irq_resp, cannot_update_billing_request, 10,9,0,30006, "Chyba p�i aktualizaci faktura�n�ho po�adavku v datab�zi.") \
	MDESC(c, irq_resp, billing_request_not_paid,      10,9,0,30007, "Faktura�n� po�adavek nen� uhrazen.") \
	MDESC(c, irq_resp, billing_request_not_found,     10,9,0,30008, "Faktura�n� po�adavek nenalezen.") \
	MDESC(c, irq_resp, missing_irqid,                 10,9,0,30009, "Chyb� parametr 'irqid'.") \
	MDESC(c, irq_resp, invalid_irqid,                 10,9,0,30010, "Chybn� hodnota parametru 'irqid'.") \
	MDESC(c, irq_resp, no_credit_account,             10,9,0,30011, "Po�adavek nen� sv�zan� s kreditn�m ��tem.") \
	MDESC(c, irq_resp, no_credit_movement,            10,9,0,30012, "Po�adavek nen� sv�zan� s pohybem na kreditn�m ��tu.") \
	MDESC(c, irq_resp, unknown_domain_name_tld,       10,9,0,30013, "Nezn�m� TLD dom�ny.") \
	MDESC(c, irq_resp, cannot_determine_fee_price,    10,9,0,30014, "Nelze ur�it fakturovanou ��stku po�adavku.") \
	MDESC(c, irq_resp, irq_item_property_not_found,   10,9,0,30015, "Vlastnost polo�ky faktura�n�ho po�adavku nenalezena.") \
	MDESC(c, irq_resp, invalid_irq_item_property_type,10,9,0,30016, "Nep��pustn� datov� typ vlastnosti polo�ky faktura�n�ho po�adavku.") \
	MDESC(c, irq_resp, unsupported_irq_item_type,     10,9,0,30017, "Nepodporovan� typ polo�ky faktura�n�ho po�adavku.") \
	MDESC(c, irq_resp, missing_period_begin,          10,9,0,30018, "Chyb� parametr 'period_begin'.") \
	MDESC(c, irq_resp, invalid_period_begin,          10,9,0,30019, "Chybn� hodnota parametru 'period_begin'.") \
	MDESC(c, irq_resp, missing_period_end,            10,9,0,30020, "Chyb� parametr 'period_end'.") \
	MDESC(c, irq_resp, invalid_period_end,            10,9,0,30021, "Chybn� hodnota parametru 'period_end'.") \
	MDESC(c, irq_resp, unsupported_payment_way,       10,9,0,30022, "Nepodporovan� zp�sob platby faktura�n�ho po�adavku.") \
	MDESC(c, irq_resp, request_guid_exists,           10,9,0,30023, "Dan� GUID faktura�n�ho po�adavku ji� existuje.") \
	MDESC(c, irq_resp, missing_request_guid,          10,9,0,30024, "Chyb� parametr 'request_guid'.") \
	MDESC(c, irq_resp, invalid_request_guid,          10,9,0,30025, "Chybn� hodnota parametru 'request_guid'.") \
	MDESC(c, irq_resp, missing_request_type,          10,9,0,30026, "Chyb� parametr 'request_type'.") \
	MDESC(c, irq_resp, invalid_request_type,          10,9,0,30027, "Chybn� hodnota parametru 'request_type'.") \
	MDESC(c, irq_resp, missing_time_period,           10,9,0,30028, "Chyb� parametr 'time_period'.") \
	MDESC(c, irq_resp, invalid_time_period,           10,9,0,30029, "Chybn� hodnota parametru 'time_period'.") \
	MDESC(c, irq_resp, invalid_calculate_to_date,     10,9,0,30030, "Chybn� hodnota parametru 'calculate_to_date'.") \
	MDESC(c, irq_resp, billing_request_not_waiting_for_expose, 10,9,0,30031, "Po�adavek nen� ve stavu �ek�n� na vystaven�.") \
	MDESC(c, irq_resp, cannot_expose_invoice_to_money, 10,9,0,30032, "Chyba p�i vytv��en� faktury v Money.") \
	MDESC(c, irq_resp, billing_request_already_paid,  10,9,0,30033, "Faktura�n� po�adavek byl ji� jednou uhrazen.") \
	MDESC(c, irq_resp, billing_request_is_cancelled,  10,9,0,30034, "Faktura�n� po�adavek byl ji� stornovan�.") \
	MDESC(c, irq_resp, billing_request_already_realized, 10,9,0,30035, "Faktura�n� po�adavek byl ji� realizovan�.") \
	MDESC(c, irq_resp, wrong_billing_request_state,   10,9,0,30036, "Chybn� stav faktura�n�ho po�adavku.") \
	MDESC(c, irq_resp, payment_way_mismatch,          10,9,0,30037, "Nesouhlas� zp�sob platby po�adavku.") \
	MDESC(c, irq_resp, currency_mismatch,             10,9,0,30038, "Nesouhlas� m�na po�adavku.") \
	MDESC(c, irq_resp, amount_mismatch,               10,9,0,30039, "Nesouhlas� ��stka po�adavku.") \
	MDESC(c, irq_resp, immediate_invoice_already_exposed, 10,9,0,30040, "Na faktura�n� po�adavek byla ji� vystavena okam�it� faktura.") \
	MDESC(c, irq_resp, cannot_expose_tax_invoice_for_credit_automatic_request, 10,9,0,30041, "Na faktura�n� po�adavek hrazen� automaticky z kreditu nelze vystavit da�ov� doklad.") \
	MDESC(c, irq_resp, request_guid_mismatch,         10,9,0,30042, "Nesouhlas� GUID po�adavku.") \
	MDESC(c, irq_resp, invalid_filter_request_state,  10,9,0,30043, "Chybn� hodnota parametru 'filter_request_state'.") \
	MDESC(c, irq_resp, invalid_preferred_due_date,    10,9,0,30044, "Chybn� hodnota parametru 'preferred_due_date'.") \
	MDESC(c, irq_resp, charge_fee_auto_source_mismatch, 10,9,0,30045, "Nesouhlas� auto_source faktura�n�ho poplatku.") \
	MDESC(c, irq_resp, no_suitable_charge_fee_found,  10,9,0,30046, "Nebyl nalezen ��dn� odpov�daj�c� faktura�n� poplatek.") \
	MDESC(c, irq_resp, customer_update_in_money_failed, 10,9,0,30047, "Update �daj� z�kazn�ka v Money selhal.") \
	MDESC(c, irq_resp, missing_new_fees,              10,9,0,30048, "Chyb� vstupn� tabulka 'new_fees'.") \
	MDESC(c, irq_resp, invalid_new_fees,              10,9,0,30049, "Chybn� form�t vstupn� tabulky 'new_fees'.") \
	MDESC(c, irq_resp, invalid_item_index,            10,9,0,30050, "Chybn� hodnota parametru 'item_index'.") \
	MDESC(c, irq_resp, item_index_out_of_range,       10,9,0,30051, "Index polo�ky faktura�n�ho po�adavku je mimo rozsah.") \
	MDESC(c, irq_resp, missing_dom_adm_fee_type,      10,9,0,30052, "Chyb� parametr 'dom_adm_fee_type'.") \
	MDESC(c, irq_resp, invalid_dom_adm_fee_type,      10,9,0,30053, "Chybn� hodnota parametru 'dom_adm_fee_type'.") \
	MDESC(c, irq_resp, cannot_expose_tax_invoice_for_free_of_charge_request, 10,9,0,30054, "Na faktura�n� po�adavek zdarma nelze vystavit da�ov� doklad.") \
	MDESC(c, irq_resp, request_amount_not_positive,   10,9,0,30055, "Fakturovan� ��stka po�adavku nen� kladn� hodnota!") \
	\
	MDESC(c, irq_resp, missing_ccc_id_service,        10,9,1,30005, "Chyb� parametr 'ccc_id_service'.") \
	MDESC(c, irq_resp, invalid_ccc_id_service,        10,9,1,30006, "Chybn� hodnota parametru 'ccc_id_service'.") \
	MDESC(c, irq_resp, ccc_id_service_not_found,      10,9,1,30007, "Ccc servis s dan�m ccc_id_service nenalezen.") \
	MDESC(c, irq_resp, missing_ccc_reg_cert,          10,9,1,30011, "Chyb� parametr 'ccc_reg_cert'.") \
	MDESC(c, irq_resp, invalid_ccc_reg_cert,          10,9,1,30012, "Chybn� hodnota parametru 'ccc_reg_cert'.") \
	MDESC(c, irq_resp, missing_ccc_reg_fee_type,      10,9,1,30013, "Chyb� parametr 'ccc_reg_fee_type'.") \
	MDESC(c, irq_resp, invalid_ccc_reg_fee_type,      10,9,1,30014, "Chybn� hodnota parametru 'ccc_reg_fee_type'.") \
	MDESC(c, irq_resp, missing_ccc_reg_period,        10,9,1,30015, "Chyb� parametr 'ccc_reg_period'.") \
	MDESC(c, irq_resp, invalid_ccc_reg_period,        10,9,1,30016, "Chybn� hodnota parametru 'ccc_reg_period'.") \
	MDESC(c, irq_resp, no_ccc_user,                   10,9,1,30017, "��dn� ��et v centru administrace nen� k dispozici.") \
	MDESC(c, irq_resp, ccc_user_mismatch,             10,9,1,30018, "Nejednozna�nost v ��tu centra administrace.") \
	MDESC(c, irq_resp, ccc_package_mismatch,          10,9,1,30019, "Nejednozna�nost v bal��ku centra administrace.") \
	MDESC(c, irq_resp, ccc_service_mismatch,          10,9,1,30020, "Nejednozna�nost v servisu centra administrace.") \
	MDESC(c, irq_resp, no_suitable_ccc_user,          10,9,1,30021, "Nenalezen ��dn� vhodn� ��et v centru administrace.") \
	MDESC(c, irq_resp, invalid_filter_request_type,   10,9,1,30022, "Chybn� hodnota parametru 'filter_request_type'.") \
	\
	MDESC(c, irq_resp, request_finalized,             10,9,0,50001, "Faktura�n� po�adavek byl �sp�n� prohl�en za realizovan�." ) \
	MDESC(c, irq_resp, request_cancelled,             10,9,0,50002, "Faktura�n� po�adavek byl �sp�n� stornovan�." ) \
	MDESC(c, irq_resp, billing_request_data,          10,9,0,50004, "Data faktura�n�ho po�adavku." ) \
	MDESC(c, irq_resp, nonexposed_serverhosting_requests, 10,9,0,50005, "Nevystaven� faktura�n� po�adavky na serverhosting.") \
	MDESC(c, irq_resp, request_exposed,               10,9,0,50006, "Faktura�n� po�adavek byl �sp�n� vystaven�." ) \
	MDESC(c, irq_resp, request_paid,                  10,9,0,50007, "Faktura�n� po�adavek byl �sp�n� uhrazen�." ) \
	MDESC(c, irq_resp, tax_invoice_exposed,           10,9,0,50008, "Da�ov� doklad na faktura�n� po�adavek byl �sp�n� vystaven�." ) \
	MDESC(c, irq_resp, serverhosting_request_period_set, 10,9,0,50009, "Obdob� faktura�n�ho po�adavku serverhostingu �sp�n� zm�n�no." ) \
	MDESC(c, irq_resp, end_date_by_periods_of_opened_package_requests, 10,9,0,50010, "Koncov� datum z otev�en�ch faktura�n�ch po�adavk� spo��t�no." ) \
	MDESC(c, irq_resp, billing_requests,               10,9,0,50011, "Seznam faktura�n�ch po�adavk�." ) \
	MDESC(c, irq_resp, customer_update_in_money_succeeded, 10,9,0,50012, "Update �daj� z�kazn�ka v Money byl �sp�n� proveden." ) \
	MDESC(c, irq_resp, basic_request_data,            10,9,0,50013, "Z�kladn� data faktura�n�ho po�adavku." ) \
	MDESC(c, irq_resp, request_edited,                10,9,0,50014, "Faktura�n� po�adavek byl �sp�n� zeditov�n." ) \
	MDESC(c, irq_resp, request_xml_data_updated,      10,9,0,50015, "XML data faktura�n�ho po�adavku byly �sp�n� na�teny a znovu ulo�eny." ) \
	MDESC(c, irq_resp, all_xml_data_updated,          10,9,0,50016, "XML data V�ECH faktura�n�ch po�adavk� byly �sp�n� na�teny a znovu ulo�eny." ) \
	\
	MDESC(c, irq_resp, ccc_domain_reg_request_created,10,9,1,50001, "Faktura�n� po�adavek na registraci/renew dom�ny byl �sp�n� vytvo�en." ) \
	MDESC(c, irq_resp, ccc_has_credit_for_domain_reg_request_withdraw, 10,9,1,50002, "Kreditn� ��et m� dostate�n� kredit pro p��padn� faktura�n� po�adavek na registraci/renew dom�ny.") \
	MDESC(c, irq_resp, ccc_serverhosting_request_created, 10,9,1,50003, "Faktura�n� po�adavek na serverhosting byl �sp�n� vytvo�en�." ) \
	MDESC(c, irq_resp, ccc_domain_adm_request_created, 10,9,1,50004, "Faktura�n� po�adavek na administrativn� poplatek dom�ny byl �sp�n� vytvo�en." ) \
	\
	MDESC(c, irq_resp, stat_permon_total_income,       10,9,2,50001, "Statistiky celkov�ch p��jm� v dan�ch m�s�c�ch." ) \

// ZonerInvoice Charge Fees Unit
#define ZICHARGEFEES_MDESCS(c) \
	MDESC2(c, chfee_cmsm, add_package_charge_fee,       10,10,0,1,    "P�id� nov� faktura�n� poplatek v�zan� k dan�mu bal��ku.", "Nelze p�idat nov� faktura�n� poplatek v�zan� k dan�mu bal��ku.") \
	MDESC2(c, chfee_cmsm, remove_package_charge_fee,    10,10,0,2,    "Odstran� faktura�n� poplatek v�zan� k dan�mu bal��ku.", "Nelze odstranit faktura�n� poplatek v�zan� k dan�mu bal��ku.") \
	MDESC2(c, chfee_cmsm, disable_charge_fee,           10,10,0,3,    "Enabluje/disabluje dan� faktura�n� poplatek.", "Nelze enablovat/disablovat faktura�n� poplatek.") \
	MDESC2(c, chfee_cmsm, set_charge_fee_alarm,         10,10,0,4,    "Zapnout/vypnout alarm dan�ho faktura�n�ho poplatku.", "Nelze zapnout/vypnout alarm faktura�n� poplatku.") \
	MDESC2(c, chfee_cmsm, get_package_charge_fees,      10,10,0,5,    "Vrac� faktura�n� poplatky dan�ho bal��ku.", "Nelze vr�tit faktura�n� poplatky dan�ho bal��ku.") \
	MDESC2(c, chfee_cmsm, update_package_charge_fee,    10,10,0,6,    "M�n� existuj�c� faktura�n� poplatek dan�ho bal��ku.", "Nelze zm�nit faktura�n� poplatek dan�ho bal��ku.") \
	MDESC2(c, chfee_cmsm, get_package_charge_fee,       10,10,0,7,    "Vrac� jeden faktura�n� poplatek dan�ho bal��ku.", "Nelze vr�tit faktura�n� poplatek dan�ho bal��ku.") \
	MDESC2(c, chfee_cmsm, set_charge_fee_ordnum,        10,10,0,8,    "Nastavuje po�adov� ��slo poplatku.", "Nelze nastavit po�adov� ��slo poplatku.") \
	\
	MDESC(c, chfee_resp, unhandled_exception,           10,10,0,30000, "Neo�et�en� v�jimka v modulu faktura�n�ch poplatk�.") \
	MDESC(c, chfee_resp, database_error,                10,10,0,30003, "Chyba p�i p��stupu k datab�zi.") \
	MDESC(c, chfee_resp, database_transaction_error,    10,10,0,30004, "Chyba p�i vykon�v�n� datab�zov� transakce.") \
	MDESC(c, chfee_resp, missing_alarm,                 10,10,0,30005, "Chyb� parametr 'alarm'.") \
	MDESC(c, chfee_resp, invalid_alarm,                 10,10,0,30006, "Chybn� hodnota parametru 'alarm'.") \
	MDESC(c, chfee_resp, missing_disabled,              10,10,0,30007, "Chyb� parametr 'disabled'.") \
	MDESC(c, chfee_resp, invalid_disabled,              10,10,0,30008, "Chybn� hodnota parametru 'disabled'.") \
	MDESC(c, chfee_resp, missing_description,           10,10,0,30009, "Chyb� parametr 'description'.") \
	MDESC(c, chfee_resp, invalid_description,           10,10,0,30010, "Chybn� hodnota parametru 'description'.") \
	MDESC(c, chfee_resp, missing_mu_count,              10,10,0,30011, "Chyb� parametr 'mu_count'.") \
	MDESC(c, chfee_resp, invalid_mu_count,              10,10,0,30012, "Chybn� hodnota parametru 'mu_count'.") \
	MDESC(c, chfee_resp, missing_unit_price,            10,10,0,30013, "Chyb� parametr 'unit_price'.") \
	MDESC(c, chfee_resp, invalid_unit_price,            10,10,0,30014, "Chybn� hodnota parametru 'unit_price'.") \
	MDESC(c, chfee_resp, missing_unit_time_period,      10,10,0,30015, "Chyb� parametr 'unit_time_period'.") \
	MDESC(c, chfee_resp, invalid_unit_time_period,      10,10,0,30016, "Chybn� hodnota parametru 'unit_time_period'.") \
	MDESC(c, chfee_resp, missing_invoice_item_label,    10,10,0,30017, "Chyb� parametr 'invoice_item_label'.") \
	MDESC(c, chfee_resp, invalid_invoice_item_label,    10,10,0,30018, "Chybn� hodnota parametru 'invoice_item_label'.") \
	MDESC(c, chfee_resp, missing_disable,               10,10,0,30019, "Chyb� parametr 'disable'.") \
	MDESC(c, chfee_resp, invalid_disable,               10,10,0,30020, "Chybn� hodnota parametru 'disable'.") \
	MDESC(c, chfee_resp, missing_chfid,                 10,10,0,30021, "Chyb� parametr 'chfid'.") \
	MDESC(c, chfee_resp, invalid_chfid,                 10,10,0,30022, "Chybn� hodnota parametru 'chfid'.") \
	MDESC(c, chfee_resp, charge_fee_not_found,          10,10,0,30023, "Faktura�n� poplatek nenalezen.") \
	MDESC(c, chfee_resp, charge_fee_ccc_pkid_mismatch,  10,10,0,30024, "Nesouhlas� ccc_pkid faktura�n�ho poplatku.") \
	MDESC(c, chfee_resp, missing_auto_remove,           10,10,0,30025, "Chyb� parametr 'auto_remove'.") \
	MDESC(c, chfee_resp, invalid_auto_remove,           10,10,0,30026, "Chybn� hodnota parametru 'auto_remove'.") \
	MDESC(c, chfee_resp, invalid_tag,                   10,10,0,30027, "Chybn� hodnota parametru 'tag'.") \
	MDESC(c, chfee_resp, missing_ordnum,                10,10,0,30028, "Chyb� parametr 'ordnum'.") \
	MDESC(c, chfee_resp, invalid_ordnum,                10,10,0,30029, "Chybn� hodnota parametru 'ordnum'.") \
	\
	MDESC(c, chfee_resp, charge_fee_added,              10,10,0,50001, "Nov� faktura�n� poplatek byl �sp�n� p�id�n.") \
	MDESC(c, chfee_resp, charge_fee_removed,            10,10,0,50002, "Faktura�n� poplatek byl �sp�n� odstran�n.") \
	MDESC(c, chfee_resp, charge_fee_disable_flag_updated, 10,10,0,50003, "P��znak 'disabled' dan�ho faktura�n�ho poplatku byl �sp�n� nastaven.") \
	MDESC(c, chfee_resp, charge_fee_alarm_flag_updated, 10,10,0,50004, "P��znak 'alarm' dan�ho faktura�n�ho poplatku byl �sp�n� nastaven.") \
	MDESC(c, chfee_resp, charge_fees,                   10,10,0,50005, "Seznam faktura�n�ch poplatk�.") \
	MDESC(c, chfee_resp, charge_fee_updated,            10,10,0,50006, "Faktura�n� poplatek byl �sp�n� zm�n�n.") \
	MDESC(c, chfee_resp, charge_fee,                    10,10,0,50007, "Faktura�n� poplatek.") \
	MDESC(c, chfee_resp, charge_fee_ordnum_set,         10,10,0,50008, "Po�adov� ��slo poplatku nastaveno.") \


#define ZINV_MDESC_TABLE(c) \
	ZINV_MDESCS(c) \
	AUTH_MDESCS(c) \
	ELINV_MDESCS(c) \
	RFPI_MDESCS(c) \
	INVPART_MDESCS(c) \
	ZICREDIT_MDESCS(c) \
	ZIPAYEV_MDESCS(c) \
	ZIREQUESTS_MDESCS(c) \
	ZICHARGEFEES_MDESCS(c)

#define ZINV_GROUP_WHS_TABLE(c) \
	GROUP_WHS(c, electronic_invoices_unit_mdesc, elinv_cmsm, get_customer_invoices_list) \
	GROUP_WHS(c, request_for_payment_invoices_unit_mdesc, rfpi_cmsm, send_rfp) \
	GROUP_WHS(c, zonerinvoice_authentication_unit_mdesc, ziauth_cmsm, login) \
	GROUP_WHS(c, partner_invoices_unit_mdesc, invp_cmsm, get_partner_invoices) \
	GROUP_WHS(c, credit_unit_mdesc, cred_cmsm, deposit_by_permanent_vs) \
	GROUP_WHS(c, payment_evidence_unit_mdesc, payev_cmsm, pay_in_cash) \
	GROUP_WHS(c, billing_requests_unit_mdesc, irq_cmsm, dummy_message) \
	GROUP_WHS(c, charge_fees_unit_mdesc, chfee_cmsm, add_package_charge_fee) \


// expand the declarations
CMS_NAMESPACE_START
ZINV_MDESC_TABLE(DECL)
CMS_NAMESPACE_END

#endif // MOD_ZONERINVOICE_MDESCS


