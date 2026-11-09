
undefined4 __cdecl
netsock_SendPacket(char *param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
                    /* 0x1a60  23  netsock_SendPacket */
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  uVar1 = FUN_10005240(param_1,param_2,param_3,param_4);
  return uVar1;
}

