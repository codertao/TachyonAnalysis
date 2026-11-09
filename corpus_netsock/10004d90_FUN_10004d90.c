
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10004d90(int param_1,undefined2 *param_2,undefined2 param_3)

{
  int iVar1;
  
  iVar1 = WSAStartup(0x101,(LPWSADATA)&DAT_100096c0);
  if (iVar1 != 0) {
    WSAGetLastError();
    return;
  }
  _DAT_100076a4 = 0x1000;
  if (param_2 == (undefined2 *)0x0) {
    DAT_10019858 = 0;
  }
  else {
    DAT_10019858 = *param_2;
  }
  iVar1 = FUN_10004c80(param_1,&DAT_10019858);
  if (iVar1 == 1) {
    WSAGetLastError();
    return;
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = DAT_10019858;
  }
  DAT_100076a0 = param_1;
  DAT_10019868 = param_3;
  FUN_10004c00();
  return;
}

