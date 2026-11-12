
/* entity ENTER_QUADRANT event handler */

void __cdecl Ent_EnterQuadrant(SpED *ent,Quadrant *q)

{
  Nop(ent,q,s_ENTER_QUADRANT_00548d44);
  Ent_LeaveAllQuadrants(ent);
  q->playerCount = q->playerCount + 1;
  q->occupied = 1;
  ent->target = (SpED *)0x0;
  Quad_LinkDynamic(ent);
  Ent_AddAsTarget(ent);
  ent->netFlags = 0;
  Quad_LinkDynamicIfAbsent(ent,&q->staticSectorMap);
  return;
}

