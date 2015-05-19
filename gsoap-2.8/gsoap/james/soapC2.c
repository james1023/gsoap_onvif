
#include "soapH.h"

#ifdef __cplusplus
extern "C" {
#endif

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__Capabilities(struct soap *soap, struct tt__Capabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Analytics = NULL;
	a->Device = NULL;
	a->Events = NULL;
	a->Imaging = NULL;
	a->Media = NULL;
	a->PTZ = NULL;
	a->Extension = NULL;
	soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__Capabilities(struct soap *soap, const struct tt__Capabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__AnalyticsCapabilities(soap, &a->Analytics);
	soap_serialize_PointerTott__DeviceCapabilities(soap, &a->Device);
	soap_serialize_PointerTott__EventCapabilities(soap, &a->Events);
	soap_serialize_PointerTott__ImagingCapabilities(soap, &a->Imaging);
	soap_serialize_PointerTott__MediaCapabilities(soap, &a->Media);
	soap_serialize_PointerTott__PTZCapabilities(soap, &a->PTZ);
	soap_serialize_PointerTott__CapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__Capabilities(struct soap *soap, const char *tag, int id, const struct tt__Capabilities *a, const char *type)
{
	if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
		return soap->error;
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__Capabilities), type))
		return soap->error;
	if (soap_out_PointerTott__AnalyticsCapabilities(soap, "tt:Analytics", -1, &a->Analytics, ""))
		return soap->error;
	if (soap_out_PointerTott__DeviceCapabilities(soap, "tt:Device", -1, &a->Device, ""))
		return soap->error;
	if (soap_out_PointerTott__EventCapabilities(soap, "tt:Events", -1, &a->Events, ""))
		return soap->error;
	if (soap_out_PointerTott__ImagingCapabilities(soap, "tt:Imaging", -1, &a->Imaging, ""))
		return soap->error;
	if (soap_out_PointerTott__MediaCapabilities(soap, "tt:Media", -1, &a->Media, ""))
		return soap->error;
	if (soap_out_PointerTott__PTZCapabilities(soap, "tt:PTZ", -1, &a->PTZ, ""))
		return soap->error;
	if (soap_out_PointerTott__CapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__Capabilities * SOAP_FMAC4 soap_in_tt__Capabilities(struct soap *soap, const char *tag, struct tt__Capabilities *a, const char *type)
{
	size_t soap_flag_Analytics = 1;
	size_t soap_flag_Device = 1;
	size_t soap_flag_Events = 1;
	size_t soap_flag_Imaging = 1;
	size_t soap_flag_Media = 1;
	size_t soap_flag_PTZ = 1;
	size_t soap_flag_Extension = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct tt__Capabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__Capabilities, sizeof(struct tt__Capabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default_tt__Capabilities(soap, a);
	soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Analytics && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__AnalyticsCapabilities(soap, "tt:Analytics", &a->Analytics, "tt:AnalyticsCapabilities"))
				{	soap_flag_Analytics--;
					continue;
				}
			if (soap_flag_Device && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__DeviceCapabilities(soap, "tt:Device", &a->Device, "tt:DeviceCapabilities"))
				{	soap_flag_Device--;
					continue;
				}
			if (soap_flag_Events && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__EventCapabilities(soap, "tt:Events", &a->Events, "tt:EventCapabilities"))
				{	soap_flag_Events--;
					continue;
				}
			if (soap_flag_Imaging && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__ImagingCapabilities(soap, "tt:Imaging", &a->Imaging, "tt:ImagingCapabilities"))
				{	soap_flag_Imaging--;
					continue;
				}
			if (soap_flag_Media && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__MediaCapabilities(soap, "tt:Media", &a->Media, "tt:MediaCapabilities"))
				{	soap_flag_Media--;
					continue;
				}
			if (soap_flag_PTZ && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__PTZCapabilities(soap, "tt:PTZ", &a->PTZ, "tt:PTZCapabilities"))
				{	soap_flag_PTZ--;
					continue;
				}
			if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__CapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:CapabilitiesExtension"))
				{	soap_flag_Extension--;
					continue;
				}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct tt__Capabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__Capabilities, 0, sizeof(struct tt__Capabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__Capabilities(struct soap *soap, const struct tt__Capabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__Capabilities);
	if (soap_out_tt__Capabilities(soap, tag?tag:"tt:Capabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Capabilities * SOAP_FMAC4 soap_get_tt__Capabilities(struct soap *soap, struct tt__Capabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in_tt__Capabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tds__GetCapabilitiesResponse(struct soap *soap, struct _tds__GetCapabilitiesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->Capabilities = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tds__GetCapabilitiesResponse(struct soap *soap, const struct _tds__GetCapabilitiesResponse *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	soap_serialize_PointerTott__Capabilities(soap, &a->Capabilities);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetCapabilitiesResponse(struct soap *soap, const char *tag, int id, const struct _tds__GetCapabilitiesResponse *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetCapabilitiesResponse), type))
		return soap->error;
	if (a->Capabilities)
		soap_element_result(soap, "tds:Capabilities");
	if (a->Capabilities)
	{	if (soap_out_PointerTott__Capabilities(soap, "tds:Capabilities", -1, &a->Capabilities, ""))
			return soap->error;
	}
	else if (soap_element_nil(soap, "tds:Capabilities"))
		return soap->error;
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tds__GetCapabilitiesResponse * SOAP_FMAC4 soap_in__tds__GetCapabilitiesResponse(struct soap *soap, const char *tag, struct _tds__GetCapabilitiesResponse *a, const char *type)
{
	size_t soap_flag_Capabilities = 1;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tds__GetCapabilitiesResponse *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetCapabilitiesResponse, sizeof(struct _tds__GetCapabilitiesResponse), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tds__GetCapabilitiesResponse(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap_flag_Capabilities && soap->error == SOAP_TAG_MISMATCH)
				if (soap_in_PointerTott__Capabilities(soap, "tds:Capabilities", &a->Capabilities, "tt:Capabilities"))
				{	soap_flag_Capabilities--;
					continue;
				}
			soap_check_result(soap, "tds:Capabilities");
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tds__GetCapabilitiesResponse *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetCapabilitiesResponse, 0, sizeof(struct _tds__GetCapabilitiesResponse), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Capabilities > 0))
	{	soap->error = SOAP_OCCURS;
		return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tds__GetCapabilitiesResponse(struct soap *soap, const struct _tds__GetCapabilitiesResponse *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tds__GetCapabilitiesResponse);
	if (soap_out__tds__GetCapabilitiesResponse(soap, tag?tag:"tds:GetCapabilitiesResponse", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tds__GetCapabilitiesResponse * SOAP_FMAC4 soap_get__tds__GetCapabilitiesResponse(struct soap *soap, struct _tds__GetCapabilitiesResponse *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetCapabilitiesResponse(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default__tds__GetCapabilities(struct soap *soap, struct _tds__GetCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	a->__sizeCategory = 0;
	a->Category = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__tds__GetCapabilities(struct soap *soap, const struct _tds__GetCapabilities *a)
{
	(void)soap; (void)a; /* appease -Wall -Werror */
	if (a->Category)
	{	int i;
		for (i = 0; i < a->__sizeCategory; i++)
		{
			soap_embedded(soap, a->Category + i, SOAP_TYPE_tt__CapabilityCategory);
		}
	}
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out__tds__GetCapabilities(struct soap *soap, const char *tag, int id, const struct _tds__GetCapabilities *a, const char *type)
{
	(void)soap; (void)tag; (void)id; (void)type;
	if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE__tds__GetCapabilities), type))
		return soap->error;
	if (a->Category)
	{	int i;
		for (i = 0; i < a->__sizeCategory; i++)
			if (soap_out_tt__CapabilityCategory(soap, "tds:Category", -1, a->Category + i, ""))
				return soap->error;
	}
	return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct _tds__GetCapabilities * SOAP_FMAC4 soap_in__tds__GetCapabilities(struct soap *soap, const char *tag, struct _tds__GetCapabilities *a, const char *type)
{
	struct soap_blist *soap_blist_Category = NULL;
	if (soap_element_begin_in(soap, tag, 0, type))
		return NULL;
	a = (struct _tds__GetCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE__tds__GetCapabilities, sizeof(struct _tds__GetCapabilities), 0, NULL, NULL, NULL);
	if (!a)
		return NULL;
	soap_default__tds__GetCapabilities(soap, a);
	if (soap->body && !*soap->href)
	{
		for (;;)
		{	soap->error = SOAP_TAG_MISMATCH;
			if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tds:Category", 1, NULL))
			{	if (a->Category == NULL)
				{	if (soap_blist_Category == NULL)
						soap_blist_Category = soap_new_block(soap);
					a->Category = (enum tt__CapabilityCategory *)soap_push_block(soap, soap_blist_Category, sizeof(enum tt__CapabilityCategory));
					if (a->Category == NULL)
						return NULL;
					soap_default_tt__CapabilityCategory(soap, a->Category);
				}
				soap_revert(soap);
				if (soap_in_tt__CapabilityCategory(soap, "tds:Category", a->Category, "tt:CapabilityCategory"))
				{	a->__sizeCategory++;
					a->Category = NULL;
					continue;
				}
			}
			if (soap->error == SOAP_TAG_MISMATCH)
				soap->error = soap_ignore_element(soap);
			if (soap->error == SOAP_NO_TAG)
				break;
			if (soap->error)
				return NULL;
		}
		if (a->Category)
			soap_pop_block(soap, soap_blist_Category);
		if (a->__sizeCategory)
			a->Category = (enum tt__CapabilityCategory *)soap_save_block(soap, soap_blist_Category, NULL, 1);
		else
		{	a->Category = NULL;
			if (soap_blist_Category)
				soap_end_block(soap, soap_blist_Category);
		}
		if (soap_element_end_in(soap, tag))
			return NULL;
	}
	else
	{	a = (struct _tds__GetCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE__tds__GetCapabilities, 0, sizeof(struct _tds__GetCapabilities), 0, NULL);
		if (soap->body && soap_element_end_in(soap, tag))
			return NULL;
	}
	return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put__tds__GetCapabilities(struct soap *soap, const struct _tds__GetCapabilities *a, const char *tag, const char *type)
{
	register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE__tds__GetCapabilities);
	if (soap_out__tds__GetCapabilities(soap, tag?tag:"tds:GetCapabilities", id, a, type))
		return soap->error;
	return soap_putindependent(soap);
}

SOAP_FMAC3 struct _tds__GetCapabilities * SOAP_FMAC4 soap_get__tds__GetCapabilities(struct soap *soap, struct _tds__GetCapabilities *p, const char *tag, const char *type)
{
	if ((p = soap_in__tds__GetCapabilities(soap, tag, p, type)))
		if (soap_getindependent(soap))
			return NULL;
	return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__Capabilities(struct soap *soap, struct tt__Capabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__Capabilities))
        soap_serialize_tt__Capabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__Capabilities(struct soap *soap, const char *tag, int id, struct tt__Capabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__Capabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__Capabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__Capabilities ** SOAP_FMAC4 soap_in_PointerTott__Capabilities(struct soap *soap, const char *tag, struct tt__Capabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__Capabilities **)soap_malloc(soap, sizeof(struct tt__Capabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__Capabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__Capabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__Capabilities, sizeof(struct tt__Capabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__Capabilities(struct soap *soap, struct tt__Capabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__Capabilities);
    if (soap_out_PointerTott__Capabilities(soap, tag?tag:"tt:Capabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__Capabilities ** SOAP_FMAC4 soap_get_PointerTott__Capabilities(struct soap *soap, struct tt__Capabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__Capabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__CapabilityCategory(struct soap *soap, enum tt__CapabilityCategory *const*a)
{
    soap_reference(soap, *a, SOAP_TYPE_tt__CapabilityCategory);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__CapabilityCategory(struct soap *soap, const char *tag, int id, enum tt__CapabilityCategory *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__CapabilityCategory);
    if (id < 0)
        return soap->error;
    return soap_out_tt__CapabilityCategory(soap, tag, id, *a, type);
}

SOAP_FMAC3 enum tt__CapabilityCategory ** SOAP_FMAC4 soap_in_PointerTott__CapabilityCategory(struct soap *soap, const char *tag, enum tt__CapabilityCategory **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
    return NULL;
    if (!a)
        if (!(a = (enum tt__CapabilityCategory **)soap_malloc(soap, sizeof(enum tt__CapabilityCategory *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__CapabilityCategory(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (enum tt__CapabilityCategory **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__CapabilityCategory, sizeof(enum tt__CapabilityCategory), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__CapabilityCategory(struct soap *soap, enum tt__CapabilityCategory *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__CapabilityCategory);
    if (soap_out_PointerTott__CapabilityCategory(soap, tag?tag:"tt:CapabilityCategory", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 enum tt__CapabilityCategory ** SOAP_FMAC4 soap_get_PointerTott__CapabilityCategory(struct soap *soap, enum tt__CapabilityCategory **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__CapabilityCategory(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__SystemCapabilitiesExtension2(struct soap *soap, struct tt__SystemCapabilitiesExtension2 *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__SystemCapabilitiesExtension2))
        soap_serialize_tt__SystemCapabilitiesExtension2(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, int id, struct tt__SystemCapabilitiesExtension2 *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__SystemCapabilitiesExtension2);
    if (id < 0)
        return soap->error;
    return soap_out_tt__SystemCapabilitiesExtension2(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension2 ** SOAP_FMAC4 soap_in_PointerTott__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__SystemCapabilitiesExtension2 **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__SystemCapabilitiesExtension2 **)soap_malloc(soap, sizeof(struct tt__SystemCapabilitiesExtension2 *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__SystemCapabilitiesExtension2(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__SystemCapabilitiesExtension2 **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__SystemCapabilitiesExtension2, sizeof(struct tt__SystemCapabilitiesExtension2), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__SystemCapabilitiesExtension2(struct soap *soap, struct tt__SystemCapabilitiesExtension2 *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__SystemCapabilitiesExtension2);
    if (soap_out_PointerTott__SystemCapabilitiesExtension2(soap, tag?tag:"tt:SystemCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension2 ** SOAP_FMAC4 soap_get_PointerTott__SystemCapabilitiesExtension2(struct soap *soap, struct tt__SystemCapabilitiesExtension2 **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__SystemCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__SystemCapabilitiesExtension(struct soap *soap, struct tt__SystemCapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__SystemCapabilitiesExtension))
        soap_serialize_tt__SystemCapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__SystemCapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__SystemCapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__SystemCapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__SystemCapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__SystemCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__SystemCapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__SystemCapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__SystemCapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__SystemCapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__SystemCapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__SystemCapabilitiesExtension, sizeof(struct tt__SystemCapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__SystemCapabilitiesExtension(struct soap *soap, struct tt__SystemCapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__SystemCapabilitiesExtension);
    if (soap_out_PointerTott__SystemCapabilitiesExtension(soap, tag?tag:"tt:SystemCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__SystemCapabilitiesExtension(struct soap *soap, struct tt__SystemCapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__SystemCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__SecurityCapabilitiesExtension2(struct soap *soap, struct tt__SecurityCapabilitiesExtension2 *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2))
        soap_serialize_tt__SecurityCapabilitiesExtension2(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, int id, struct tt__SecurityCapabilitiesExtension2 *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__SecurityCapabilitiesExtension2);
    if (id < 0)
        return soap->error;
    return soap_out_tt__SecurityCapabilitiesExtension2(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension2 ** SOAP_FMAC4 soap_in_PointerTott__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__SecurityCapabilitiesExtension2 **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__SecurityCapabilitiesExtension2 **)soap_malloc(soap, sizeof(struct tt__SecurityCapabilitiesExtension2 *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__SecurityCapabilitiesExtension2(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__SecurityCapabilitiesExtension2 **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, sizeof(struct tt__SecurityCapabilitiesExtension2), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__SecurityCapabilitiesExtension2(struct soap *soap, struct tt__SecurityCapabilitiesExtension2 *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__SecurityCapabilitiesExtension2);
    if (soap_out_PointerTott__SecurityCapabilitiesExtension2(soap, tag?tag:"tt:SecurityCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension2 ** SOAP_FMAC4 soap_get_PointerTott__SecurityCapabilitiesExtension2(struct soap *soap, struct tt__SecurityCapabilitiesExtension2 **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__SecurityCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__SecurityCapabilitiesExtension(struct soap *soap, struct tt__SecurityCapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__SecurityCapabilitiesExtension))
        soap_serialize_tt__SecurityCapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__SecurityCapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__SecurityCapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__SecurityCapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__SecurityCapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__SecurityCapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__SecurityCapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__SecurityCapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__SecurityCapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__SecurityCapabilitiesExtension, sizeof(struct tt__SecurityCapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__SecurityCapabilitiesExtension(struct soap *soap, struct tt__SecurityCapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__SecurityCapabilitiesExtension);
    if (soap_out_PointerTott__SecurityCapabilitiesExtension(soap, tag?tag:"tt:SecurityCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__SecurityCapabilitiesExtension(struct soap *soap, struct tt__SecurityCapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__SecurityCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__NetworkCapabilitiesExtension2(struct soap *soap, struct tt__NetworkCapabilitiesExtension2 *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2))
        soap_serialize_tt__NetworkCapabilitiesExtension2(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, int id, struct tt__NetworkCapabilitiesExtension2 *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__NetworkCapabilitiesExtension2);
    if (id < 0)
        return soap->error;
    return soap_out_tt__NetworkCapabilitiesExtension2(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension2 ** SOAP_FMAC4 soap_in_PointerTott__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__NetworkCapabilitiesExtension2 **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__NetworkCapabilitiesExtension2 **)soap_malloc(soap, sizeof(struct tt__NetworkCapabilitiesExtension2 *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__NetworkCapabilitiesExtension2(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__NetworkCapabilitiesExtension2 **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, sizeof(struct tt__NetworkCapabilitiesExtension2), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__NetworkCapabilitiesExtension2(struct soap *soap, struct tt__NetworkCapabilitiesExtension2 *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__NetworkCapabilitiesExtension2);
    if (soap_out_PointerTott__NetworkCapabilitiesExtension2(soap, tag?tag:"tt:NetworkCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension2 ** SOAP_FMAC4 soap_get_PointerTott__NetworkCapabilitiesExtension2(struct soap *soap, struct tt__NetworkCapabilitiesExtension2 **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__NetworkCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__NetworkCapabilitiesExtension(struct soap *soap, struct tt__NetworkCapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__NetworkCapabilitiesExtension))
        soap_serialize_tt__NetworkCapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__NetworkCapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__NetworkCapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__NetworkCapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__NetworkCapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__NetworkCapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__NetworkCapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__NetworkCapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__NetworkCapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__NetworkCapabilitiesExtension, sizeof(struct tt__NetworkCapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__NetworkCapabilitiesExtension(struct soap *soap, struct tt__NetworkCapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__NetworkCapabilitiesExtension);
    if (soap_out_PointerTott__NetworkCapabilitiesExtension(soap, tag?tag:"tt:NetworkCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__NetworkCapabilitiesExtension(struct soap *soap, struct tt__NetworkCapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__NetworkCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__RealTimeStreamingCapabilitiesExtension(struct soap *soap, struct tt__RealTimeStreamingCapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension))
        soap_serialize_tt__RealTimeStreamingCapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__RealTimeStreamingCapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__RealTimeStreamingCapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__RealTimeStreamingCapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__RealTimeStreamingCapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__RealTimeStreamingCapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__RealTimeStreamingCapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__RealTimeStreamingCapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, sizeof(struct tt__RealTimeStreamingCapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__RealTimeStreamingCapabilitiesExtension(struct soap *soap, struct tt__RealTimeStreamingCapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__RealTimeStreamingCapabilitiesExtension);
    if (soap_out_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, tag?tag:"tt:RealTimeStreamingCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__RealTimeStreamingCapabilitiesExtension(struct soap *soap, struct tt__RealTimeStreamingCapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__ProfileCapabilities(struct soap *soap, struct tt__ProfileCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__ProfileCapabilities))
        soap_serialize_tt__ProfileCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__ProfileCapabilities(struct soap *soap, const char *tag, int id, struct tt__ProfileCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__ProfileCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__ProfileCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__ProfileCapabilities ** SOAP_FMAC4 soap_in_PointerTott__ProfileCapabilities(struct soap *soap, const char *tag, struct tt__ProfileCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__ProfileCapabilities **)soap_malloc(soap, sizeof(struct tt__ProfileCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__ProfileCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__ProfileCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__ProfileCapabilities, sizeof(struct tt__ProfileCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__ProfileCapabilities(struct soap *soap, struct tt__ProfileCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__ProfileCapabilities);
    if (soap_out_PointerTott__ProfileCapabilities(soap, tag?tag:"tt:ProfileCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ProfileCapabilities ** SOAP_FMAC4 soap_get_PointerTott__ProfileCapabilities(struct soap *soap, struct tt__ProfileCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__ProfileCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__MediaCapabilitiesExtension(struct soap *soap, struct tt__MediaCapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__MediaCapabilitiesExtension))
        soap_serialize_tt__MediaCapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__MediaCapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__MediaCapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__MediaCapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__MediaCapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__MediaCapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__MediaCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__MediaCapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__MediaCapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__MediaCapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__MediaCapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__MediaCapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__MediaCapabilitiesExtension, sizeof(struct tt__MediaCapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__MediaCapabilitiesExtension(struct soap *soap, struct tt__MediaCapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__MediaCapabilitiesExtension);
    if (soap_out_PointerTott__MediaCapabilitiesExtension(soap, tag?tag:"tt:MediaCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaCapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__MediaCapabilitiesExtension(struct soap *soap, struct tt__MediaCapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__MediaCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__RealTimeStreamingCapabilities(struct soap *soap, struct tt__RealTimeStreamingCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__RealTimeStreamingCapabilities))
        soap_serialize_tt__RealTimeStreamingCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, int id, struct tt__RealTimeStreamingCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__RealTimeStreamingCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__RealTimeStreamingCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilities ** SOAP_FMAC4 soap_in_PointerTott__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, struct tt__RealTimeStreamingCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__RealTimeStreamingCapabilities **)soap_malloc(soap, sizeof(struct tt__RealTimeStreamingCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__RealTimeStreamingCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__RealTimeStreamingCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__RealTimeStreamingCapabilities, sizeof(struct tt__RealTimeStreamingCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__RealTimeStreamingCapabilities(struct soap *soap, struct tt__RealTimeStreamingCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__RealTimeStreamingCapabilities);
    if (soap_out_PointerTott__RealTimeStreamingCapabilities(soap, tag?tag:"tt:RealTimeStreamingCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilities ** SOAP_FMAC4 soap_get_PointerTott__RealTimeStreamingCapabilities(struct soap *soap, struct tt__RealTimeStreamingCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__RealTimeStreamingCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__IOCapabilitiesExtension2(struct soap *soap, struct tt__IOCapabilitiesExtension2 *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__IOCapabilitiesExtension2))
        soap_serialize_tt__IOCapabilitiesExtension2(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__IOCapabilitiesExtension2(struct soap *soap, const char *tag, int id, struct tt__IOCapabilitiesExtension2 *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__IOCapabilitiesExtension2);
    if (id < 0)
        return soap->error;
    return soap_out_tt__IOCapabilitiesExtension2(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension2 ** SOAP_FMAC4 soap_in_PointerTott__IOCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__IOCapabilitiesExtension2 **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__IOCapabilitiesExtension2 **)soap_malloc(soap, sizeof(struct tt__IOCapabilitiesExtension2 *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__IOCapabilitiesExtension2(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__IOCapabilitiesExtension2 **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__IOCapabilitiesExtension2, sizeof(struct tt__IOCapabilitiesExtension2), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__IOCapabilitiesExtension2(struct soap *soap, struct tt__IOCapabilitiesExtension2 *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__IOCapabilitiesExtension2);
    if (soap_out_PointerTott__IOCapabilitiesExtension2(soap, tag?tag:"tt:IOCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension2 ** SOAP_FMAC4 soap_get_PointerTott__IOCapabilitiesExtension2(struct soap *soap, struct tt__IOCapabilitiesExtension2 **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__IOCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__AuxiliaryData(struct soap *soap, char **const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__AuxiliaryData))
        soap_serialize_tt__AuxiliaryData(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__AuxiliaryData(struct soap *soap, const char *tag, int id, char **const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__AuxiliaryData);
    if (id < 0)
        return soap->error;
    return soap_out_tt__AuxiliaryData(soap, tag, id, *a, type);
}

SOAP_FMAC3 char *** SOAP_FMAC4 soap_in_PointerTott__AuxiliaryData(struct soap *soap, const char *tag, char ***a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (char ***)soap_malloc(soap, sizeof(char **))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__AuxiliaryData(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (char ***)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__AuxiliaryData, sizeof(char *), 1);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__AuxiliaryData(struct soap *soap, char **const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__AuxiliaryData);
    if (soap_out_PointerTott__AuxiliaryData(soap, tag?tag:"byte", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 char *** SOAP_FMAC4 soap_get_PointerTott__AuxiliaryData(struct soap *soap, char ***p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__AuxiliaryData(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__IOCapabilitiesExtension(struct soap *soap, struct tt__IOCapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__IOCapabilitiesExtension))
        soap_serialize_tt__IOCapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__IOCapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__IOCapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__IOCapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__IOCapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__IOCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__IOCapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__IOCapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__IOCapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__IOCapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__IOCapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__IOCapabilitiesExtension, sizeof(struct tt__IOCapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__IOCapabilitiesExtension(struct soap *soap, struct tt__IOCapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__IOCapabilitiesExtension);
    if (soap_out_PointerTott__IOCapabilitiesExtension(soap, tag?tag:"tt:IOCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__IOCapabilitiesExtension(struct soap *soap, struct tt__IOCapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__IOCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__DeviceCapabilitiesExtension(struct soap *soap, struct tt__DeviceCapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__DeviceCapabilitiesExtension))
        soap_serialize_tt__DeviceCapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__DeviceCapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__DeviceCapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__DeviceCapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__DeviceCapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__DeviceCapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__DeviceCapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__DeviceCapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__DeviceCapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__DeviceCapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__DeviceCapabilitiesExtension, sizeof(struct tt__DeviceCapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__DeviceCapabilitiesExtension(struct soap *soap, struct tt__DeviceCapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__DeviceCapabilitiesExtension);
    if (soap_out_PointerTott__DeviceCapabilitiesExtension(soap, tag?tag:"tt:DeviceCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceCapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__DeviceCapabilitiesExtension(struct soap *soap, struct tt__DeviceCapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__DeviceCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__SecurityCapabilities(struct soap *soap, struct tt__SecurityCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__SecurityCapabilities))
        soap_serialize_tt__SecurityCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__SecurityCapabilities(struct soap *soap, const char *tag, int id, struct tt__SecurityCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__SecurityCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__SecurityCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__SecurityCapabilities ** SOAP_FMAC4 soap_in_PointerTott__SecurityCapabilities(struct soap *soap, const char *tag, struct tt__SecurityCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__SecurityCapabilities **)soap_malloc(soap, sizeof(struct tt__SecurityCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__SecurityCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__SecurityCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__SecurityCapabilities, sizeof(struct tt__SecurityCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__SecurityCapabilities(struct soap *soap, struct tt__SecurityCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__SecurityCapabilities);
    if (soap_out_PointerTott__SecurityCapabilities(soap, tag?tag:"tt:SecurityCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilities ** SOAP_FMAC4 soap_get_PointerTott__SecurityCapabilities(struct soap *soap, struct tt__SecurityCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__SecurityCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__IOCapabilities(struct soap *soap, struct tt__IOCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__IOCapabilities))
        soap_serialize_tt__IOCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__IOCapabilities(struct soap *soap, const char *tag, int id, struct tt__IOCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__IOCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__IOCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__IOCapabilities ** SOAP_FMAC4 soap_in_PointerTott__IOCapabilities(struct soap *soap, const char *tag, struct tt__IOCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__IOCapabilities **)soap_malloc(soap, sizeof(struct tt__IOCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__IOCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__IOCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__IOCapabilities, sizeof(struct tt__IOCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__IOCapabilities(struct soap *soap, struct tt__IOCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__IOCapabilities);
    if (soap_out_PointerTott__IOCapabilities(soap, tag?tag:"tt:IOCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilities ** SOAP_FMAC4 soap_get_PointerTott__IOCapabilities(struct soap *soap, struct tt__IOCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__IOCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__SystemCapabilities(struct soap *soap, struct tt__SystemCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__SystemCapabilities))
        soap_serialize_tt__SystemCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__SystemCapabilities(struct soap *soap, const char *tag, int id, struct tt__SystemCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__SystemCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__SystemCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__SystemCapabilities ** SOAP_FMAC4 soap_in_PointerTott__SystemCapabilities(struct soap *soap, const char *tag, struct tt__SystemCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__SystemCapabilities **)soap_malloc(soap, sizeof(struct tt__SystemCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__SystemCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__SystemCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__SystemCapabilities, sizeof(struct tt__SystemCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__SystemCapabilities(struct soap *soap, struct tt__SystemCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__SystemCapabilities);
    if (soap_out_PointerTott__SystemCapabilities(soap, tag?tag:"tt:SystemCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilities ** SOAP_FMAC4 soap_get_PointerTott__SystemCapabilities(struct soap *soap, struct tt__SystemCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__SystemCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__NetworkCapabilities(struct soap *soap, struct tt__NetworkCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__NetworkCapabilities))
        soap_serialize_tt__NetworkCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__NetworkCapabilities(struct soap *soap, const char *tag, int id, struct tt__NetworkCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__NetworkCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__NetworkCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__NetworkCapabilities ** SOAP_FMAC4 soap_in_PointerTott__NetworkCapabilities(struct soap *soap, const char *tag, struct tt__NetworkCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__NetworkCapabilities **)soap_malloc(soap, sizeof(struct tt__NetworkCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__NetworkCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__NetworkCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__NetworkCapabilities, sizeof(struct tt__NetworkCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__NetworkCapabilities(struct soap *soap, struct tt__NetworkCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__NetworkCapabilities);
    if (soap_out_PointerTott__NetworkCapabilities(soap, tag?tag:"tt:NetworkCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilities ** SOAP_FMAC4 soap_get_PointerTott__NetworkCapabilities(struct soap *soap, struct tt__NetworkCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__NetworkCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__CapabilitiesExtension2(struct soap *soap, struct tt__CapabilitiesExtension2 *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__CapabilitiesExtension2))
        soap_serialize_tt__CapabilitiesExtension2(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__CapabilitiesExtension2(struct soap *soap, const char *tag, int id, struct tt__CapabilitiesExtension2 *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__CapabilitiesExtension2);
    if (id < 0)
        return soap->error;
    return soap_out_tt__CapabilitiesExtension2(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension2 ** SOAP_FMAC4 soap_in_PointerTott__CapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__CapabilitiesExtension2 **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__CapabilitiesExtension2 **)soap_malloc(soap, sizeof(struct tt__CapabilitiesExtension2 *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__CapabilitiesExtension2(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__CapabilitiesExtension2 **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__CapabilitiesExtension2, sizeof(struct tt__CapabilitiesExtension2), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__CapabilitiesExtension2(struct soap *soap, struct tt__CapabilitiesExtension2 *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__CapabilitiesExtension2);
    if (soap_out_PointerTott__CapabilitiesExtension2(soap, tag?tag:"tt:CapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension2 ** SOAP_FMAC4 soap_get_PointerTott__CapabilitiesExtension2(struct soap *soap, struct tt__CapabilitiesExtension2 **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__CapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__AnalyticsDeviceCapabilities(struct soap *soap, struct tt__AnalyticsDeviceCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities))
        soap_serialize_tt__AnalyticsDeviceCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, int id, struct tt__AnalyticsDeviceCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__AnalyticsDeviceCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__AnalyticsDeviceCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceCapabilities ** SOAP_FMAC4 soap_in_PointerTott__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, struct tt__AnalyticsDeviceCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__AnalyticsDeviceCapabilities **)soap_malloc(soap, sizeof(struct tt__AnalyticsDeviceCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__AnalyticsDeviceCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__AnalyticsDeviceCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, sizeof(struct tt__AnalyticsDeviceCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__AnalyticsDeviceCapabilities(struct soap *soap, struct tt__AnalyticsDeviceCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__AnalyticsDeviceCapabilities);
    if (soap_out_PointerTott__AnalyticsDeviceCapabilities(soap, tag?tag:"tt:AnalyticsDeviceCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceCapabilities ** SOAP_FMAC4 soap_get_PointerTott__AnalyticsDeviceCapabilities(struct soap *soap, struct tt__AnalyticsDeviceCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__AnalyticsDeviceCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__ReceiverCapabilities(struct soap *soap, struct tt__ReceiverCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__ReceiverCapabilities))
        soap_serialize_tt__ReceiverCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__ReceiverCapabilities(struct soap *soap, const char *tag, int id, struct tt__ReceiverCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__ReceiverCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__ReceiverCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__ReceiverCapabilities ** SOAP_FMAC4 soap_in_PointerTott__ReceiverCapabilities(struct soap *soap, const char *tag, struct tt__ReceiverCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__ReceiverCapabilities **)soap_malloc(soap, sizeof(struct tt__ReceiverCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__ReceiverCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__ReceiverCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__ReceiverCapabilities, sizeof(struct tt__ReceiverCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__ReceiverCapabilities(struct soap *soap, struct tt__ReceiverCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__ReceiverCapabilities);
    if (soap_out_PointerTott__ReceiverCapabilities(soap, tag?tag:"tt:ReceiverCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReceiverCapabilities ** SOAP_FMAC4 soap_get_PointerTott__ReceiverCapabilities(struct soap *soap, struct tt__ReceiverCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__ReceiverCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__ReplayCapabilities(struct soap *soap, struct tt__ReplayCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__ReplayCapabilities))
        soap_serialize_tt__ReplayCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__ReplayCapabilities(struct soap *soap, const char *tag, int id, struct tt__ReplayCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__ReplayCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__ReplayCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__ReplayCapabilities ** SOAP_FMAC4 soap_in_PointerTott__ReplayCapabilities(struct soap *soap, const char *tag, struct tt__ReplayCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__ReplayCapabilities **)soap_malloc(soap, sizeof(struct tt__ReplayCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__ReplayCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__ReplayCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__ReplayCapabilities, sizeof(struct tt__ReplayCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__ReplayCapabilities(struct soap *soap, struct tt__ReplayCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__ReplayCapabilities);
    if (soap_out_PointerTott__ReplayCapabilities(soap, tag?tag:"tt:ReplayCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReplayCapabilities ** SOAP_FMAC4 soap_get_PointerTott__ReplayCapabilities(struct soap *soap, struct tt__ReplayCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__ReplayCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__SearchCapabilities(struct soap *soap, struct tt__SearchCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__SearchCapabilities))
        soap_serialize_tt__SearchCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__SearchCapabilities(struct soap *soap, const char *tag, int id, struct tt__SearchCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__SearchCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__SearchCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__SearchCapabilities ** SOAP_FMAC4 soap_in_PointerTott__SearchCapabilities(struct soap *soap, const char *tag, struct tt__SearchCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__SearchCapabilities **)soap_malloc(soap, sizeof(struct tt__SearchCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__SearchCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__SearchCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__SearchCapabilities, sizeof(struct tt__SearchCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__SearchCapabilities(struct soap *soap, struct tt__SearchCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__SearchCapabilities);
    if (soap_out_PointerTott__SearchCapabilities(soap, tag?tag:"tt:SearchCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SearchCapabilities ** SOAP_FMAC4 soap_get_PointerTott__SearchCapabilities(struct soap *soap, struct tt__SearchCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__SearchCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__RecordingCapabilities(struct soap *soap, struct tt__RecordingCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__RecordingCapabilities))
        soap_serialize_tt__RecordingCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__RecordingCapabilities(struct soap *soap, const char *tag, int id, struct tt__RecordingCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__RecordingCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__RecordingCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__RecordingCapabilities ** SOAP_FMAC4 soap_in_PointerTott__RecordingCapabilities(struct soap *soap, const char *tag, struct tt__RecordingCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__RecordingCapabilities **)soap_malloc(soap, sizeof(struct tt__RecordingCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__RecordingCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__RecordingCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__RecordingCapabilities, sizeof(struct tt__RecordingCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__RecordingCapabilities(struct soap *soap, struct tt__RecordingCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__RecordingCapabilities);
    if (soap_out_PointerTott__RecordingCapabilities(soap, tag?tag:"tt:RecordingCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingCapabilities ** SOAP_FMAC4 soap_get_PointerTott__RecordingCapabilities(struct soap *soap, struct tt__RecordingCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__RecordingCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__DisplayCapabilities(struct soap *soap, struct tt__DisplayCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__DisplayCapabilities))
        soap_serialize_tt__DisplayCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__DisplayCapabilities(struct soap *soap, const char *tag, int id, struct tt__DisplayCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__DisplayCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__DisplayCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__DisplayCapabilities ** SOAP_FMAC4 soap_in_PointerTott__DisplayCapabilities(struct soap *soap, const char *tag, struct tt__DisplayCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__DisplayCapabilities **)soap_malloc(soap, sizeof(struct tt__DisplayCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__DisplayCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__DisplayCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__DisplayCapabilities, sizeof(struct tt__DisplayCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__DisplayCapabilities(struct soap *soap, struct tt__DisplayCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__DisplayCapabilities);
    if (soap_out_PointerTott__DisplayCapabilities(soap, tag?tag:"tt:DisplayCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DisplayCapabilities ** SOAP_FMAC4 soap_get_PointerTott__DisplayCapabilities(struct soap *soap, struct tt__DisplayCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__DisplayCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__DeviceIOCapabilities(struct soap *soap, struct tt__DeviceIOCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__DeviceIOCapabilities))
        soap_serialize_tt__DeviceIOCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__DeviceIOCapabilities(struct soap *soap, const char *tag, int id, struct tt__DeviceIOCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__DeviceIOCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__DeviceIOCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__DeviceIOCapabilities ** SOAP_FMAC4 soap_in_PointerTott__DeviceIOCapabilities(struct soap *soap, const char *tag, struct tt__DeviceIOCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__DeviceIOCapabilities **)soap_malloc(soap, sizeof(struct tt__DeviceIOCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__DeviceIOCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__DeviceIOCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__DeviceIOCapabilities, sizeof(struct tt__DeviceIOCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__DeviceIOCapabilities(struct soap *soap, struct tt__DeviceIOCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__DeviceIOCapabilities);
    if (soap_out_PointerTott__DeviceIOCapabilities(soap, tag?tag:"tt:DeviceIOCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceIOCapabilities ** SOAP_FMAC4 soap_get_PointerTott__DeviceIOCapabilities(struct soap *soap, struct tt__DeviceIOCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__DeviceIOCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__CapabilitiesExtension(struct soap *soap, struct tt__CapabilitiesExtension *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__CapabilitiesExtension))
        soap_serialize_tt__CapabilitiesExtension(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__CapabilitiesExtension(struct soap *soap, const char *tag, int id, struct tt__CapabilitiesExtension *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__CapabilitiesExtension);
    if (id < 0)
        return soap->error;
    return soap_out_tt__CapabilitiesExtension(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension ** SOAP_FMAC4 soap_in_PointerTott__CapabilitiesExtension(struct soap *soap, const char *tag, struct tt__CapabilitiesExtension **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__CapabilitiesExtension **)soap_malloc(soap, sizeof(struct tt__CapabilitiesExtension *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__CapabilitiesExtension(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__CapabilitiesExtension **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__CapabilitiesExtension, sizeof(struct tt__CapabilitiesExtension), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__CapabilitiesExtension(struct soap *soap, struct tt__CapabilitiesExtension *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__CapabilitiesExtension);
    if (soap_out_PointerTott__CapabilitiesExtension(soap, tag?tag:"tt:CapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension ** SOAP_FMAC4 soap_get_PointerTott__CapabilitiesExtension(struct soap *soap, struct tt__CapabilitiesExtension **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__CapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__PTZCapabilities(struct soap *soap, struct tt__PTZCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__PTZCapabilities))
        soap_serialize_tt__PTZCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__PTZCapabilities(struct soap *soap, const char *tag, int id, struct tt__PTZCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__PTZCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__PTZCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__PTZCapabilities ** SOAP_FMAC4 soap_in_PointerTott__PTZCapabilities(struct soap *soap, const char *tag, struct tt__PTZCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__PTZCapabilities **)soap_malloc(soap, sizeof(struct tt__PTZCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__PTZCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__PTZCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__PTZCapabilities, sizeof(struct tt__PTZCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__PTZCapabilities(struct soap *soap, struct tt__PTZCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__PTZCapabilities);
    if (soap_out_PointerTott__PTZCapabilities(soap, tag?tag:"tt:PTZCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZCapabilities ** SOAP_FMAC4 soap_get_PointerTott__PTZCapabilities(struct soap *soap, struct tt__PTZCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__PTZCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__MediaCapabilities(struct soap *soap, struct tt__MediaCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__MediaCapabilities))
        soap_serialize_tt__MediaCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__MediaCapabilities(struct soap *soap, const char *tag, int id, struct tt__MediaCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__MediaCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__MediaCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__MediaCapabilities ** SOAP_FMAC4 soap_in_PointerTott__MediaCapabilities(struct soap *soap, const char *tag, struct tt__MediaCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__MediaCapabilities **)soap_malloc(soap, sizeof(struct tt__MediaCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__MediaCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__MediaCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__MediaCapabilities, sizeof(struct tt__MediaCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__MediaCapabilities(struct soap *soap, struct tt__MediaCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__MediaCapabilities);
    if (soap_out_PointerTott__MediaCapabilities(soap, tag?tag:"tt:MediaCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaCapabilities ** SOAP_FMAC4 soap_get_PointerTott__MediaCapabilities(struct soap *soap, struct tt__MediaCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__MediaCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__ImagingCapabilities(struct soap *soap, struct tt__ImagingCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__ImagingCapabilities))
        soap_serialize_tt__ImagingCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__ImagingCapabilities(struct soap *soap, const char *tag, int id, struct tt__ImagingCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__ImagingCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__ImagingCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__ImagingCapabilities ** SOAP_FMAC4 soap_in_PointerTott__ImagingCapabilities(struct soap *soap, const char *tag, struct tt__ImagingCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__ImagingCapabilities **)soap_malloc(soap, sizeof(struct tt__ImagingCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__ImagingCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__ImagingCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__ImagingCapabilities, sizeof(struct tt__ImagingCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__ImagingCapabilities(struct soap *soap, struct tt__ImagingCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__ImagingCapabilities);
    if (soap_out_PointerTott__ImagingCapabilities(soap, tag?tag:"tt:ImagingCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingCapabilities ** SOAP_FMAC4 soap_get_PointerTott__ImagingCapabilities(struct soap *soap, struct tt__ImagingCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__ImagingCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__EventCapabilities(struct soap *soap, struct tt__EventCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__EventCapabilities))
        soap_serialize_tt__EventCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__EventCapabilities(struct soap *soap, const char *tag, int id, struct tt__EventCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__EventCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__EventCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__EventCapabilities ** SOAP_FMAC4 soap_in_PointerTott__EventCapabilities(struct soap *soap, const char *tag, struct tt__EventCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__EventCapabilities **)soap_malloc(soap, sizeof(struct tt__EventCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__EventCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__EventCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__EventCapabilities, sizeof(struct tt__EventCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__EventCapabilities(struct soap *soap, struct tt__EventCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__EventCapabilities);
    if (soap_out_PointerTott__EventCapabilities(soap, tag?tag:"tt:EventCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EventCapabilities ** SOAP_FMAC4 soap_get_PointerTott__EventCapabilities(struct soap *soap, struct tt__EventCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__EventCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__DeviceCapabilities(struct soap *soap, struct tt__DeviceCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__DeviceCapabilities))
        soap_serialize_tt__DeviceCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__DeviceCapabilities(struct soap *soap, const char *tag, int id, struct tt__DeviceCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__DeviceCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__DeviceCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__DeviceCapabilities ** SOAP_FMAC4 soap_in_PointerTott__DeviceCapabilities(struct soap *soap, const char *tag, struct tt__DeviceCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__DeviceCapabilities **)soap_malloc(soap, sizeof(struct tt__DeviceCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__DeviceCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__DeviceCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__DeviceCapabilities, sizeof(struct tt__DeviceCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__DeviceCapabilities(struct soap *soap, struct tt__DeviceCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__DeviceCapabilities);
    if (soap_out_PointerTott__DeviceCapabilities(soap, tag?tag:"tt:DeviceCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceCapabilities ** SOAP_FMAC4 soap_get_PointerTott__DeviceCapabilities(struct soap *soap, struct tt__DeviceCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__DeviceCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTott__AnalyticsCapabilities(struct soap *soap, struct tt__AnalyticsCapabilities *const*a)
{
    if (!soap_reference(soap, *a, SOAP_TYPE_tt__AnalyticsCapabilities))
        soap_serialize_tt__AnalyticsCapabilities(soap, *a);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTott__AnalyticsCapabilities(struct soap *soap, const char *tag, int id, struct tt__AnalyticsCapabilities *const*a, const char *type)
{
    id = soap_element_id(soap, tag, id, *a, NULL, 0, type, SOAP_TYPE_tt__AnalyticsCapabilities);
    if (id < 0)
        return soap->error;
    return soap_out_tt__AnalyticsCapabilities(soap, tag, id, *a, type);
}

SOAP_FMAC3 struct tt__AnalyticsCapabilities ** SOAP_FMAC4 soap_in_PointerTott__AnalyticsCapabilities(struct soap *soap, const char *tag, struct tt__AnalyticsCapabilities **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
        return NULL;
    if (!a)
        if (!(a = (struct tt__AnalyticsCapabilities **)soap_malloc(soap, sizeof(struct tt__AnalyticsCapabilities *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_tt__AnalyticsCapabilities(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (struct tt__AnalyticsCapabilities **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_tt__AnalyticsCapabilities, sizeof(struct tt__AnalyticsCapabilities), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTott__AnalyticsCapabilities(struct soap *soap, struct tt__AnalyticsCapabilities *const*a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_PointerTott__AnalyticsCapabilities);
    if (soap_out_PointerTott__AnalyticsCapabilities(soap, tag?tag:"tt:AnalyticsCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsCapabilities ** SOAP_FMAC4 soap_get_PointerTott__AnalyticsCapabilities(struct soap *soap, struct tt__AnalyticsCapabilities **p, const char *tag, const char *type)
{
    if ((p = soap_in_PointerTott__AnalyticsCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}


SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemCapabilitiesExtension2(struct soap *soap, struct tt__SystemCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemCapabilitiesExtension2(struct soap *soap, const struct tt__SystemCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__SystemCapabilitiesExtension2 *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension2), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__SystemCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__SystemCapabilitiesExtension2 *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__SystemCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension2, sizeof(struct tt__SystemCapabilitiesExtension2), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__SystemCapabilitiesExtension2(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__SystemCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilitiesExtension2, 0, sizeof(struct tt__SystemCapabilitiesExtension2), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemCapabilitiesExtension2(struct soap *soap, const struct tt__SystemCapabilitiesExtension2 *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilitiesExtension2);
    if (soap_out_tt__SystemCapabilitiesExtension2(soap, tag?tag:"tt:SystemCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__SystemCapabilitiesExtension2(struct soap *soap, struct tt__SystemCapabilitiesExtension2 *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__SystemCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemCapabilitiesExtension(struct soap *soap, struct tt__SystemCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
    a->HttpFirmwareUpgrade = NULL;
    a->HttpSystemBackup = NULL;
    a->HttpSystemLogging = NULL;
    a->HttpSupportInformation = NULL;
    a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemCapabilitiesExtension(struct soap *soap, const struct tt__SystemCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
    soap_serialize_PointerToxsd__boolean(soap, &a->HttpFirmwareUpgrade);
    soap_serialize_PointerToxsd__boolean(soap, &a->HttpSystemBackup);
    soap_serialize_PointerToxsd__boolean(soap, &a->HttpSystemLogging);
    soap_serialize_PointerToxsd__boolean(soap, &a->HttpSupportInformation);
    soap_serialize_PointerTott__SystemCapabilitiesExtension2(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__SystemCapabilitiesExtension *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    if (soap_out_PointerToxsd__boolean(soap, "tt:HttpFirmwareUpgrade", -1, &a->HttpFirmwareUpgrade, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:HttpSystemBackup", -1, &a->HttpSystemBackup, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:HttpSystemLogging", -1, &a->HttpSystemLogging, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:HttpSupportInformation", -1, &a->HttpSupportInformation, ""))
        return soap->error;
    if (soap_out_PointerTott__SystemCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 enum xsd__boolean ** SOAP_FMAC4 soap_in_PointerToxsd__boolean(struct soap *soap, const char *tag, enum xsd__boolean **a, const char *type)
{
    if (soap_element_begin_in(soap, tag, 1, NULL))
    return NULL;
    if (!a)
        if (!(a = (enum xsd__boolean **)soap_malloc(soap, sizeof(enum xsd__boolean *))))
            return NULL;
    *a = NULL;
    if (!soap->null && *soap->href != '#')
    {	soap_revert(soap);
    if (!(*a = soap_in_xsd__boolean(soap, tag, *a, type)))
        return NULL;
    }
    else
    {	a = (enum xsd__boolean **)soap_id_lookup(soap, soap->href, (void**)a, SOAP_TYPE_xsd__boolean, sizeof(enum xsd__boolean), 0);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__SystemCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__SystemCapabilitiesExtension *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    size_t soap_flag_HttpFirmwareUpgrade = 1;
    size_t soap_flag_HttpSystemBackup = 1;
    size_t soap_flag_HttpSystemLogging = 1;
    size_t soap_flag_HttpSupportInformation = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__SystemCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilitiesExtension, sizeof(struct tt__SystemCapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__SystemCapabilitiesExtension(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_HttpFirmwareUpgrade && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:HttpFirmwareUpgrade", &a->HttpFirmwareUpgrade, "xsd:boolean"))
            {	soap_flag_HttpFirmwareUpgrade--;
        continue;
        }
        if (soap_flag_HttpSystemBackup && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:HttpSystemBackup", &a->HttpSystemBackup, "xsd:boolean"))
            {	soap_flag_HttpSystemBackup--;
        continue;
        }
        if (soap_flag_HttpSystemLogging && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:HttpSystemLogging", &a->HttpSystemLogging, "xsd:boolean"))
            {	soap_flag_HttpSystemLogging--;
        continue;
        }
        if (soap_flag_HttpSupportInformation && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:HttpSupportInformation", &a->HttpSupportInformation, "xsd:boolean"))
            {	soap_flag_HttpSupportInformation--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__SystemCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:SystemCapabilitiesExtension2"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__SystemCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilitiesExtension, 0, sizeof(struct tt__SystemCapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemCapabilitiesExtension(struct soap *soap, const struct tt__SystemCapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilitiesExtension);
    if (soap_out_tt__SystemCapabilitiesExtension(soap, tag?tag:"tt:SystemCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__SystemCapabilitiesExtension(struct soap *soap, struct tt__SystemCapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__SystemCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SecurityCapabilitiesExtension2(struct soap *soap, struct tt__SecurityCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__boolean(soap, &a->Dot1X);
    a->__sizeSupportedEAPMethod = 0;
    a->SupportedEAPMethod = NULL;
    soap_default_xsd__boolean(soap, &a->RemoteUserHandling);
    a->__size = 0;
    a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SecurityCapabilitiesExtension2(struct soap *soap, const struct tt__SecurityCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_embedded(soap, &a->Dot1X, SOAP_TYPE_xsd__boolean);
    if (a->SupportedEAPMethod)
    {	int i;
    for (i = 0; i < a->__sizeSupportedEAPMethod; i++)
    {
        soap_embedded(soap, a->SupportedEAPMethod + i, SOAP_TYPE_int);
    }
    }
    soap_embedded(soap, &a->RemoteUserHandling, SOAP_TYPE_xsd__boolean);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__SecurityCapabilitiesExtension2 *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2), type))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:Dot1X", -1, &a->Dot1X, ""))
        return soap->error;
    if (a->SupportedEAPMethod)
    {	int i;
    for (i = 0; i < a->__sizeSupportedEAPMethod; i++)
        if (soap_out_int(soap, "tt:SupportedEAPMethod", -1, a->SupportedEAPMethod + i, ""))
            return soap->error;
    }
    if (soap_out_xsd__boolean(soap, "tt:RemoteUserHandling", -1, &a->RemoteUserHandling, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__SecurityCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__SecurityCapabilitiesExtension2 *a, const char *type)
{
    size_t soap_flag_Dot1X = 1;
    struct soap_blist *soap_blist_SupportedEAPMethod = NULL;
    size_t soap_flag_RemoteUserHandling = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__SecurityCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, sizeof(struct tt__SecurityCapabilitiesExtension2), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__SecurityCapabilitiesExtension2(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_Dot1X && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:Dot1X", &a->Dot1X, "xsd:boolean"))
            {	soap_flag_Dot1X--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedEAPMethod", 1, NULL))
        {	if (a->SupportedEAPMethod == NULL)
        {	if (soap_blist_SupportedEAPMethod == NULL)
        soap_blist_SupportedEAPMethod = soap_new_block(soap);
        a->SupportedEAPMethod = (int *)soap_push_block(soap, soap_blist_SupportedEAPMethod, sizeof(int));
        if (a->SupportedEAPMethod == NULL)
            return NULL;
        soap_default_int(soap, a->SupportedEAPMethod);
        }
        soap_revert(soap);
        if (soap_in_int(soap, "tt:SupportedEAPMethod", a->SupportedEAPMethod, "xsd:int"))
        {	a->__sizeSupportedEAPMethod++;
        a->SupportedEAPMethod = NULL;
        continue;
        }
        }
        if (soap_flag_RemoteUserHandling && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:RemoteUserHandling", &a->RemoteUserHandling, "xsd:boolean"))
            {	soap_flag_RemoteUserHandling--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->SupportedEAPMethod)
            soap_pop_block(soap, soap_blist_SupportedEAPMethod);
        if (a->__sizeSupportedEAPMethod)
            a->SupportedEAPMethod = (int *)soap_save_block(soap, soap_blist_SupportedEAPMethod, NULL, 1);
        else
        {	a->SupportedEAPMethod = NULL;
        if (soap_blist_SupportedEAPMethod)
            soap_end_block(soap, soap_blist_SupportedEAPMethod);
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__SecurityCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilitiesExtension2, 0, sizeof(struct tt__SecurityCapabilitiesExtension2), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Dot1X > 0 || soap_flag_RemoteUserHandling > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SecurityCapabilitiesExtension2(struct soap *soap, const struct tt__SecurityCapabilitiesExtension2 *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilitiesExtension2);
    if (soap_out_tt__SecurityCapabilitiesExtension2(soap, tag?tag:"tt:SecurityCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__SecurityCapabilitiesExtension2(struct soap *soap, struct tt__SecurityCapabilitiesExtension2 *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__SecurityCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SecurityCapabilitiesExtension(struct soap *soap, struct tt__SecurityCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__boolean(soap, &a->TLS1_x002e0);
    a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SecurityCapabilitiesExtension(struct soap *soap, const struct tt__SecurityCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_embedded(soap, &a->TLS1_x002e0, SOAP_TYPE_xsd__boolean);
    soap_serialize_PointerTott__SecurityCapabilitiesExtension2(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__SecurityCapabilitiesExtension *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension), type))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:TLS1.0", -1, &a->TLS1_x002e0, ""))
        return soap->error;
    if (soap_out_PointerTott__SecurityCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__SecurityCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__SecurityCapabilitiesExtension *a, const char *type)
{
    size_t soap_flag_TLS1_x002e0 = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__SecurityCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilitiesExtension, sizeof(struct tt__SecurityCapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__SecurityCapabilitiesExtension(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_TLS1_x002e0 && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:TLS1.0", &a->TLS1_x002e0, "xsd:boolean"))
            {	soap_flag_TLS1_x002e0--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__SecurityCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:SecurityCapabilitiesExtension2"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__SecurityCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilitiesExtension, 0, sizeof(struct tt__SecurityCapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TLS1_x002e0 > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SecurityCapabilitiesExtension(struct soap *soap, const struct tt__SecurityCapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilitiesExtension);
    if (soap_out_tt__SecurityCapabilitiesExtension(soap, tag?tag:"tt:SecurityCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__SecurityCapabilitiesExtension(struct soap *soap, struct tt__SecurityCapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__SecurityCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkCapabilitiesExtension2(struct soap *soap, struct tt__NetworkCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkCapabilitiesExtension2(struct soap *soap, const struct tt__NetworkCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__NetworkCapabilitiesExtension2 *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__NetworkCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__NetworkCapabilitiesExtension2 *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__NetworkCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, sizeof(struct tt__NetworkCapabilitiesExtension2), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__NetworkCapabilitiesExtension2(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__NetworkCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilitiesExtension2, 0, sizeof(struct tt__NetworkCapabilitiesExtension2), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkCapabilitiesExtension2(struct soap *soap, const struct tt__NetworkCapabilitiesExtension2 *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilitiesExtension2);
    if (soap_out_tt__NetworkCapabilitiesExtension2(soap, tag?tag:"tt:NetworkCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__NetworkCapabilitiesExtension2(struct soap *soap, struct tt__NetworkCapabilitiesExtension2 *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__NetworkCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkCapabilitiesExtension(struct soap *soap, struct tt__NetworkCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
    a->Dot11Configuration = NULL;
    a->Extension = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkCapabilitiesExtension(struct soap *soap, const struct tt__NetworkCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
    soap_serialize_PointerToxsd__boolean(soap, &a->Dot11Configuration);
    soap_serialize_PointerTott__NetworkCapabilitiesExtension2(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__NetworkCapabilitiesExtension *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    if (soap_out_PointerToxsd__boolean(soap, "tt:Dot11Configuration", -1, &a->Dot11Configuration, ""))
        return soap->error;
    if (soap_out_PointerTott__NetworkCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__NetworkCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__NetworkCapabilitiesExtension *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    size_t soap_flag_Dot11Configuration = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__NetworkCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilitiesExtension, sizeof(struct tt__NetworkCapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__NetworkCapabilitiesExtension(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_Dot11Configuration && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:Dot11Configuration", &a->Dot11Configuration, "xsd:boolean"))
            {	soap_flag_Dot11Configuration--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__NetworkCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:NetworkCapabilitiesExtension2"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__NetworkCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilitiesExtension, 0, sizeof(struct tt__NetworkCapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkCapabilitiesExtension(struct soap *soap, const struct tt__NetworkCapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilitiesExtension);
    if (soap_out_tt__NetworkCapabilitiesExtension(soap, tag?tag:"tt:NetworkCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__NetworkCapabilitiesExtension(struct soap *soap, struct tt__NetworkCapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__NetworkCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, struct tt__RealTimeStreamingCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const struct tt__RealTimeStreamingCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__RealTimeStreamingCapabilitiesExtension *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__RealTimeStreamingCapabilitiesExtension *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__RealTimeStreamingCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, sizeof(struct tt__RealTimeStreamingCapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__RealTimeStreamingCapabilitiesExtension(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__RealTimeStreamingCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension, 0, sizeof(struct tt__RealTimeStreamingCapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, const struct tt__RealTimeStreamingCapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RealTimeStreamingCapabilitiesExtension);
    if (soap_out_tt__RealTimeStreamingCapabilitiesExtension(soap, tag?tag:"tt:RealTimeStreamingCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__RealTimeStreamingCapabilitiesExtension(struct soap *soap, struct tt__RealTimeStreamingCapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__RealTimeStreamingCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ProfileCapabilities(struct soap *soap, struct tt__ProfileCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_int(soap, &a->MaximumNumberOfProfiles);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ProfileCapabilities(struct soap *soap, const struct tt__ProfileCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_embedded(soap, &a->MaximumNumberOfProfiles, SOAP_TYPE_int);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ProfileCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ProfileCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ProfileCapabilities), type))
        return soap->error;
    if (soap_out_int(soap, "tt:MaximumNumberOfProfiles", -1, &a->MaximumNumberOfProfiles, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ProfileCapabilities * SOAP_FMAC4 soap_in_tt__ProfileCapabilities(struct soap *soap, const char *tag, struct tt__ProfileCapabilities *a, const char *type)
{
    size_t soap_flag_MaximumNumberOfProfiles = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__ProfileCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ProfileCapabilities, sizeof(struct tt__ProfileCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__ProfileCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_MaximumNumberOfProfiles && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:MaximumNumberOfProfiles", &a->MaximumNumberOfProfiles, "xsd:int"))
            {	soap_flag_MaximumNumberOfProfiles--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__ProfileCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ProfileCapabilities, 0, sizeof(struct tt__ProfileCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_MaximumNumberOfProfiles > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ProfileCapabilities(struct soap *soap, const struct tt__ProfileCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ProfileCapabilities);
    if (soap_out_tt__ProfileCapabilities(soap, tag?tag:"tt:ProfileCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ProfileCapabilities * SOAP_FMAC4 soap_get_tt__ProfileCapabilities(struct soap *soap, struct tt__ProfileCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__ProfileCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MediaCapabilitiesExtension(struct soap *soap, struct tt__MediaCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->ProfileCapabilities = NULL;
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MediaCapabilitiesExtension(struct soap *soap, const struct tt__MediaCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_PointerTott__ProfileCapabilities(soap, &a->ProfileCapabilities);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__MediaCapabilitiesExtension *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaCapabilitiesExtension), type))
        return soap->error;
    if (a->ProfileCapabilities)
    {	if (soap_out_PointerTott__ProfileCapabilities(soap, "tt:ProfileCapabilities", -1, &a->ProfileCapabilities, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:ProfileCapabilities"))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MediaCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__MediaCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__MediaCapabilitiesExtension *a, const char *type)
{
    size_t soap_flag_ProfileCapabilities = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__MediaCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaCapabilitiesExtension, sizeof(struct tt__MediaCapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__MediaCapabilitiesExtension(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_ProfileCapabilities && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__ProfileCapabilities(soap, "tt:ProfileCapabilities", &a->ProfileCapabilities, "tt:ProfileCapabilities"))
            {	soap_flag_ProfileCapabilities--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__MediaCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaCapabilitiesExtension, 0, sizeof(struct tt__MediaCapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_ProfileCapabilities > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MediaCapabilitiesExtension(struct soap *soap, const struct tt__MediaCapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MediaCapabilitiesExtension);
    if (soap_out_tt__MediaCapabilitiesExtension(soap, tag?tag:"tt:MediaCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__MediaCapabilitiesExtension(struct soap *soap, struct tt__MediaCapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__MediaCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RealTimeStreamingCapabilities(struct soap *soap, struct tt__RealTimeStreamingCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->RTPMulticast = NULL;
    a->RTP_USCORETCP = NULL;
    a->RTP_USCORERTSP_USCORETCP = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RealTimeStreamingCapabilities(struct soap *soap, const struct tt__RealTimeStreamingCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_PointerToxsd__boolean(soap, &a->RTPMulticast);
    soap_serialize_PointerToxsd__boolean(soap, &a->RTP_USCORETCP);
    soap_serialize_PointerToxsd__boolean(soap, &a->RTP_USCORERTSP_USCORETCP);
    soap_serialize_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, int id, const struct tt__RealTimeStreamingCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilities), type))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:RTPMulticast", -1, &a->RTPMulticast, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:RTP_TCP", -1, &a->RTP_USCORETCP, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:RTP_RTSP_TCP", -1, &a->RTP_USCORERTSP_USCORETCP, ""))
        return soap->error;
    if (soap_out_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilities * SOAP_FMAC4 soap_in_tt__RealTimeStreamingCapabilities(struct soap *soap, const char *tag, struct tt__RealTimeStreamingCapabilities *a, const char *type)
{
    size_t soap_flag_RTPMulticast = 1;
    size_t soap_flag_RTP_USCORETCP = 1;
    size_t soap_flag_RTP_USCORERTSP_USCORETCP = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__RealTimeStreamingCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RealTimeStreamingCapabilities, sizeof(struct tt__RealTimeStreamingCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__RealTimeStreamingCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_RTPMulticast && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:RTPMulticast", &a->RTPMulticast, "xsd:boolean"))
            {	soap_flag_RTPMulticast--;
        continue;
        }
        if (soap_flag_RTP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:RTP_TCP", &a->RTP_USCORETCP, "xsd:boolean"))
            {	soap_flag_RTP_USCORETCP--;
        continue;
        }
        if (soap_flag_RTP_USCORERTSP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:RTP_RTSP_TCP", &a->RTP_USCORERTSP_USCORETCP, "xsd:boolean"))
            {	soap_flag_RTP_USCORERTSP_USCORETCP--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__RealTimeStreamingCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:RealTimeStreamingCapabilitiesExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__RealTimeStreamingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RealTimeStreamingCapabilities, 0, sizeof(struct tt__RealTimeStreamingCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RealTimeStreamingCapabilities(struct soap *soap, const struct tt__RealTimeStreamingCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RealTimeStreamingCapabilities);
    if (soap_out_tt__RealTimeStreamingCapabilities(soap, tag?tag:"tt:RealTimeStreamingCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RealTimeStreamingCapabilities * SOAP_FMAC4 soap_get_tt__RealTimeStreamingCapabilities(struct soap *soap, struct tt__RealTimeStreamingCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__RealTimeStreamingCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IOCapabilitiesExtension2(struct soap *soap, struct tt__IOCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IOCapabilitiesExtension2(struct soap *soap, const struct tt__IOCapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__IOCapabilitiesExtension2 *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilitiesExtension2), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__IOCapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__IOCapabilitiesExtension2 *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__IOCapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilitiesExtension2, sizeof(struct tt__IOCapabilitiesExtension2), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__IOCapabilitiesExtension2(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__IOCapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilitiesExtension2, 0, sizeof(struct tt__IOCapabilitiesExtension2), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IOCapabilitiesExtension2(struct soap *soap, const struct tt__IOCapabilitiesExtension2 *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilitiesExtension2);
    if (soap_out_tt__IOCapabilitiesExtension2(soap, tag?tag:"tt:IOCapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__IOCapabilitiesExtension2(struct soap *soap, struct tt__IOCapabilitiesExtension2 *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__IOCapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IOCapabilitiesExtension(struct soap *soap, struct tt__IOCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
    a->Auxiliary = NULL;
    a->__sizeAuxiliaryCommands = 0;
    a->AuxiliaryCommands = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IOCapabilitiesExtension(struct soap *soap, const struct tt__IOCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
    soap_serialize_PointerToxsd__boolean(soap, &a->Auxiliary);
    if (a->AuxiliaryCommands)
    {	int i;
    for (i = 0; i < a->__sizeAuxiliaryCommands; i++)
    {
        soap_serialize_tt__AuxiliaryData(soap, a->AuxiliaryCommands + i);
    }
    }
    soap_serialize_PointerTott__IOCapabilitiesExtension2(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__IOCapabilitiesExtension *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilitiesExtension), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    if (soap_out_PointerToxsd__boolean(soap, "tt:Auxiliary", -1, &a->Auxiliary, ""))
        return soap->error;
    if (a->AuxiliaryCommands)
    {	int i;
    for (i = 0; i < a->__sizeAuxiliaryCommands; i++)
        if (soap_out_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", -1, a->AuxiliaryCommands + i, ""))
            return soap->error;
    }
    if (a->Extension)
    {	if (soap_out_PointerTott__IOCapabilitiesExtension2(soap, "tt:Extension", -1, &a->Extension, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:Extension"))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__IOCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__IOCapabilitiesExtension *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    size_t soap_flag_Auxiliary = 1;
    struct soap_blist *soap_blist_AuxiliaryCommands = NULL;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__IOCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilitiesExtension, sizeof(struct tt__IOCapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__IOCapabilitiesExtension(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_Auxiliary && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:Auxiliary", &a->Auxiliary, "xsd:boolean"))
            {	soap_flag_Auxiliary--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:AuxiliaryCommands", 1, NULL))
        {	if (a->AuxiliaryCommands == NULL)
        {	if (soap_blist_AuxiliaryCommands == NULL)
        soap_blist_AuxiliaryCommands = soap_new_block(soap);
        a->AuxiliaryCommands = (char **)soap_push_block(soap, soap_blist_AuxiliaryCommands, sizeof(char *));
        if (a->AuxiliaryCommands == NULL)
            return NULL;
        *a->AuxiliaryCommands = NULL;
        }
        soap_revert(soap);
        if (soap_in_tt__AuxiliaryData(soap, "tt:AuxiliaryCommands", a->AuxiliaryCommands, "tt:AuxiliaryData"))
        {	a->__sizeAuxiliaryCommands++;
        a->AuxiliaryCommands = NULL;
        continue;
        }
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__IOCapabilitiesExtension2(soap, "tt:Extension", &a->Extension, "tt:IOCapabilitiesExtension2"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (a->AuxiliaryCommands)
            soap_pop_block(soap, soap_blist_AuxiliaryCommands);
        if (a->__sizeAuxiliaryCommands)
            a->AuxiliaryCommands = (char **)soap_save_block(soap, soap_blist_AuxiliaryCommands, NULL, 1);
        else
        {	a->AuxiliaryCommands = NULL;
        if (soap_blist_AuxiliaryCommands)
            soap_end_block(soap, soap_blist_AuxiliaryCommands);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__IOCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilitiesExtension, 0, sizeof(struct tt__IOCapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_Extension > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IOCapabilitiesExtension(struct soap *soap, const struct tt__IOCapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilitiesExtension);
    if (soap_out_tt__IOCapabilitiesExtension(soap, tag?tag:"tt:IOCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__IOCapabilitiesExtension(struct soap *soap, struct tt__IOCapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__IOCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DeviceCapabilitiesExtension(struct soap *soap, struct tt__DeviceCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DeviceCapabilitiesExtension(struct soap *soap, const struct tt__DeviceCapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__DeviceCapabilitiesExtension *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceCapabilitiesExtension), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DeviceCapabilitiesExtension * SOAP_FMAC4 soap_in_tt__DeviceCapabilitiesExtension(struct soap *soap, const char *tag, struct tt__DeviceCapabilitiesExtension *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__DeviceCapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceCapabilitiesExtension, sizeof(struct tt__DeviceCapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__DeviceCapabilitiesExtension(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__DeviceCapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceCapabilitiesExtension, 0, sizeof(struct tt__DeviceCapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DeviceCapabilitiesExtension(struct soap *soap, const struct tt__DeviceCapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DeviceCapabilitiesExtension);
    if (soap_out_tt__DeviceCapabilitiesExtension(soap, tag?tag:"tt:DeviceCapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceCapabilitiesExtension * SOAP_FMAC4 soap_get_tt__DeviceCapabilitiesExtension(struct soap *soap, struct tt__DeviceCapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__DeviceCapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SecurityCapabilities(struct soap *soap, struct tt__SecurityCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__boolean(soap, &a->TLS1_x002e1);
    soap_default_xsd__boolean(soap, &a->TLS1_x002e2);
    soap_default_xsd__boolean(soap, &a->OnboardKeyGeneration);
    soap_default_xsd__boolean(soap, &a->AccessPolicyConfig);
    soap_default_xsd__boolean(soap, &a->X_x002e509Token);
    soap_default_xsd__boolean(soap, &a->SAMLToken);
    soap_default_xsd__boolean(soap, &a->KerberosToken);
    soap_default_xsd__boolean(soap, &a->RELToken);
    a->__size = 0;
    a->__any = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SecurityCapabilities(struct soap *soap, const struct tt__SecurityCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_embedded(soap, &a->TLS1_x002e1, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->TLS1_x002e2, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->OnboardKeyGeneration, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->AccessPolicyConfig, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->X_x002e509Token, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->SAMLToken, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->KerberosToken, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->RELToken, SOAP_TYPE_xsd__boolean);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
    soap_serialize_PointerTott__SecurityCapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SecurityCapabilities(struct soap *soap, const char *tag, int id, const struct tt__SecurityCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SecurityCapabilities), type))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:TLS1.1", -1, &a->TLS1_x002e1, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:TLS1.2", -1, &a->TLS1_x002e2, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:OnboardKeyGeneration", -1, &a->OnboardKeyGeneration, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:AccessPolicyConfig", -1, &a->AccessPolicyConfig, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:X.509Token", -1, &a->X_x002e509Token, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:SAMLToken", -1, &a->SAMLToken, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:KerberosToken", -1, &a->KerberosToken, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:RELToken", -1, &a->RELToken, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    if (soap_out_PointerTott__SecurityCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SecurityCapabilities * SOAP_FMAC4 soap_in_tt__SecurityCapabilities(struct soap *soap, const char *tag, struct tt__SecurityCapabilities *a, const char *type)
{
    size_t soap_flag_TLS1_x002e1 = 1;
    size_t soap_flag_TLS1_x002e2 = 1;
    size_t soap_flag_OnboardKeyGeneration = 1;
    size_t soap_flag_AccessPolicyConfig = 1;
    size_t soap_flag_X_x002e509Token = 1;
    size_t soap_flag_SAMLToken = 1;
    size_t soap_flag_KerberosToken = 1;
    size_t soap_flag_RELToken = 1;
    struct soap_blist *soap_blist___any = NULL;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__SecurityCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SecurityCapabilities, sizeof(struct tt__SecurityCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__SecurityCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_TLS1_x002e1 && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:TLS1.1", &a->TLS1_x002e1, "xsd:boolean"))
            {	soap_flag_TLS1_x002e1--;
        continue;
        }
        if (soap_flag_TLS1_x002e2 && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:TLS1.2", &a->TLS1_x002e2, "xsd:boolean"))
            {	soap_flag_TLS1_x002e2--;
        continue;
        }
        if (soap_flag_OnboardKeyGeneration && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:OnboardKeyGeneration", &a->OnboardKeyGeneration, "xsd:boolean"))
            {	soap_flag_OnboardKeyGeneration--;
        continue;
        }
        if (soap_flag_AccessPolicyConfig && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:AccessPolicyConfig", &a->AccessPolicyConfig, "xsd:boolean"))
            {	soap_flag_AccessPolicyConfig--;
        continue;
        }
        if (soap_flag_X_x002e509Token && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:X.509Token", &a->X_x002e509Token, "xsd:boolean"))
            {	soap_flag_X_x002e509Token--;
        continue;
        }
        if (soap_flag_SAMLToken && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:SAMLToken", &a->SAMLToken, "xsd:boolean"))
            {	soap_flag_SAMLToken--;
        continue;
        }
        if (soap_flag_KerberosToken && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:KerberosToken", &a->KerberosToken, "xsd:boolean"))
            {	soap_flag_KerberosToken--;
        continue;
        }
        if (soap_flag_RELToken && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:RELToken", &a->RELToken, "xsd:boolean"))
            {	soap_flag_RELToken--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__SecurityCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:SecurityCapabilitiesExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__SecurityCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SecurityCapabilities, 0, sizeof(struct tt__SecurityCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_TLS1_x002e1 > 0 || soap_flag_TLS1_x002e2 > 0 || soap_flag_OnboardKeyGeneration > 0 || soap_flag_AccessPolicyConfig > 0 || soap_flag_X_x002e509Token > 0 || soap_flag_SAMLToken > 0 || soap_flag_KerberosToken > 0 || soap_flag_RELToken > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SecurityCapabilities(struct soap *soap, const struct tt__SecurityCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SecurityCapabilities);
    if (soap_out_tt__SecurityCapabilities(soap, tag?tag:"tt:SecurityCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SecurityCapabilities * SOAP_FMAC4 soap_get_tt__SecurityCapabilities(struct soap *soap, struct tt__SecurityCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__SecurityCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__IOCapabilities(struct soap *soap, struct tt__IOCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->InputConnectors = NULL;
    a->RelayOutputs = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__IOCapabilities(struct soap *soap, const struct tt__IOCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_PointerToint(soap, &a->InputConnectors);
    soap_serialize_PointerToint(soap, &a->RelayOutputs);
    soap_serialize_PointerTott__IOCapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__IOCapabilities(struct soap *soap, const char *tag, int id, const struct tt__IOCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__IOCapabilities), type))
        return soap->error;
    if (soap_out_PointerToint(soap, "tt:InputConnectors", -1, &a->InputConnectors, ""))
        return soap->error;
    if (soap_out_PointerToint(soap, "tt:RelayOutputs", -1, &a->RelayOutputs, ""))
        return soap->error;
    if (soap_out_PointerTott__IOCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__IOCapabilities * SOAP_FMAC4 soap_in_tt__IOCapabilities(struct soap *soap, const char *tag, struct tt__IOCapabilities *a, const char *type)
{
    size_t soap_flag_InputConnectors = 1;
    size_t soap_flag_RelayOutputs = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__IOCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__IOCapabilities, sizeof(struct tt__IOCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__IOCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_InputConnectors && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToint(soap, "tt:InputConnectors", &a->InputConnectors, "xsd:int"))
            {	soap_flag_InputConnectors--;
        continue;
        }
        if (soap_flag_RelayOutputs && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToint(soap, "tt:RelayOutputs", &a->RelayOutputs, "xsd:int"))
            {	soap_flag_RelayOutputs--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__IOCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:IOCapabilitiesExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__IOCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__IOCapabilities, 0, sizeof(struct tt__IOCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__IOCapabilities(struct soap *soap, const struct tt__IOCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__IOCapabilities);
    if (soap_out_tt__IOCapabilities(soap, tag?tag:"tt:IOCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__IOCapabilities * SOAP_FMAC4 soap_get_tt__IOCapabilities(struct soap *soap, struct tt__IOCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__IOCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SystemCapabilities(struct soap *soap, struct tt__SystemCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__boolean(soap, &a->DiscoveryResolve);
    soap_default_xsd__boolean(soap, &a->DiscoveryBye);
    soap_default_xsd__boolean(soap, &a->RemoteDiscovery);
    soap_default_xsd__boolean(soap, &a->SystemBackup);
    soap_default_xsd__boolean(soap, &a->SystemLogging);
    soap_default_xsd__boolean(soap, &a->FirmwareUpgrade);
    a->__sizeSupportedVersions = 0;
    a->SupportedVersions = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SystemCapabilities(struct soap *soap, const struct tt__SystemCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_embedded(soap, &a->DiscoveryResolve, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->DiscoveryBye, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->RemoteDiscovery, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->SystemBackup, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->SystemLogging, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->FirmwareUpgrade, SOAP_TYPE_xsd__boolean);
    if (a->SupportedVersions)
    {	int i;
    for (i = 0; i < a->__sizeSupportedVersions; i++)
    {
        soap_embedded(soap, a->SupportedVersions + i, SOAP_TYPE_tt__OnvifVersion);
        soap_serialize_tt__OnvifVersion(soap, a->SupportedVersions + i);
    }
    }
    soap_serialize_PointerTott__SystemCapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SystemCapabilities(struct soap *soap, const char *tag, int id, const struct tt__SystemCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SystemCapabilities), type))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:DiscoveryResolve", -1, &a->DiscoveryResolve, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:DiscoveryBye", -1, &a->DiscoveryBye, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:RemoteDiscovery", -1, &a->RemoteDiscovery, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:SystemBackup", -1, &a->SystemBackup, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:SystemLogging", -1, &a->SystemLogging, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:FirmwareUpgrade", -1, &a->FirmwareUpgrade, ""))
        return soap->error;
    if (a->SupportedVersions)
    {	int i;
    for (i = 0; i < a->__sizeSupportedVersions; i++)
        if (soap_out_tt__OnvifVersion(soap, "tt:SupportedVersions", -1, a->SupportedVersions + i, ""))
            return soap->error;
    }
    if (soap_out_PointerTott__SystemCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SystemCapabilities * SOAP_FMAC4 soap_in_tt__SystemCapabilities(struct soap *soap, const char *tag, struct tt__SystemCapabilities *a, const char *type)
{
    size_t soap_flag_DiscoveryResolve = 1;
    size_t soap_flag_DiscoveryBye = 1;
    size_t soap_flag_RemoteDiscovery = 1;
    size_t soap_flag_SystemBackup = 1;
    size_t soap_flag_SystemLogging = 1;
    size_t soap_flag_FirmwareUpgrade = 1;
    struct soap_blist *soap_blist_SupportedVersions = NULL;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__SystemCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SystemCapabilities, sizeof(struct tt__SystemCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__SystemCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_DiscoveryResolve && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:DiscoveryResolve", &a->DiscoveryResolve, "xsd:boolean"))
            {	soap_flag_DiscoveryResolve--;
        continue;
        }
        if (soap_flag_DiscoveryBye && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:DiscoveryBye", &a->DiscoveryBye, "xsd:boolean"))
            {	soap_flag_DiscoveryBye--;
        continue;
        }
        if (soap_flag_RemoteDiscovery && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:RemoteDiscovery", &a->RemoteDiscovery, "xsd:boolean"))
            {	soap_flag_RemoteDiscovery--;
        continue;
        }
        if (soap_flag_SystemBackup && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:SystemBackup", &a->SystemBackup, "xsd:boolean"))
            {	soap_flag_SystemBackup--;
        continue;
        }
        if (soap_flag_SystemLogging && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:SystemLogging", &a->SystemLogging, "xsd:boolean"))
            {	soap_flag_SystemLogging--;
        continue;
        }
        if (soap_flag_FirmwareUpgrade && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:FirmwareUpgrade", &a->FirmwareUpgrade, "xsd:boolean"))
            {	soap_flag_FirmwareUpgrade--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_element_begin_in(soap, "tt:SupportedVersions", 1, NULL))
        {	if (a->SupportedVersions == NULL)
        {	if (soap_blist_SupportedVersions == NULL)
        soap_blist_SupportedVersions = soap_new_block(soap);
        a->SupportedVersions = (struct tt__OnvifVersion *)soap_push_block(soap, soap_blist_SupportedVersions, sizeof(struct tt__OnvifVersion));
        if (a->SupportedVersions == NULL)
            return NULL;
        soap_default_tt__OnvifVersion(soap, a->SupportedVersions);
        }
        soap_revert(soap);
        if (soap_in_tt__OnvifVersion(soap, "tt:SupportedVersions", a->SupportedVersions, "tt:OnvifVersion"))
        {	a->__sizeSupportedVersions++;
        a->SupportedVersions = NULL;
        continue;
        }
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__SystemCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:SystemCapabilitiesExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->SupportedVersions)
            soap_pop_block(soap, soap_blist_SupportedVersions);
        if (a->__sizeSupportedVersions)
            a->SupportedVersions = (struct tt__OnvifVersion *)soap_save_block(soap, soap_blist_SupportedVersions, NULL, 1);
        else
        {	a->SupportedVersions = NULL;
        if (soap_blist_SupportedVersions)
            soap_end_block(soap, soap_blist_SupportedVersions);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__SystemCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SystemCapabilities, 0, sizeof(struct tt__SystemCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_DiscoveryResolve > 0 || soap_flag_DiscoveryBye > 0 || soap_flag_RemoteDiscovery > 0 || soap_flag_SystemBackup > 0 || soap_flag_SystemLogging > 0 || soap_flag_FirmwareUpgrade > 0 || a->__sizeSupportedVersions < 1))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SystemCapabilities(struct soap *soap, const struct tt__SystemCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SystemCapabilities);
    if (soap_out_tt__SystemCapabilities(soap, tag?tag:"tt:SystemCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SystemCapabilities * SOAP_FMAC4 soap_get_tt__SystemCapabilities(struct soap *soap, struct tt__SystemCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__SystemCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__NetworkCapabilities(struct soap *soap, struct tt__NetworkCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->IPFilter = NULL;
    a->ZeroConfiguration = NULL;
    a->IPVersion6 = NULL;
    a->DynDNS = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__NetworkCapabilities(struct soap *soap, const struct tt__NetworkCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_PointerToxsd__boolean(soap, &a->IPFilter);
    soap_serialize_PointerToxsd__boolean(soap, &a->ZeroConfiguration);
    soap_serialize_PointerToxsd__boolean(soap, &a->IPVersion6);
    soap_serialize_PointerToxsd__boolean(soap, &a->DynDNS);
    soap_serialize_PointerTott__NetworkCapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__NetworkCapabilities(struct soap *soap, const char *tag, int id, const struct tt__NetworkCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__NetworkCapabilities), type))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:IPFilter", -1, &a->IPFilter, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:ZeroConfiguration", -1, &a->ZeroConfiguration, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:IPVersion6", -1, &a->IPVersion6, ""))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:DynDNS", -1, &a->DynDNS, ""))
        return soap->error;
    if (soap_out_PointerTott__NetworkCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__NetworkCapabilities * SOAP_FMAC4 soap_in_tt__NetworkCapabilities(struct soap *soap, const char *tag, struct tt__NetworkCapabilities *a, const char *type)
{
    size_t soap_flag_IPFilter = 1;
    size_t soap_flag_ZeroConfiguration = 1;
    size_t soap_flag_IPVersion6 = 1;
    size_t soap_flag_DynDNS = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__NetworkCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__NetworkCapabilities, sizeof(struct tt__NetworkCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__NetworkCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_IPFilter && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:IPFilter", &a->IPFilter, "xsd:boolean"))
            {	soap_flag_IPFilter--;
        continue;
        }
        if (soap_flag_ZeroConfiguration && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:ZeroConfiguration", &a->ZeroConfiguration, "xsd:boolean"))
            {	soap_flag_ZeroConfiguration--;
        continue;
        }
        if (soap_flag_IPVersion6 && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:IPVersion6", &a->IPVersion6, "xsd:boolean"))
            {	soap_flag_IPVersion6--;
        continue;
        }
        if (soap_flag_DynDNS && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:DynDNS", &a->DynDNS, "xsd:boolean"))
            {	soap_flag_DynDNS--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__NetworkCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:NetworkCapabilitiesExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__NetworkCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__NetworkCapabilities, 0, sizeof(struct tt__NetworkCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__NetworkCapabilities(struct soap *soap, const struct tt__NetworkCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__NetworkCapabilities);
    if (soap_out_tt__NetworkCapabilities(soap, tag?tag:"tt:NetworkCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__NetworkCapabilities * SOAP_FMAC4 soap_get_tt__NetworkCapabilities(struct soap *soap, struct tt__NetworkCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__NetworkCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CapabilitiesExtension2(struct soap *soap, struct tt__CapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CapabilitiesExtension2(struct soap *soap, const struct tt__CapabilitiesExtension2 *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilitiesExtension2(struct soap *soap, const char *tag, int id, const struct tt__CapabilitiesExtension2 *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CapabilitiesExtension2), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension2 * SOAP_FMAC4 soap_in_tt__CapabilitiesExtension2(struct soap *soap, const char *tag, struct tt__CapabilitiesExtension2 *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__CapabilitiesExtension2 *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilitiesExtension2, sizeof(struct tt__CapabilitiesExtension2), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__CapabilitiesExtension2(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__CapabilitiesExtension2 *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CapabilitiesExtension2, 0, sizeof(struct tt__CapabilitiesExtension2), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CapabilitiesExtension2(struct soap *soap, const struct tt__CapabilitiesExtension2 *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CapabilitiesExtension2);
    if (soap_out_tt__CapabilitiesExtension2(soap, tag?tag:"tt:CapabilitiesExtension2", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension2 * SOAP_FMAC4 soap_get_tt__CapabilitiesExtension2(struct soap *soap, struct tt__CapabilitiesExtension2 *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__CapabilitiesExtension2(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsDeviceCapabilities(struct soap *soap, struct tt__AnalyticsDeviceCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    a->RuleSupport = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsDeviceCapabilities(struct soap *soap, const struct tt__AnalyticsDeviceCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_serialize_PointerToxsd__boolean(soap, &a->RuleSupport);
    soap_serialize_PointerTott__AnalyticsDeviceExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsDeviceCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_PointerToxsd__boolean(soap, "tt:RuleSupport", -1, &a->RuleSupport, ""))
        return soap->error;
    if (soap_out_PointerTott__AnalyticsDeviceExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceCapabilities * SOAP_FMAC4 soap_in_tt__AnalyticsDeviceCapabilities(struct soap *soap, const char *tag, struct tt__AnalyticsDeviceCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_RuleSupport = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__AnalyticsDeviceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, sizeof(struct tt__AnalyticsDeviceCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__AnalyticsDeviceCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_RuleSupport && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerToxsd__boolean(soap, "tt:RuleSupport", &a->RuleSupport, "xsd:boolean"))
            {	soap_flag_RuleSupport--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__AnalyticsDeviceExtension(soap, "tt:Extension", &a->Extension, "tt:AnalyticsDeviceExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__AnalyticsDeviceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsDeviceCapabilities, 0, sizeof(struct tt__AnalyticsDeviceCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsDeviceCapabilities(struct soap *soap, const struct tt__AnalyticsDeviceCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsDeviceCapabilities);
    if (soap_out_tt__AnalyticsDeviceCapabilities(soap, tag?tag:"tt:AnalyticsDeviceCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsDeviceCapabilities * SOAP_FMAC4 soap_get_tt__AnalyticsDeviceCapabilities(struct soap *soap, struct tt__AnalyticsDeviceCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__AnalyticsDeviceCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReceiverCapabilities(struct soap *soap, struct tt__ReceiverCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_xsd__boolean(soap, &a->RTP_USCOREMulticast);
    soap_default_xsd__boolean(soap, &a->RTP_USCORETCP);
    soap_default_xsd__boolean(soap, &a->RTP_USCORERTSP_USCORETCP);
    soap_default_int(soap, &a->SupportedReceivers);
    soap_default_int(soap, &a->MaximumRTSPURILength);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReceiverCapabilities(struct soap *soap, const struct tt__ReceiverCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_embedded(soap, &a->RTP_USCOREMulticast, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->RTP_USCORETCP, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->RTP_USCORERTSP_USCORETCP, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->SupportedReceivers, SOAP_TYPE_int);
    soap_embedded(soap, &a->MaximumRTSPURILength, SOAP_TYPE_int);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReceiverCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ReceiverCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReceiverCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:RTP_Multicast", -1, &a->RTP_USCOREMulticast, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:RTP_TCP", -1, &a->RTP_USCORETCP, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:RTP_RTSP_TCP", -1, &a->RTP_USCORERTSP_USCORETCP, ""))
        return soap->error;
    if (soap_out_int(soap, "tt:SupportedReceivers", -1, &a->SupportedReceivers, ""))
        return soap->error;
    if (soap_out_int(soap, "tt:MaximumRTSPURILength", -1, &a->MaximumRTSPURILength, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReceiverCapabilities * SOAP_FMAC4 soap_in_tt__ReceiverCapabilities(struct soap *soap, const char *tag, struct tt__ReceiverCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_RTP_USCOREMulticast = 1;
    size_t soap_flag_RTP_USCORETCP = 1;
    size_t soap_flag_RTP_USCORERTSP_USCORETCP = 1;
    size_t soap_flag_SupportedReceivers = 1;
    size_t soap_flag_MaximumRTSPURILength = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__ReceiverCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReceiverCapabilities, sizeof(struct tt__ReceiverCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__ReceiverCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_RTP_USCOREMulticast && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:RTP_Multicast", &a->RTP_USCOREMulticast, "xsd:boolean"))
            {	soap_flag_RTP_USCOREMulticast--;
        continue;
        }
        if (soap_flag_RTP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:RTP_TCP", &a->RTP_USCORETCP, "xsd:boolean"))
            {	soap_flag_RTP_USCORETCP--;
        continue;
        }
        if (soap_flag_RTP_USCORERTSP_USCORETCP && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:RTP_RTSP_TCP", &a->RTP_USCORERTSP_USCORETCP, "xsd:boolean"))
            {	soap_flag_RTP_USCORERTSP_USCORETCP--;
        continue;
        }
        if (soap_flag_SupportedReceivers && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:SupportedReceivers", &a->SupportedReceivers, "xsd:int"))
            {	soap_flag_SupportedReceivers--;
        continue;
        }
        if (soap_flag_MaximumRTSPURILength && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:MaximumRTSPURILength", &a->MaximumRTSPURILength, "xsd:int"))
            {	soap_flag_MaximumRTSPURILength--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__ReceiverCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReceiverCapabilities, 0, sizeof(struct tt__ReceiverCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_RTP_USCOREMulticast > 0 || soap_flag_RTP_USCORETCP > 0 || soap_flag_RTP_USCORERTSP_USCORETCP > 0 || soap_flag_SupportedReceivers > 0 || soap_flag_MaximumRTSPURILength > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReceiverCapabilities(struct soap *soap, const struct tt__ReceiverCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReceiverCapabilities);
    if (soap_out_tt__ReceiverCapabilities(soap, tag?tag:"tt:ReceiverCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReceiverCapabilities * SOAP_FMAC4 soap_get_tt__ReceiverCapabilities(struct soap *soap, struct tt__ReceiverCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__ReceiverCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ReplayCapabilities(struct soap *soap, struct tt__ReplayCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ReplayCapabilities(struct soap *soap, const struct tt__ReplayCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ReplayCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ReplayCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ReplayCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ReplayCapabilities * SOAP_FMAC4 soap_in_tt__ReplayCapabilities(struct soap *soap, const char *tag, struct tt__ReplayCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__ReplayCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ReplayCapabilities, sizeof(struct tt__ReplayCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__ReplayCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__ReplayCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ReplayCapabilities, 0, sizeof(struct tt__ReplayCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ReplayCapabilities(struct soap *soap, const struct tt__ReplayCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ReplayCapabilities);
    if (soap_out_tt__ReplayCapabilities(soap, tag?tag:"tt:ReplayCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ReplayCapabilities * SOAP_FMAC4 soap_get_tt__ReplayCapabilities(struct soap *soap, struct tt__ReplayCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__ReplayCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__SearchCapabilities(struct soap *soap, struct tt__SearchCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_xsd__boolean(soap, &a->MetadataSearch);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__SearchCapabilities(struct soap *soap, const struct tt__SearchCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_embedded(soap, &a->MetadataSearch, SOAP_TYPE_xsd__boolean);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__SearchCapabilities(struct soap *soap, const char *tag, int id, const struct tt__SearchCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__SearchCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:MetadataSearch", -1, &a->MetadataSearch, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__SearchCapabilities * SOAP_FMAC4 soap_in_tt__SearchCapabilities(struct soap *soap, const char *tag, struct tt__SearchCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_MetadataSearch = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__SearchCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__SearchCapabilities, sizeof(struct tt__SearchCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__SearchCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_MetadataSearch && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:MetadataSearch", &a->MetadataSearch, "xsd:boolean"))
            {	soap_flag_MetadataSearch--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__SearchCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__SearchCapabilities, 0, sizeof(struct tt__SearchCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_MetadataSearch > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__SearchCapabilities(struct soap *soap, const struct tt__SearchCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__SearchCapabilities);
    if (soap_out_tt__SearchCapabilities(soap, tag?tag:"tt:SearchCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__SearchCapabilities * SOAP_FMAC4 soap_get_tt__SearchCapabilities(struct soap *soap, struct tt__SearchCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__SearchCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__RecordingCapabilities(struct soap *soap, struct tt__RecordingCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_xsd__boolean(soap, &a->ReceiverSource);
    soap_default_xsd__boolean(soap, &a->MediaProfileSource);
    soap_default_xsd__boolean(soap, &a->DynamicRecordings);
    soap_default_xsd__boolean(soap, &a->DynamicTracks);
    soap_default_int(soap, &a->MaxStringLength);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__RecordingCapabilities(struct soap *soap, const struct tt__RecordingCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_embedded(soap, &a->ReceiverSource, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->MediaProfileSource, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->DynamicRecordings, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->DynamicTracks, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->MaxStringLength, SOAP_TYPE_int);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__RecordingCapabilities(struct soap *soap, const char *tag, int id, const struct tt__RecordingCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__RecordingCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:ReceiverSource", -1, &a->ReceiverSource, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:MediaProfileSource", -1, &a->MediaProfileSource, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:DynamicRecordings", -1, &a->DynamicRecordings, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:DynamicTracks", -1, &a->DynamicTracks, ""))
        return soap->error;
    if (soap_out_int(soap, "tt:MaxStringLength", -1, &a->MaxStringLength, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__RecordingCapabilities * SOAP_FMAC4 soap_in_tt__RecordingCapabilities(struct soap *soap, const char *tag, struct tt__RecordingCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_ReceiverSource = 1;
    size_t soap_flag_MediaProfileSource = 1;
    size_t soap_flag_DynamicRecordings = 1;
    size_t soap_flag_DynamicTracks = 1;
    size_t soap_flag_MaxStringLength = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__RecordingCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__RecordingCapabilities, sizeof(struct tt__RecordingCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__RecordingCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_ReceiverSource && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:ReceiverSource", &a->ReceiverSource, "xsd:boolean"))
            {	soap_flag_ReceiverSource--;
        continue;
        }
        if (soap_flag_MediaProfileSource && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:MediaProfileSource", &a->MediaProfileSource, "xsd:boolean"))
            {	soap_flag_MediaProfileSource--;
        continue;
        }
        if (soap_flag_DynamicRecordings && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:DynamicRecordings", &a->DynamicRecordings, "xsd:boolean"))
            {	soap_flag_DynamicRecordings--;
        continue;
        }
        if (soap_flag_DynamicTracks && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:DynamicTracks", &a->DynamicTracks, "xsd:boolean"))
            {	soap_flag_DynamicTracks--;
        continue;
        }
        if (soap_flag_MaxStringLength && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:MaxStringLength", &a->MaxStringLength, "xsd:int"))
            {	soap_flag_MaxStringLength--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__RecordingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__RecordingCapabilities, 0, sizeof(struct tt__RecordingCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_ReceiverSource > 0 || soap_flag_MediaProfileSource > 0 || soap_flag_DynamicRecordings > 0 || soap_flag_DynamicTracks > 0 || soap_flag_MaxStringLength > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__RecordingCapabilities(struct soap *soap, const struct tt__RecordingCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__RecordingCapabilities);
    if (soap_out_tt__RecordingCapabilities(soap, tag?tag:"tt:RecordingCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__RecordingCapabilities * SOAP_FMAC4 soap_get_tt__RecordingCapabilities(struct soap *soap, struct tt__RecordingCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__RecordingCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DisplayCapabilities(struct soap *soap, struct tt__DisplayCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_xsd__boolean(soap, &a->FixedLayout);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DisplayCapabilities(struct soap *soap, const struct tt__DisplayCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_embedded(soap, &a->FixedLayout, SOAP_TYPE_xsd__boolean);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DisplayCapabilities(struct soap *soap, const char *tag, int id, const struct tt__DisplayCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DisplayCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:FixedLayout", -1, &a->FixedLayout, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DisplayCapabilities * SOAP_FMAC4 soap_in_tt__DisplayCapabilities(struct soap *soap, const char *tag, struct tt__DisplayCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_FixedLayout = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__DisplayCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DisplayCapabilities, sizeof(struct tt__DisplayCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__DisplayCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_FixedLayout && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:FixedLayout", &a->FixedLayout, "xsd:boolean"))
            {	soap_flag_FixedLayout--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__DisplayCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DisplayCapabilities, 0, sizeof(struct tt__DisplayCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_FixedLayout > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DisplayCapabilities(struct soap *soap, const struct tt__DisplayCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DisplayCapabilities);
    if (soap_out_tt__DisplayCapabilities(soap, tag?tag:"tt:DisplayCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DisplayCapabilities * SOAP_FMAC4 soap_get_tt__DisplayCapabilities(struct soap *soap, struct tt__DisplayCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__DisplayCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DeviceIOCapabilities(struct soap *soap, struct tt__DeviceIOCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_int(soap, &a->VideoSources);
    soap_default_int(soap, &a->VideoOutputs);
    soap_default_int(soap, &a->AudioSources);
    soap_default_int(soap, &a->AudioOutputs);
    soap_default_int(soap, &a->RelayOutputs);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DeviceIOCapabilities(struct soap *soap, const struct tt__DeviceIOCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_embedded(soap, &a->VideoSources, SOAP_TYPE_int);
    soap_embedded(soap, &a->VideoOutputs, SOAP_TYPE_int);
    soap_embedded(soap, &a->AudioSources, SOAP_TYPE_int);
    soap_embedded(soap, &a->AudioOutputs, SOAP_TYPE_int);
    soap_embedded(soap, &a->RelayOutputs, SOAP_TYPE_int);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceIOCapabilities(struct soap *soap, const char *tag, int id, const struct tt__DeviceIOCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceIOCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_int(soap, "tt:VideoSources", -1, &a->VideoSources, ""))
        return soap->error;
    if (soap_out_int(soap, "tt:VideoOutputs", -1, &a->VideoOutputs, ""))
        return soap->error;
    if (soap_out_int(soap, "tt:AudioSources", -1, &a->AudioSources, ""))
        return soap->error;
    if (soap_out_int(soap, "tt:AudioOutputs", -1, &a->AudioOutputs, ""))
        return soap->error;
    if (soap_out_int(soap, "tt:RelayOutputs", -1, &a->RelayOutputs, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DeviceIOCapabilities * SOAP_FMAC4 soap_in_tt__DeviceIOCapabilities(struct soap *soap, const char *tag, struct tt__DeviceIOCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_VideoSources = 1;
    size_t soap_flag_VideoOutputs = 1;
    size_t soap_flag_AudioSources = 1;
    size_t soap_flag_AudioOutputs = 1;
    size_t soap_flag_RelayOutputs = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__DeviceIOCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceIOCapabilities, sizeof(struct tt__DeviceIOCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__DeviceIOCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_VideoSources && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:VideoSources", &a->VideoSources, "xsd:int"))
            {	soap_flag_VideoSources--;
        continue;
        }
        if (soap_flag_VideoOutputs && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:VideoOutputs", &a->VideoOutputs, "xsd:int"))
            {	soap_flag_VideoOutputs--;
        continue;
        }
        if (soap_flag_AudioSources && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:AudioSources", &a->AudioSources, "xsd:int"))
            {	soap_flag_AudioSources--;
        continue;
        }
        if (soap_flag_AudioOutputs && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:AudioOutputs", &a->AudioOutputs, "xsd:int"))
            {	soap_flag_AudioOutputs--;
        continue;
        }
        if (soap_flag_RelayOutputs && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_int(soap, "tt:RelayOutputs", &a->RelayOutputs, "xsd:int"))
            {	soap_flag_RelayOutputs--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__DeviceIOCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceIOCapabilities, 0, sizeof(struct tt__DeviceIOCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_VideoSources > 0 || soap_flag_VideoOutputs > 0 || soap_flag_AudioSources > 0 || soap_flag_AudioOutputs > 0 || soap_flag_RelayOutputs > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DeviceIOCapabilities(struct soap *soap, const struct tt__DeviceIOCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DeviceIOCapabilities);
    if (soap_out_tt__DeviceIOCapabilities(soap, tag?tag:"tt:DeviceIOCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceIOCapabilities * SOAP_FMAC4 soap_get_tt__DeviceIOCapabilities(struct soap *soap, struct tt__DeviceIOCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__DeviceIOCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__CapabilitiesExtension(struct soap *soap, struct tt__CapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    a->__size = 0;
    a->__any = NULL;
    a->DeviceIO = NULL;
    a->Display = NULL;
    a->Recording = NULL;
    a->Search = NULL;
    a->Replay = NULL;
    a->Receiver = NULL;
    a->AnalyticsDevice = NULL;
    a->Extensions = NULL;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__CapabilitiesExtension(struct soap *soap, const struct tt__CapabilitiesExtension *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
    soap_serialize_PointerTott__DeviceIOCapabilities(soap, &a->DeviceIO);
    soap_serialize_PointerTott__DisplayCapabilities(soap, &a->Display);
    soap_serialize_PointerTott__RecordingCapabilities(soap, &a->Recording);
    soap_serialize_PointerTott__SearchCapabilities(soap, &a->Search);
    soap_serialize_PointerTott__ReplayCapabilities(soap, &a->Replay);
    soap_serialize_PointerTott__ReceiverCapabilities(soap, &a->Receiver);
    soap_serialize_PointerTott__AnalyticsDeviceCapabilities(soap, &a->AnalyticsDevice);
    soap_serialize_PointerTott__CapabilitiesExtension2(soap, &a->Extensions);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__CapabilitiesExtension(struct soap *soap, const char *tag, int id, const struct tt__CapabilitiesExtension *a, const char *type)
{
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__CapabilitiesExtension), type))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    if (soap_out_PointerTott__DeviceIOCapabilities(soap, "tt:DeviceIO", -1, &a->DeviceIO, ""))
        return soap->error;
    if (soap_out_PointerTott__DisplayCapabilities(soap, "tt:Display", -1, &a->Display, ""))
        return soap->error;
    if (soap_out_PointerTott__RecordingCapabilities(soap, "tt:Recording", -1, &a->Recording, ""))
        return soap->error;
    if (soap_out_PointerTott__SearchCapabilities(soap, "tt:Search", -1, &a->Search, ""))
        return soap->error;
    if (soap_out_PointerTott__ReplayCapabilities(soap, "tt:Replay", -1, &a->Replay, ""))
        return soap->error;
    if (soap_out_PointerTott__ReceiverCapabilities(soap, "tt:Receiver", -1, &a->Receiver, ""))
        return soap->error;
    if (soap_out_PointerTott__AnalyticsDeviceCapabilities(soap, "tt:AnalyticsDevice", -1, &a->AnalyticsDevice, ""))
        return soap->error;
    if (soap_out_PointerTott__CapabilitiesExtension2(soap, "tt:Extensions", -1, &a->Extensions, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension * SOAP_FMAC4 soap_in_tt__CapabilitiesExtension(struct soap *soap, const char *tag, struct tt__CapabilitiesExtension *a, const char *type)
{
    struct soap_blist *soap_blist___any = NULL;
    size_t soap_flag_DeviceIO = 1;
    size_t soap_flag_Display = 1;
    size_t soap_flag_Recording = 1;
    size_t soap_flag_Search = 1;
    size_t soap_flag_Replay = 1;
    size_t soap_flag_Receiver = 1;
    size_t soap_flag_AnalyticsDevice = 1;
    size_t soap_flag_Extensions = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__CapabilitiesExtension *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__CapabilitiesExtension, sizeof(struct tt__CapabilitiesExtension), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__CapabilitiesExtension(soap, a);
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_DeviceIO && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__DeviceIOCapabilities(soap, "tt:DeviceIO", &a->DeviceIO, "tt:DeviceIOCapabilities"))
            {	soap_flag_DeviceIO--;
        continue;
        }
        if (soap_flag_Display && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__DisplayCapabilities(soap, "tt:Display", &a->Display, "tt:DisplayCapabilities"))
            {	soap_flag_Display--;
        continue;
        }
        if (soap_flag_Recording && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__RecordingCapabilities(soap, "tt:Recording", &a->Recording, "tt:RecordingCapabilities"))
            {	soap_flag_Recording--;
        continue;
        }
        if (soap_flag_Search && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__SearchCapabilities(soap, "tt:Search", &a->Search, "tt:SearchCapabilities"))
            {	soap_flag_Search--;
        continue;
        }
        if (soap_flag_Replay && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__ReplayCapabilities(soap, "tt:Replay", &a->Replay, "tt:ReplayCapabilities"))
            {	soap_flag_Replay--;
        continue;
        }
        if (soap_flag_Receiver && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__ReceiverCapabilities(soap, "tt:Receiver", &a->Receiver, "tt:ReceiverCapabilities"))
            {	soap_flag_Receiver--;
        continue;
        }
        if (soap_flag_AnalyticsDevice && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__AnalyticsDeviceCapabilities(soap, "tt:AnalyticsDevice", &a->AnalyticsDevice, "tt:AnalyticsDeviceCapabilities"))
            {	soap_flag_AnalyticsDevice--;
        continue;
        }
        if (soap_flag_Extensions && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__CapabilitiesExtension2(soap, "tt:Extensions", &a->Extensions, "tt:CapabilitiesExtension2"))
            {	soap_flag_Extensions--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__CapabilitiesExtension *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__CapabilitiesExtension, 0, sizeof(struct tt__CapabilitiesExtension), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__CapabilitiesExtension(struct soap *soap, const struct tt__CapabilitiesExtension *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__CapabilitiesExtension);
    if (soap_out_tt__CapabilitiesExtension(soap, tag?tag:"tt:CapabilitiesExtension", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__CapabilitiesExtension * SOAP_FMAC4 soap_get_tt__CapabilitiesExtension(struct soap *soap, struct tt__CapabilitiesExtension *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__CapabilitiesExtension(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__PTZCapabilities(struct soap *soap, struct tt__PTZCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__PTZCapabilities(struct soap *soap, const struct tt__PTZCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__PTZCapabilities(struct soap *soap, const char *tag, int id, const struct tt__PTZCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__PTZCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__PTZCapabilities * SOAP_FMAC4 soap_in_tt__PTZCapabilities(struct soap *soap, const char *tag, struct tt__PTZCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__PTZCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__PTZCapabilities, sizeof(struct tt__PTZCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__PTZCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__PTZCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__PTZCapabilities, 0, sizeof(struct tt__PTZCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__PTZCapabilities(struct soap *soap, const struct tt__PTZCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__PTZCapabilities);
    if (soap_out_tt__PTZCapabilities(soap, tag?tag:"tt:PTZCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__PTZCapabilities * SOAP_FMAC4 soap_get_tt__PTZCapabilities(struct soap *soap, struct tt__PTZCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__PTZCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__MediaCapabilities(struct soap *soap, struct tt__MediaCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    a->StreamingCapabilities = NULL;
    a->__size = 0;
    a->__any = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__MediaCapabilities(struct soap *soap, const struct tt__MediaCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_serialize_PointerTott__RealTimeStreamingCapabilities(soap, &a->StreamingCapabilities);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
    soap_serialize_PointerTott__MediaCapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__MediaCapabilities(struct soap *soap, const char *tag, int id, const struct tt__MediaCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__MediaCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (a->StreamingCapabilities)
    {	if (soap_out_PointerTott__RealTimeStreamingCapabilities(soap, "tt:StreamingCapabilities", -1, &a->StreamingCapabilities, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:StreamingCapabilities"))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    if (soap_out_PointerTott__MediaCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__MediaCapabilities * SOAP_FMAC4 soap_in_tt__MediaCapabilities(struct soap *soap, const char *tag, struct tt__MediaCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_StreamingCapabilities = 1;
    struct soap_blist *soap_blist___any = NULL;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__MediaCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__MediaCapabilities, sizeof(struct tt__MediaCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__MediaCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_StreamingCapabilities && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__RealTimeStreamingCapabilities(soap, "tt:StreamingCapabilities", &a->StreamingCapabilities, "tt:RealTimeStreamingCapabilities"))
            {	soap_flag_StreamingCapabilities--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__MediaCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:MediaCapabilitiesExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__MediaCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__MediaCapabilities, 0, sizeof(struct tt__MediaCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_StreamingCapabilities > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__MediaCapabilities(struct soap *soap, const struct tt__MediaCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__MediaCapabilities);
    if (soap_out_tt__MediaCapabilities(soap, tag?tag:"tt:MediaCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__MediaCapabilities * SOAP_FMAC4 soap_get_tt__MediaCapabilities(struct soap *soap, struct tt__MediaCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__MediaCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__ImagingCapabilities(struct soap *soap, struct tt__ImagingCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__ImagingCapabilities(struct soap *soap, const struct tt__ImagingCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__ImagingCapabilities(struct soap *soap, const char *tag, int id, const struct tt__ImagingCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__ImagingCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__ImagingCapabilities * SOAP_FMAC4 soap_in_tt__ImagingCapabilities(struct soap *soap, const char *tag, struct tt__ImagingCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__ImagingCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__ImagingCapabilities, sizeof(struct tt__ImagingCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__ImagingCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__ImagingCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__ImagingCapabilities, 0, sizeof(struct tt__ImagingCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__ImagingCapabilities(struct soap *soap, const struct tt__ImagingCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__ImagingCapabilities);
    if (soap_out_tt__ImagingCapabilities(soap, tag?tag:"tt:ImagingCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__ImagingCapabilities * SOAP_FMAC4 soap_get_tt__ImagingCapabilities(struct soap *soap, struct tt__ImagingCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__ImagingCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__EventCapabilities(struct soap *soap, struct tt__EventCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_xsd__boolean(soap, &a->WSSubscriptionPolicySupport);
    soap_default_xsd__boolean(soap, &a->WSPullPointSupport);
    soap_default_xsd__boolean(soap, &a->WSPausableSubscriptionManagerInterfaceSupport);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__EventCapabilities(struct soap *soap, const struct tt__EventCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_embedded(soap, &a->WSSubscriptionPolicySupport, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->WSPullPointSupport, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->WSPausableSubscriptionManagerInterfaceSupport, SOAP_TYPE_xsd__boolean);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__EventCapabilities(struct soap *soap, const char *tag, int id, const struct tt__EventCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__EventCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:WSSubscriptionPolicySupport", -1, &a->WSSubscriptionPolicySupport, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:WSPullPointSupport", -1, &a->WSPullPointSupport, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:WSPausableSubscriptionManagerInterfaceSupport", -1, &a->WSPausableSubscriptionManagerInterfaceSupport, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__EventCapabilities * SOAP_FMAC4 soap_in_tt__EventCapabilities(struct soap *soap, const char *tag, struct tt__EventCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_WSSubscriptionPolicySupport = 1;
    size_t soap_flag_WSPullPointSupport = 1;
    size_t soap_flag_WSPausableSubscriptionManagerInterfaceSupport = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__EventCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__EventCapabilities, sizeof(struct tt__EventCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__EventCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_WSSubscriptionPolicySupport && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:WSSubscriptionPolicySupport", &a->WSSubscriptionPolicySupport, "xsd:boolean"))
            {	soap_flag_WSSubscriptionPolicySupport--;
        continue;
        }
        if (soap_flag_WSPullPointSupport && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:WSPullPointSupport", &a->WSPullPointSupport, "xsd:boolean"))
            {	soap_flag_WSPullPointSupport--;
        continue;
        }
        if (soap_flag_WSPausableSubscriptionManagerInterfaceSupport && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:WSPausableSubscriptionManagerInterfaceSupport", &a->WSPausableSubscriptionManagerInterfaceSupport, "xsd:boolean"))
            {	soap_flag_WSPausableSubscriptionManagerInterfaceSupport--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__EventCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__EventCapabilities, 0, sizeof(struct tt__EventCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_WSSubscriptionPolicySupport > 0 || soap_flag_WSPullPointSupport > 0 || soap_flag_WSPausableSubscriptionManagerInterfaceSupport > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__EventCapabilities(struct soap *soap, const struct tt__EventCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__EventCapabilities);
    if (soap_out_tt__EventCapabilities(soap, tag?tag:"tt:EventCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__EventCapabilities * SOAP_FMAC4 soap_get_tt__EventCapabilities(struct soap *soap, struct tt__EventCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__EventCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__DeviceCapabilities(struct soap *soap, struct tt__DeviceCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    a->Network = NULL;
    a->System = NULL;
    a->IO = NULL;
    a->Security = NULL;
    a->Extension = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__DeviceCapabilities(struct soap *soap, const struct tt__DeviceCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_serialize_PointerTott__NetworkCapabilities(soap, &a->Network);
    soap_serialize_PointerTott__SystemCapabilities(soap, &a->System);
    soap_serialize_PointerTott__IOCapabilities(soap, &a->IO);
    soap_serialize_PointerTott__SecurityCapabilities(soap, &a->Security);
    soap_serialize_PointerTott__DeviceCapabilitiesExtension(soap, &a->Extension);
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__DeviceCapabilities(struct soap *soap, const char *tag, int id, const struct tt__DeviceCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__DeviceCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_PointerTott__NetworkCapabilities(soap, "tt:Network", -1, &a->Network, ""))
        return soap->error;
    if (soap_out_PointerTott__SystemCapabilities(soap, "tt:System", -1, &a->System, ""))
        return soap->error;
    if (soap_out_PointerTott__IOCapabilities(soap, "tt:IO", -1, &a->IO, ""))
        return soap->error;
    if (soap_out_PointerTott__SecurityCapabilities(soap, "tt:Security", -1, &a->Security, ""))
        return soap->error;
    if (soap_out_PointerTott__DeviceCapabilitiesExtension(soap, "tt:Extension", -1, &a->Extension, ""))
        return soap->error;
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__DeviceCapabilities * SOAP_FMAC4 soap_in_tt__DeviceCapabilities(struct soap *soap, const char *tag, struct tt__DeviceCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_Network = 1;
    size_t soap_flag_System = 1;
    size_t soap_flag_IO = 1;
    size_t soap_flag_Security = 1;
    size_t soap_flag_Extension = 1;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__DeviceCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__DeviceCapabilities, sizeof(struct tt__DeviceCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__DeviceCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_Network && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__NetworkCapabilities(soap, "tt:Network", &a->Network, "tt:NetworkCapabilities"))
            {	soap_flag_Network--;
        continue;
        }
        if (soap_flag_System && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__SystemCapabilities(soap, "tt:System", &a->System, "tt:SystemCapabilities"))
            {	soap_flag_System--;
        continue;
        }
        if (soap_flag_IO && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__IOCapabilities(soap, "tt:IO", &a->IO, "tt:IOCapabilities"))
            {	soap_flag_IO--;
        continue;
        }
        if (soap_flag_Security && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__SecurityCapabilities(soap, "tt:Security", &a->Security, "tt:SecurityCapabilities"))
            {	soap_flag_Security--;
        continue;
        }
        if (soap_flag_Extension && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_PointerTott__DeviceCapabilitiesExtension(soap, "tt:Extension", &a->Extension, "tt:DeviceCapabilitiesExtension"))
            {	soap_flag_Extension--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__DeviceCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__DeviceCapabilities, 0, sizeof(struct tt__DeviceCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__DeviceCapabilities(struct soap *soap, const struct tt__DeviceCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__DeviceCapabilities);
    if (soap_out_tt__DeviceCapabilities(soap, tag?tag:"tt:DeviceCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__DeviceCapabilities * SOAP_FMAC4 soap_get_tt__DeviceCapabilities(struct soap *soap, struct tt__DeviceCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__DeviceCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

SOAP_FMAC3 void SOAP_FMAC4 soap_default_tt__AnalyticsCapabilities(struct soap *soap, struct tt__AnalyticsCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_default_xsd__anyURI(soap, &a->XAddr);
    soap_default_xsd__boolean(soap, &a->RuleSupport);
    soap_default_xsd__boolean(soap, &a->AnalyticsModuleSupport);
    a->__size = 0;
    a->__any = NULL;
    soap_default_xsd__anyAttribute(soap, &a->__anyAttribute);
}

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_tt__AnalyticsCapabilities(struct soap *soap, const struct tt__AnalyticsCapabilities *a)
{
    (void)soap; (void)a; /* appease -Wall -Werror */
    soap_serialize_xsd__anyURI(soap, &a->XAddr);
    soap_embedded(soap, &a->RuleSupport, SOAP_TYPE_xsd__boolean);
    soap_embedded(soap, &a->AnalyticsModuleSupport, SOAP_TYPE_xsd__boolean);
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
    {
        soap_serialize_xsd__anyType(soap, a->__any + i);
    }
    }
}

SOAP_FMAC3 int SOAP_FMAC4 soap_out_tt__AnalyticsCapabilities(struct soap *soap, const char *tag, int id, const struct tt__AnalyticsCapabilities *a, const char *type)
{
    if (soap_out_xsd__anyAttribute(soap, "-anyAttribute", -1, &a->__anyAttribute, ""))
        return soap->error;
    (void)soap; (void)tag; (void)id; (void)type;
    if (soap_element_begin_out(soap, tag, soap_embedded_id(soap, id, a, SOAP_TYPE_tt__AnalyticsCapabilities), type))
        return soap->error;
    if (a->XAddr)
    {	if (soap_out_xsd__anyURI(soap, "tt:XAddr", -1, &a->XAddr, ""))
    return soap->error;
    }
    else if (soap_element_nil(soap, "tt:XAddr"))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:RuleSupport", -1, &a->RuleSupport, ""))
        return soap->error;
    if (soap_out_xsd__boolean(soap, "tt:AnalyticsModuleSupport", -1, &a->AnalyticsModuleSupport, ""))
        return soap->error;
    if (a->__any)
    {	int i;
    for (i = 0; i < a->__size; i++)
        if (soap_out_xsd__anyType(soap, "-any", -1, a->__any + i, ""))
            return soap->error;
    }
    return soap_element_end_out(soap, tag);
}

SOAP_FMAC3 struct tt__AnalyticsCapabilities * SOAP_FMAC4 soap_in_tt__AnalyticsCapabilities(struct soap *soap, const char *tag, struct tt__AnalyticsCapabilities *a, const char *type)
{
    size_t soap_flag_XAddr = 1;
    size_t soap_flag_RuleSupport = 1;
    size_t soap_flag_AnalyticsModuleSupport = 1;
    struct soap_blist *soap_blist___any = NULL;
    if (soap_element_begin_in(soap, tag, 0, type))
        return NULL;
    a = (struct tt__AnalyticsCapabilities *)soap_id_enter(soap, soap->id, a, SOAP_TYPE_tt__AnalyticsCapabilities, sizeof(struct tt__AnalyticsCapabilities), 0, NULL, NULL, NULL);
    if (!a)
        return NULL;
    soap_default_tt__AnalyticsCapabilities(soap, a);
    soap_in_xsd__anyAttribute(soap, "-anyAttribute", &a->__anyAttribute, "xsd:anyAttribute");
    if (soap->body && !*soap->href)
    {
        for (;;)
        {	soap->error = SOAP_TAG_MISMATCH;
        if (soap_flag_XAddr && (soap->error == SOAP_TAG_MISMATCH || soap->error == SOAP_NO_TAG))
            if (soap_in_xsd__anyURI(soap, "tt:XAddr", &a->XAddr, "xsd:anyURI"))
            {	soap_flag_XAddr--;
        continue;
        }
        if (soap_flag_RuleSupport && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:RuleSupport", &a->RuleSupport, "xsd:boolean"))
            {	soap_flag_RuleSupport--;
        continue;
        }
        if (soap_flag_AnalyticsModuleSupport && soap->error == SOAP_TAG_MISMATCH)
            if (soap_in_xsd__boolean(soap, "tt:AnalyticsModuleSupport", &a->AnalyticsModuleSupport, "xsd:boolean"))
            {	soap_flag_AnalyticsModuleSupport--;
        continue;
        }
        if (soap->error == SOAP_TAG_MISMATCH && !soap_peek_element(soap))
        {	if (a->__any == NULL)
        {	if (soap_blist___any == NULL)
        soap_blist___any = soap_new_block(soap);
        a->__any = (struct soap_dom_element *)soap_push_block(soap, soap_blist___any, sizeof(struct soap_dom_element));
        if (a->__any == NULL)
            return NULL;
        soap_default_xsd__anyType(soap, a->__any);
        }
        if (soap_in_xsd__anyType(soap, "-any", a->__any, "xsd:anyType"))
        {	a->__size++;
        a->__any = NULL;
        continue;
        }
        }
        if (soap->error == SOAP_TAG_MISMATCH)
            soap->error = soap_ignore_element(soap);
        if (soap->error == SOAP_NO_TAG)
            break;
        if (soap->error)
            return NULL;
        }
        if (a->__any)
            soap_pop_block(soap, soap_blist___any);
        if (a->__size)
            a->__any = (struct soap_dom_element *)soap_save_block(soap, soap_blist___any, NULL, 1);
        else
        {	a->__any = NULL;
        if (soap_blist___any)
            soap_end_block(soap, soap_blist___any);
        }
        if (soap_element_end_in(soap, tag))
            return NULL;
    }
    else
    {	a = (struct tt__AnalyticsCapabilities *)soap_id_forward(soap, soap->href, (void*)a, 0, SOAP_TYPE_tt__AnalyticsCapabilities, 0, sizeof(struct tt__AnalyticsCapabilities), 0, NULL);
    if (soap->body && soap_element_end_in(soap, tag))
        return NULL;
    }
    if ((soap->mode & SOAP_XML_STRICT) && (soap_flag_XAddr > 0 || soap_flag_RuleSupport > 0 || soap_flag_AnalyticsModuleSupport > 0))
    {	soap->error = SOAP_OCCURS;
    return NULL;
    }
    return a;
}

SOAP_FMAC3 int SOAP_FMAC4 soap_put_tt__AnalyticsCapabilities(struct soap *soap, const struct tt__AnalyticsCapabilities *a, const char *tag, const char *type)
{
    register int id = soap_embed(soap, (void*)a, NULL, 0, tag, SOAP_TYPE_tt__AnalyticsCapabilities);
    if (soap_out_tt__AnalyticsCapabilities(soap, tag?tag:"tt:AnalyticsCapabilities", id, a, type))
        return soap->error;
    return soap_putindependent(soap);
}

SOAP_FMAC3 struct tt__AnalyticsCapabilities * SOAP_FMAC4 soap_get_tt__AnalyticsCapabilities(struct soap *soap, struct tt__AnalyticsCapabilities *p, const char *tag, const char *type)
{
    if ((p = soap_in_tt__AnalyticsCapabilities(soap, tag, p, type)))
        if (soap_getindependent(soap))
            return NULL;
    return p;
}

#ifdef __cplusplus
}
#endif

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapC.c */
