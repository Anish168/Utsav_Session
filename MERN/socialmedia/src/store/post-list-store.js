import { useReducer } from "react";
import { createContext } from "react";
// const PostList = createContext({});

// const PostListProvider = ({ children }) => {
//   return <PostList.Provider value={[]}>{children}</PostList.Provider>;
// };

// export default PostListProvider;

// export const PostList = createContext({
//   postList: [],
//   addPost: () => {},
//   delPost: () => {},
// });

// const postListReducer = (currPostList, action) => {
//   return currPostList;
// };

// const PostListProvider = ({ children }) => {
//   const [postList, dispatchPostList] = useReducer(
//     postListReducer,
//     DEFAULT_POST_LIST
//   );

//   const addPost = () => {};
//   const delPost = () => {};

//   return (
//     <PostList.Provider
//       value={{
//         postList,
//         addPost,
//         delPost,
//       }}
//     >
//       {children}
//     </PostList.Provider>
//   );
// };

// const DEFAULT_POST_LIST = [
//   {
//     id: "1",
//     title: "Going to Mumbai",
//     body: "I am going to Mumbai for a business meeting with my boss. I have booked the flight and hotel through Expedia.",
//     reactions: "2",
//     userId: "user-9",
//     tags: ["vacations", "Mumbai"],
//   },
//   {
//     id: "2",
//     title: "Finally Graduated",
//     body: "Finally Degree mill gye. Nice experince rha engineering m",
//     reactions: "200",
//     userId: "user-19",
//     tags: ["B.Tech", "Graudated"],
//   },
// ];

// export default PostListProvider;
export const PostList = createContext({
  postList: [],
  addPost: () => {},
  delPost: () => {},
});

const postListReducer = (currPostList, action) => {
  let newPostList = currPostList;
  if (action.type === "DELETE_POST") {
    newPostList = currPostList.filter(
      (post) => post.id !== action.payload.postId
    );
  } else if (action.type === "ADD_POST") {
    newPostList = [action.payload, ...currPostList];
  }
  return newPostList;
};

const PostListProvider = ({ children }) => {
  const [postList, dispatchPostList] = useReducer(
    postListReducer,
    DEFAULT_POST_LIST
  );

  const addPost = (userId, postTitle, postBody, reactions, tags) => {
    dispatchPostList({
      type: "ADD_POST",
      payload: {
        id: Date.now(),
        title: postTitle,
        body: postBody,
        reactions: reactions,
        userId: userId,
        tags: tags,
      },
    });
  };

  const delPost = (postId) => {
    dispatchPostList({
      type: "DELETE_POST",
      payload: {
        postId,
      },
    });
  };

  return (
    <PostList.Provider value={{ postList, addPost, delPost }}>
      {children}
    </PostList.Provider>
  );
};

const DEFAULT_POST_LIST = [
  {
    id: "1",
    title: "Going to Mumbai",
    body: "Hi Friends, I am going to Mumbai for my vacations. Hope to enjoy a lot. Peace out.",
    reactions: 2,
    userId: "user-9",
    tags: ["vacation", "Mumbai", "Enjoying"],
  },
  {
    id: "2",
    title: "Paas ho bhai",
    body: "4 saal ki masti k baad bhi ho gaye hain paas. Hard to believe.",
    reactions: 15,
    userId: "user-12",
    tags: ["Graduating", "Unbelievable"],
  },
];

export default PostListProvider;
