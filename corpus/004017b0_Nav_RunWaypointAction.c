
/* wp +0xc: 0 change route(+0x10), 1 hyperspace out, 2 deactivate, 3 group order / ENTERGATE, 4
   unspawn */

bool Nav_RunWaypointAction(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_3 + 0xc)) {
  case 0:
    iVar1 = Nav_ChangeRoute(param_1,param_2,*(undefined4 *)(param_3 + 0x10));
    return iVar1 == 0;
  case 1:
    TrigAct_ObjHyperOut(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x20),0,1,
                        *(undefined4 *)(param_1 + 100));
    return true;
  case 2:
    Ent_SendMessage(param_1,1,0);
    return true;
  case 3:
    break;
  case 4:
    Ent_SendMessage(param_1,0x18,0);
  default:
    return true;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    Ent_SendMessage(param_1,2,*(undefined4 *)(param_3 + 0x10));
    return true;
  }
  TrigAct_GroupSetOrder
            (*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x54),*(undefined4 *)(param_3 + 0x10),0,
             *(undefined4 *)(param_1 + 100));
  return true;
}

