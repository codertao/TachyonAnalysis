
/* seq/ack check, retire acked events, dispatch sub-msgs 2/4/6/7/app */

void NetCli_ProcessPacket(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  puVar4 = param_1 + 2;
  if ((DAT_006af64c == 0) || (DAT_006af64c < *param_1)) {
    DAT_006af64c = *param_1;
    uVar1 = param_1[1];
    iVar2 = DAT_006af62c;
    while (iVar3 = iVar2, iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
      if ((*(uint *)(iVar3 + 0x1c) != 0) && (*(uint *)(iVar3 + 0x1c) <= uVar1)) {
        FUN_004b7930(iVar3,&DAT_006af62c);
        FUN_004b78a0(&DAT_006af5e4,iVar3);
      }
    }
    for (; puVar4 < (uint *)((int)param_1 + param_2);
        puVar4 = (uint *)((int)puVar4 + (uint)*(ushort *)((int)puVar4 + 2))) {
      switch((short)*puVar4) {
      case 2:
        NetCli_HandleGameData(puVar4);
        break;
      default:
        NetCli_HandleAppEvent(puVar4);
        break;
      case 4:
        NetCli_HandleStartupData(puVar4);
        break;
      case 6:
        NetCli_HandlePlayerInfo(puVar4);
        break;
      case 7:
        NetCli_HandleKick(puVar4);
      }
    }
  }
  return;
}

