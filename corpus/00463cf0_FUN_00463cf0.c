
char * FUN_00463cf0(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_40;
  undefined4 local_3f;
  
  local_40 = DAT_00562b14;
  puVar3 = &local_3f;
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  Cbin_GetScalar(&DAT_00532af4,s_GROUP_CLASS_ID_0054a28c,&local_40,0x40,0);
  pcVar1 = (char *)FUN_0048e850(DAT_005a6144,&local_40);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_GROUP_0053fb4c;
  }
  return pcVar1;
}

