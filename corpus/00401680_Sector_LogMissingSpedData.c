
/* debug: CANNOT FIND SECTOR DATA FOR SPED OBJECT */

void Sector_LogMissingSpedData(undefined4 param_1)

{
  undefined1 local_80 [128];
  
  if (DAT_005a6730 != 0) {
    str_sprintf(local_80,s_TOOL_EXPORT_ERROR___CANNOT_FIND_S_005325ac,param_1);
    SrvSend_TextSimple(local_80,0);
  }
  return;
}

