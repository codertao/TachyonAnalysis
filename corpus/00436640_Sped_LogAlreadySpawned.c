
/* debug: SPED already spawned */

void Sped_LogAlreadySpawned(undefined4 param_1)

{
  undefined1 local_40 [64];
  
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_SPED_OBJECT__d_ALREADY_SPAWNED___0053facc,param_1);
    SrvSend_TextSimple(local_40,0);
  }
  return;
}

