
/* send to explicit port */

void __cdecl ns_SendTo(char *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = DAT_10019868;
  DAT_10019868 = param_4;
  ns_SendDatagram(param_1,param_2,param_3);
  DAT_10019868 = uVar1;
  return;
}

