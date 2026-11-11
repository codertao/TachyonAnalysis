
/* push ent onto ent->quadrant->staticList */

void __cdecl Quad_LinkStatic(SpED *ent)

{
  List_PushFront(ent,&ent->quadrant->staticList);
  return;
}

