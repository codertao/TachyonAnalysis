
void FUN_00410280(int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_005b95e0;
  bVar3 = param_1 != DAT_005b95e0;
  DAT_005b95e4 = DAT_005b95e0;
  DAT_005b95e0 = param_1;
  if (((bVar3) && (iVar2 != 0)) && (pcVar1 = *(code **)(iVar2 + 0x28), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 4) == 0) {
    FUN_0042c300();
    return;
  }
  return;
}

