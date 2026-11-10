
/* 0x2005: op 1 front->rear, 2 rear->front (falls through to 3 with amount 0), 3..6
   Power_TransferSrv */

void TachSrv_OnPowerOp(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(DAT_0058b068 + 200);
  iVar1 = *(int *)(iVar2 + 0x8c) + 0xd0;
  switch(*param_1) {
  case 1:
    uVar3 = Shield_GetMax(iVar2 + 0x11c,iVar1);
    Power_TransferPool(iVar2 + 0x124,iVar2 + 300,uVar3);
    return;
  case 2:
    uVar3 = Shield_GetMax(iVar2 + 0x11c,iVar1);
    Power_TransferPool(iVar2 + 300,iVar2 + 0x124,uVar3);
  case 3:
    Power_TransferSrv(iVar2 + 0x11c,*(int *)(iVar2 + 0x8c) + 0xd0,3,param_1[1]);
    return;
  case 4:
    Power_TransferSrv(iVar2 + 0x11c,iVar1,4,param_1[1]);
    return;
  case 5:
    Power_TransferSrv(iVar2 + 0x11c,iVar1,5,param_1[1]);
    return;
  case 6:
    Power_TransferSrv(iVar2 + 0x11c,iVar1,6,param_1[1]);
  default:
    return;
  }
}

