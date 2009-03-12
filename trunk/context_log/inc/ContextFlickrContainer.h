// Copyright (c) 2007-2009 Google Inc.
// Copyright (c) 2006-2007 Jaiku Ltd.
// Copyright (c) 2002-2006 Mika Raento and Renaud Petit
//
// This software is licensed at your choice under either 1 or 2 below.
//
// 1. MIT License
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// 2. Gnu General Public license 2.0
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//
//
// This file is part of the JaikuEngine mobile client.

#ifndef CONTEXTFLICKRCONTAINER_H
#define CONTEXTFLICKRCONTAINER_H

// INCLUDES
#include <coecntrl.h>

#include "i_logger.h"
#include "hash.h"
#include "log_base_impl.h"
#include "app_context.h"
#include "locationing.h"
#include "symbian_tree.h"
#include "circular.h"
   
#include "current_loc.h"
// FORWARD DECLARATIONS
class CEikLabel;        // for example labels


// CLASS DECLARATION

/**
*  CContextFlickrContainer  container control class.
*  
*/
class CContextFlickrContainer : public CCoeControl, MCoeControlObserver, public Mlogger, public MNaming, public MContextBase
    {
    public: // Constructors and destructor
        
        /**
        * EPOC default constructor.
        * @param aRect Frame rectangle for container.
        */
	CContextFlickrContainer(MApp_context& Context);
        void ConstructL(const TRect& aRect);

        /**
        * Destructor.
        */
        ~CContextFlickrContainer();

	CGenericIntMap* get_cellid_names();
    public: // New functions
	void add_cellid_name(const TBBCellId& Cell, const TDesC& name);
	bool is_named(TInt id);
	void set_status(const TDesC& status);
	void set_error(const TDesC& err);
	CCircularLog*	BaseLog();
	CCurrentLoc* CurrentLoc();

    public: // Functions from base classes
	virtual void NewSensorEventL(const TTupleName& aName, const TDesC& aSubName, const CBBSensorEvent& aData);

    private: // Functions from base classes
	void register_source(const TDesC& name);

       /**
        * From CoeControl,SizeChanged.
        */
        void SizeChanged();

       /**
        * From CoeControl,CountComponentControls.
        */
        TInt CountComponentControls() const;

       /**
        * From CCoeControl,ComponentControl.
        */
        CCoeControl* ComponentControl(TInt aIndex) const;

       /**
        * From CCoeControl,Draw.
        */
        void Draw(const TRect& aRect) const;
	TKeyResponse OfferKeyEventL(const TKeyEvent &aKeyEvent, TEventCode aType);

       /**
        * From ?base_class ?member_description
        */
        // event handling section
        // e.g Listbox events
        void HandleControlEventL(CCoeControl* aControl,TCoeEvent aEventType);

    private: //data
        
        CEikLabel* iLabel;          // example label
	CEikLabel* status_label;
	CEikLabel* err_label;

	CDesC16Array *log_labels;

	CArrayFixFlat<CEikLabel*>* label_store;
	CArrayFixFlat<CEikLabel*>* value_store;

	CEikLabel*	find_value_label(const TDesC& name);

	CGenericIntMap* cellid_names;

	TBuf<100> current_name;

	TInt	iCursorPos;	TInt iCurrentMin, iCurrentMax, iMaxLines;

	CCurrentLoc*	iCurrentLoc;
#ifdef __S60V2__
	class CAknsBasicBackgroundControlContext *iBackground, *iHighLight;
#endif
    };

#endif

// End of File
