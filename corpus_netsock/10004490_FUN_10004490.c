
void __cdecl FUN_10004490(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _union_1226 _Var3;
  
  puVar1 = DAT_10019c5c;
  *(undefined2 *)DAT_10019c5c = 0x1051;
  *(undefined2 *)((int)puVar1 + 2) = 8;
  puVar1[1] = param_1[0x28];
  FUN_10004220(puVar1,8,0,1);
  if (DAT_10019c68 != 0) {
    if (param_1[0x29] == 0) {
      _Var3.S_addr = 0;
    }
    else {
      _Var3 = (_union_1226)*(_union_1226 *)&((_union_1226 *)(param_1[0x29] + 4))->S_un_b;
    }
    FUN_100042e0((int)param_1,(in_addr)_Var3);
  }
  if ((void *)param_1[0x20] != (void *)0x0) {
    free((void *)param_1[0x20]);
  }
  for (iVar2 = 0x2f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  DAT_100198bc = DAT_100198bc + -1;
  return;
}

