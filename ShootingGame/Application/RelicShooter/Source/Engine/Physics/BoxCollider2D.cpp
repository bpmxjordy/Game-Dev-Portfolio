#include "BoxCollider2D.h"
#include "CircleCollider2D.h"
#include "../../Game/GameObjects/TileCollisionBlock.h"
#include "../../Game/GameObjects/TileMap.h"

BoxCollider2D::BoxCollider2D()
= default;

BoxCollider2D::~BoxCollider2D()
= default;

bool BoxCollider2D::CollidesWith(Collider2D* pCollider2D)
{
	return pCollider2D->CollidesWith(this);
}


bool BoxCollider2D::CollidesWith(BoxCollider2D* pBoxCollider2D)
{
	if (!pBoxCollider2D)
		return false;
	
	return RectangleRectangleCollision(this, pBoxCollider2D);

}

bool BoxCollider2D::CollidesWith(CircleCollider2D* pCircleCollider2D)
{
	return RctangleCircleCollision(this, pCircleCollider2D);
}

bool BoxCollider2D::CollidesWith(TileMap* pTileMap)
{
	return pTileMap->CollidesWith(this);
}

bool BoxCollider2D::CollidesWith(TileCollisionBlock* pTileCollisionBlock)
{
	return pTileCollisionBlock->CollidesWith(this);
}
