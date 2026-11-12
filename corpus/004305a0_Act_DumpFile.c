
/* sweep: "Created \"%s\"." */

void Act_DumpFile(void)

{
  int iVar1;
  undefined1 local_200 [512];
  
  iVar1 = Snapshot_Save();
  if (iVar1 < 0) {
    str_sprintf(local_200,s_Unable_to_create___s___0053eb40,&DAT_0056aaa0);
    SrvSend_TextSimple(local_200,0);
    return;
  }
  str_sprintf(local_200,s_Created___s___0053eb30,&DAT_0056aaa0);
  SrvSend_TextSimple(local_200,0);
  return;
}

