
void __cdecl FUN_10003630(int param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  if ((*DAT_10019c5c == 0x1011) && (DAT_10019c5c[1] == 0x104)) {
    iVar1 = 4;
    bVar4 = true;
    piVar2 = (int *)(DAT_10019c5c + 0x72);
    piVar3 = &DAT_100199cc;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *piVar2 == *piVar3;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (bVar4);
    if (bVar4) {
      FUN_100035a0((undefined4 *)(DAT_10019c5c + 2),param_1,param_2);
    }
  }
  return;
}

