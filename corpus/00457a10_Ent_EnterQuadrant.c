
/* entity ENTER_QUADRANT event handler */

void __cdecl Ent_EnterQuadrant(SpED *ent,Quadrant *q)

{
  FUN_00445720(ent,q,s_ENTER_QUADRANT_00548d44);
  FUN_004579c0(ent);
  q->playerCount = q->playerCount + 1;
  q->occupied = 1;
  ent->target = (SpED *)0x0;
  Quad_LinkDynamic(ent);
  FUN_00457730(ent);
  ent->netFlags = 0;
  FUN_0045cff0(ent,&q->staticSectorMap);
  return;
}

