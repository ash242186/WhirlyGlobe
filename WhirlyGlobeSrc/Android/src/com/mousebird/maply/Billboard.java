/*
 *  Billboard.java
 *  WhirlyGlobeLib
 *
 *  Created by jmnavarro
 *  Copyright 2011-2016 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */
package com.mousebird.maply;

import android.graphics.Bitmap;
import android.graphics.Color;
import android.util.Size;

import java.util.ArrayList;
import java.util.List;


public class Billboard {

    public Billboard(Bitmap texture, Color color, Size size) {
        initialise();
    }

    public native void setCenter (Point3d center);

    public native Point3d getCenter();

    public native void addPoly (SingleBillboardPoly poly);

    public native void setSize(Point2d size);

    public native Point2d getSize();

    public native void setSelectable (boolean selectable);

    public native boolean getSelectable();

    private long selectID = Identifiable.genID();

    private ScreenObject screenObject;

    private ArrayList<VertexAttribute> vertexAttributes = new ArrayList<>();

    public ScreenObject getScreenObject() {
        return screenObject;
    }

    public void setScreenObject(ScreenObject screenObject) {
        this.screenObject = screenObject;
    }

    public ArrayList<VertexAttribute> getVertexAttributes() {
        return vertexAttributes;
    }

    public void setVertexAttributes(ArrayList<VertexAttribute> vertexAttributes) {
        this.vertexAttributes = vertexAttributes;
    }

    public long getSelectID() {
        return selectID;
    }

    public void finalize()
    {
        dispose();
    }

    static
    {
        nativeInit();
    }
    private static native void nativeInit();
    native void initialise();
    native void dispose();
}
