/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 * 
 * (C) Copyright 2004 - 2008, General Dynamics - Advanced Information Systems
 *
 * NITRO is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this program; if not, If not, 
 * see <http://www.gnu.org/licenses/>.
 *
 */

package nitf;

/**
 * Writes NITF files
 */
public final class Writer extends DestructibleObject
{

    /**
     * Create a new NITF Writer.
     * 
     * @throws NITFException
     */
    public Writer() throws NITFException
    {
        construct();
    }

    /**
     * @see DestructibleObject#DestructibleObject(long)
     */
    Writer(long address)
    {
        super(address);
    }

    private native synchronized void construct() throws NITFException;

    /**
     * Destructs the underlying memory
     */
    protected native synchronized void destructMemory();

    /**
     * @return the array of ImageWriters
     */
    public native synchronized ImageWriter[] getImageWriters();

    /**
     * @return the number of image writers
     */
    public native synchronized int getNumImageWriters();

    /**
     * @return the array of TextWriters
     */
    public native synchronized SegmentWriter[] getTextWriters();

    /**
     * @return Returns the number of image writers
     */
    public native synchronized int getNumTextWriters();

    /**
     * Returns the output IOHandle Currently not public
     * 
     * @return the output IOHandle
     */
    native synchronized IOHandle getOutputHandle();

    /**
     * Returns the associated Record Currently not public
     * 
     * @return the associated Record, or null if none is associated
     */
    native synchronized Record getRecord();

    /**
     * Prepares for writing. This is called before the write() function.
     * 
     * @param record
     *            the record to write
     * @param ioHandle
     *            the output IOHandle
     * @return true if the prepare completed successfully, false otherwise
     * @throws NITFException
     */
    public native synchronized boolean prepare(Record record, IOHandle ioHandle)
            throws NITFException;

    /**
     * Returns an ImageWriter pertaining to the image at the given index
     * 
     * @param imageNumber
     *            the index of the image
     * @return an ImageWriter pertaining to the image at the given index
     * @throws NITFException
     *             if a native error occurs
     */
    public native synchronized ImageWriter getNewImageWriter(int imageNumber)
            throws NITFException;

    /**
     * Returns a SegmentWriter pertaining to the text at the given index
     * 
     * @param textNumber
     *            the index of the text
     * @return a SegmentWriter pertaining to the text at the given index
     * @throws NITFException
     *             if a native error occurs
     */
    public native synchronized SegmentWriter getNewTextWriter(int textNumber)
            throws NITFException;

    /**
     * Returns a SegmentWriter pertaining to the graphic at the given index
     * 
     * @param graphicNumber
     *            the index of the graphic
     * @return a SegmentWriter pertaining to the graphic at the given index
     * @throws NITFException
     *             if a native error occurs
     */
    public native synchronized SegmentWriter getNewGraphicWriter(int graphicNumber)
            throws NITFException;

    /**
     * Writes the record
     * 
     * @return true if the write was successful, false otherwise
     * @throws NITFException
     *             if a native error occurs
     */
    public native synchronized boolean write() throws NITFException;

}
