
undefined8 __fastcall FUN_004def47(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &g_SndVoices;
  iVar3 = 0x18;
  do {
    if (*(char *)(puVar4 + 0xf) != '\0') {
      FUN_004dee48();
      *(undefined1 *)((int)puVar4 + 0x3e) = 1;
    }
    puVar4 = puVar4 + 0x10;
    iVar2 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  puVar4 = &DAT_004c9a02;
  iVar3 = 0x18;
  do {
    if (*(char *)(puVar4 + 0xf) != '\0') {
      FUN_004dee48();
    }
    puVar4 = puVar4 + 0x10;
    iVar2 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  iVar3 = 0x18;
  do {
    FUN_004dee48();
    iVar2 = iVar3 + -1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return CONCAT44(param_2,in_EAX);
}

