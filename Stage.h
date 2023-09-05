#pragma once
#include "Sprite.h"
#include "ViewProjection.h"

#include "Model.h"
#include "WorldTransform.h"
class Stage {
public:
	Stage();

	~Stage();

	void Initialize(ViewProjection view);

	void Update();

	void Draw2DFar();

	//
	void Draw3D();

private:
	uint32_t textureHandleBG_ = 0;
	Sprite* spriteBG_ = nullptr;
	// カメラ
	ViewProjection viewProjection_;
	// 地面
	uint32_t textureHandoleStage_ = 0;
	Model* modelStage_ = nullptr;
	WorldTransform worldTransformStage_;
};
