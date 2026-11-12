
/* sweep */

void Srv_MovePlayerToQuadrant(TachConn *param_1,Quadrant *param_2,undefined4 param_3)

{
  SpED_SrvPlayer *ent;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  ent = param_1->ship;
  if (ent->quadrant != (Quadrant *)0x0) {
    Ent_LeaveQuadrant((SpED *)ent,ent->quadrant);
  }
  Ent_SetQuadrant((SpED *)ent,param_1,param_2);
  Srv_SendStaticObjs(param_1,param_2);
  local_8 = (undefined2)((uint)(ent->ang).x >> 0x10);
  local_6 = (undefined2)((uint)(ent->ang).y >> 0x10);
  local_4 = (undefined2)((uint)(ent->ang).z >> 0x10);
  SrvSend_EnterQuadrant(&ent->pos,&local_8,param_2,0,param_3,1,param_1);
  return;
}

