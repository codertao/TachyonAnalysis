
/* 0x2005: op 1 front->rear, 2 rear->front (falls through to 3 with amount 0), 3..6
   Power_TransferSrv */

void TachSrv_OnPowerOp(undefined2 *param_1)

{
  void **ppvVar1;
  SpED_SrvPlayer *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = g_SrvCurConn->ship;
  ppvVar1 = &pSVar2->desc[1].getText;
  switch(*param_1) {
  case 1:
    uVar3 = Shield_GetMax(&pSVar2->power,ppvVar1);
    Power_TransferPool(&(pSVar2->power).shieldFront,&(pSVar2->power).shieldRear,uVar3);
    return;
  case 2:
    uVar3 = Shield_GetMax(&pSVar2->power,ppvVar1);
    Power_TransferPool(&(pSVar2->power).shieldRear,&(pSVar2->power).shieldFront,uVar3);
  case 3:
    Power_TransferSrv(&pSVar2->power,&pSVar2->desc[1].getText,3,param_1[1]);
    return;
  case 4:
    Power_TransferSrv(&pSVar2->power,ppvVar1,4,param_1[1]);
    return;
  case 5:
    Power_TransferSrv(&pSVar2->power,ppvVar1,5,param_1[1]);
    return;
  case 6:
    Power_TransferSrv(&pSVar2->power,ppvVar1,6,param_1[1]);
  default:
    return;
  }
}

